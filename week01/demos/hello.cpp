// try an example with standard C++11

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {"Hello", "world", "C++11"};
    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;
}