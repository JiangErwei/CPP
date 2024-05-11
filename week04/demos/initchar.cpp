#include <iostream>
#include <cstring>
using namespace std;

/***
 * String 有两种，一种是由 char 构成的数组， 一种是 String Class 库实现的
 * 这里是第一种
 */

int main() {
    char rabbit[16] = {'P', 'e', 't', 'e', 'r'};
    cout << "String length is " << strlen(rabbit) << endl;
    for (int i = 0; i < 16; i++)
        cout << i << ":" << +rabbit[i] << "(" << rabbit[i] << ")" << endl;

    char bad_pig[9] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g'}; // 没有结束标志
    char good_pig[10] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g', '\0'}; // 有结束标志，长度+1

    cout << "Rabbit is (" << rabbit << ")" << endl;
    cout << "Pig's bad name is (" << bad_pig << ")" << endl;
    cout << "Pig's good name is (" << good_pig << ")" << endl;

    char name[10] = {'Y', 'u', '\0', 'S', '.', '0'}; // 初始化早停
    cout << "(" << name << ")" << endl;
    cout << strlen(name) << endl;

    return 0;
}
