#include <iostream>
#include <string>
using namespace std;


class BankAccount {
protected:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(string accNum, string accHolder, double bal) {
        accountNumber = accNum;
        accountHolderName = accHolder;
        balance = bal;
    }

    virtual ~BankAccount() {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    virtual void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    double getBalance() {
        return balance;
    }

    virtual void calculateInterest() {
        cout << "No interest for base account.\n";
    }

    virtual void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};


class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string accNum, string accHolder, double bal, double rate)
        : BankAccount(accNum, accHolder, bal), interestRate(rate) {}

    void calculateInterest() override {
        double interest = balance * interestRate / 100;
        cout << "Interest earned: " << interest << endl;
    }

    void displayAccountInfo() override {
        BankAccount::displayAccountInfo();
        cout << "Account Type: Savings\nInterest Rate: " << interestRate << "%" << endl;
    }
};


class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(string accNum, string accHolder, double bal, double limit)
        : BankAccount(accNum, accHolder, bal), overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit && amount > 0) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Withdrawal exceeds overdraft limit.\n";
        }
    }

    void checkOverdraft() {
        if (balance < 0)
            cout << "Overdraft used: " << -balance << endl;
        else
            cout << "No overdraft used.\n";
    }

    void displayAccountInfo() override {
        BankAccount::displayAccountInfo();
        cout << "Account Type: Checking\nOverdraft Limit: " << overdraftLimit << endl;
    }

    void calculateInterest() override {
        cout << "No interest for Checking account.\n";
    }
};


class FixedDepositAccount : public BankAccount {
private:
    int term; 

public:
    FixedDepositAccount(string accNum, string accHolder, double bal, int t)
        : BankAccount(accNum, accHolder, bal), term(t) {}

    void calculateInterest() override {
        double interestRate = 0.06; // Fixed rate
        double interest = balance * interestRate * term / 12;
        cout << "Fixed Deposit Interest: " << interest << endl;
    }

    void withdraw(double amount) override {
        cout << "Withdrawal not allowed before maturity.\n";
    }

    void displayAccountInfo() override {
        BankAccount::displayAccountInfo();
        cout << "Account Type: Fixed Deposit\nTerm: " << term << " months" << endl;
    }
};


const int MAX_ACCOUNTS = 10;
BankAccount* accounts[MAX_ACCOUNTS];
int accountCount = 0;

void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        cout << "Account limit reached.\n";
        return;
    }

    int type;
    string accNum, accHolder;
    double bal;
    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, accHolder);
    cout << "Enter Initial Balance: ";
    cin >> bal;

    cout << "Select Account Type:\n1. Savings\n2. Checking\n3. Fixed Deposit\nChoice: ";
    cin >> type;

    switch (type) {
    case 1: {
        double rate;
        cout << "Enter Interest Rate: ";
        cin >> rate;
        accounts[accountCount++] = new SavingsAccount(accNum, accHolder, bal, rate);
        break;
    }
    case 2: {
        double limit;
        cout << "Enter Overdraft Limit: ";
        cin >> limit;
        accounts[accountCount++] = new CheckingAccount(accNum, accHolder, bal, limit);
        break;
    }
    case 3: {
        int term;
        cout << "Enter Term (in months): ";
        cin >> term;
        accounts[accountCount++] = new FixedDepositAccount(accNum, accHolder, bal, term);
        break;
    }
    default:
        cout << "Invalid option.\n";
    }
}

void showAllAccounts() {
    for (int i = 0; i < accountCount; i++) {
        cout << "\nAccount " << (i + 1) << ":\n";
        accounts[i]->displayAccountInfo();
    }
}

void accessAccount() {
    int accNum;
    cout << "Enter account index (1 to " << accountCount << "): ";
    cin >> accNum;
    if (accNum < 1 || accNum > accountCount) {
        cout << "Invalid account index.\n";
        return;
    }

    BankAccount* acc = accounts[accNum - 1];
    int choice;
    do {
        cout << "\n--- Account Menu ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Show Balance\n4. Display Info\n5. Calculate Interest\n6. Back\nChoice: ";
        cin >> choice;
        double amt;
        switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amt;
            acc->deposit(amt);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            acc->withdraw(amt);
            break;
        case 3:
            cout << "Current Balance: " << acc->getBalance() << endl;
            break;
        case 4:
            acc->displayAccountInfo();
            break;
        case 5:
            acc->calculateInterest();
            break;
        }
    } while (choice != 6);
}

int main() {
    int choice;
    do {
        cout << "\n--- Bank Management System ---\n";
        cout << "1. Create Account\n2. Show All Accounts\n3. Access Account\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
        case 1: createAccount(); break;
        case 2: showAllAccounts(); break;
        case 3: accessAccount(); break;
        case 4: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);

   
    for (int i = 0; i < accountCount; i++) {
        delete accounts[i];
    }

    return 0;
}
/*OUTPUT

--- Bank Management System ---
1. Create Account
2. Show All Accounts
3. Access Account
4. Exit
Choice: 1
Enter Account Number: 123456
Enter Account Holder Name: jitesh sharma
Enter Initial Balance: 36222
Select Account Type:
1. Savings
2. Checking
3. Fixed Deposit
Choice: 1
Enter Interest Rate: 5

--- Bank Management System ---
1. Create Account
2. Show All Accounts
3. Access Account
4. Exit
Choice: 2

Account 1:
Account Number: 123456
Account Holder: jitesh sharma
Balance: 36222
Account Type: Savings
Interest Rate: 5%

--- Bank Management System ---
1. Create Account
2. Show All Accounts
3. Access Account
4. Exit
Choice: 3
Enter account index (1 to 1): 1

--- Account Menu ---
1. Deposit
2. Withdraw
3. Show Balance
4. Display Info
5. Calculate Interest
6. Back
Choice: 3
Current Balance: 36222

--- Account Menu ---
1. Deposit
2. Withdraw
3. Show Balance
4. Display Info
5. Calculate Interest
6. Back
Choice: 2
Enter amount to withdraw: 5000
Amount withdrawn successfully.

--- Account Menu ---
1. Deposit
2. Withdraw
3. Show Balance
4. Display Info
5. Calculate Interest
6. Back
Choice: 2
Enter amount to withdraw: 10000
Amount withdrawn successfully.

--- Account Menu ---
1. Deposit
2. Withdraw
3. Show Balance
4. Display Info
5. Calculate Interest
6. Back
Choice: 1
Enter amount to deposit: 11455
Amount deposited successfully.

--- Account Menu ---
1. Deposit
2. Withdraw
3. Show Balance
4. Display Info
5. Calculate Interest
6. Back
Choice: 6

--- Bank Management System ---
1. Create Account
2. Show All Accounts
3. Access Account
4. Exit
Choice: 4
Exiting...
*/