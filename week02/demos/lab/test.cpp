#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const float pi{3.14159265354f};
    const char16_t c{'C'};
    const string s{"STRING"};
    const bool t{true};

    cout << setprecision(5) << pi << endl << endl;

    cout << fixed << setprecision(5) << pi << endl << endl;
    cout << scientific << setprecision(5) << pi << endl << endl;

    cout << setw(15) << left << setfill('-') << c << endl << endl;
    cout << setw(15) << right << setfill('-') << s << endl << endl;
    cout << setw(15) << internal << setfill('-') << fixed << pi << endl << endl;


    cout << t << endl << endl;
    cout << boolalpha << t << endl << endl;
    cout << noboolalpha << t << endl << endl;

    return 0;
}
