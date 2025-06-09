#include <iostream>
using namespace std;

class X {
protected:
    int a, b, c;
};

class Y : public X {
public:
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void getData() {
        int sumOfCubes = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "Sum of cubes: " << sumOfCubes << endl;
    }
};

int main() {
    Y obj;
    int x, y, z;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    obj.setData(x, y, z);
    obj.getData();

    return 0;
}
/*
output:
Enter three integers: 1 4 5
Sum of cubes: 190
*/