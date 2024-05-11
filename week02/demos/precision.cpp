#include <iostream>
using namespace std;

int main()
{
    float f1 = 23400000000;
    float f2 = f1 + 10;

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "(f1 - f2 == 0) = " << (f1 - f2 == 0) << endl;


    long i1 = 23400000000;
    long i2 = i1 + 10;

    // cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    cout << "i1 = " << i1 << endl;
    cout << "i2 = " << i2 << endl;
    cout << "i1 - i2 = " << i1 - i2 << endl;
    cout << "(i1 - i2 == 0) = " << (i1 - i2 == 0) << endl;
    return 0;
}
