//
// Created by suyi on 24-5-1.
//

#include <iostream>
#include <cstdint>
using namespace std;

void print(int len, int8_t arr[]) {
    for (int i(0); i < len; ++i)
        cout << +arr[i] << endl;
}

int main() {
    const int len(5);
    int8_t arr1[len];
    int8_t arr2[len]{0, 1, 2, 3, 4};
    int8_t arr3[len]{0, 1, 2};
    print(len, arr1);
    print(len, arr2);
    print(len, arr3);
    return 0;
}


/***
 * 由于cout和int8_t类型的交互方式引起的。
 * int8_t是一个类型别名，实际上它等同于signed char。
 * 在C++中，当你使用cout来输出一个signed char类型的值时，它会被当作字符来处理，而不是数字。
 * 因此，对于arr2和arr3的元素，它们将被解释为ASCII字符的值，而不是整数值。
 *
 * 修改方法：使用 +arr[i] 使用正整数输出
 */