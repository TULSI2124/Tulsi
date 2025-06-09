#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    A(int x) {
        a = x;
        cout << "Constructor of A called\n";
    }
};

class B {
protected:
    int b;
public:
    B(int y) {
        b = y;
        cout << "Constructor of B called\n";
    }
};

class C : public A, public B {
protected:
    int c;
public:
    C(int x, int y, int z) : A(x), B(y) {
        c = z;
        cout << "Constructor of C called\n";
    }
};

class D : public C {
    int d;
public:
    D(int x, int y, int z, int w) : C(x, y, z) {
        d = w;
        cout << "Constructor of D called\n";
    }

    void sum() {
        int total = a + b + c + d;
        cout << "Sum of four numbers: " << total << endl;
    }
};

int main() {
    D obj(10, 20, 30, 40);
    obj.sum();
    return 0;
}