//
// Created by suyi on 24-5-2.
//

#include <cstring>
#include <iostream>

using namespace std;

void print(const int len, const char str[]) {
    for (int i = 0; i < len; ++i)
        cout << str[i];
    cout << endl;
}

int main() {
    char str1[]{"Hello \0 CPP"};
    char str2[]{"SUSTech!"};

    char merge[128];

    print(strlen(str1), str1);
    print(strlen(str2), str2);

    strcpy(merge, str1);
    strcat(merge, str2);
    print(strlen(merge), merge);

    return 0;
}
