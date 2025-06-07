#include <iostream>
using namespace std;

// Base class
class Cricket {
public:
    // Virtual function to allow overriding
    virtual void getTotalOvers() {
        cout << "Total overs: Depends on the match type." << endl;
    }
};

// Derived class for T20 Match
class T20Match : public Cricket {
public:
    void getTotalOvers() override {
        cout << "Total overs in a T20 Match: 20 overs." << endl;
    }
};

// Derived class for Test Match
class TestMatch : public Cricket {
public:
    void getTotalOvers() override {
        cout << "Total overs in a Test Match: 90 overs per day." << endl;
    }
};

int main() {
    // Base class pointer
    Cricket* match;

    // T20 Match
    T20Match t20;
    match = &t20;
    match->getTotalOvers(); // Calls T20Match's method

    // Test Match
    TestMatch test;
    match = &test;
    match->getTotalOvers(); // Calls TestMatch's method

    return 0;
}
/*OUTPUT
Total overs in a T20 Match: 20 overs.
Total overs in a Test Match: 90 overs per day.	
*/