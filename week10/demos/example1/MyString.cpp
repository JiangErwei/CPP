//
// Created by suyi on 24-5-10.
//

#include "MyString.h"
#include <iostream>

using namespace std;

int main() {
	MyString str1{"hello"};
	const MyString str2{" world"};

	cout << str1.getLen() << endl;
	cout << str2.getLen() << endl;

	str1 += str2;
	cout << str1.getLen() << endl;
	cout << str1.getStr() << endl;

	const MyString str3 = str1 + str2;
	cout << str3.getLen() << endl;
	cout << str3.getStr() << endl;

	MyString str4 = str3 + 12345;
	cout << str4.getLen() << endl;
	cout << str4.getStr() << endl;

	str4 += 100;
	cout << str4.getLen() << endl;
	cout << str4.getStr() << endl;

	const MyString str5 = 10086 + str4;
	cout << str5.getLen() << endl;
	cout << str5.getStr() << endl;
	cout << str5 <<endl;
	return 0;
}
