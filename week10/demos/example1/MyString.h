//
// Created by suyi on 24-5-10.
//

#ifndef MYSTRING_H
#define MYSTRING_H

#pragma once

#include <cstring>
#include <iostream>
using namespace std;
const int MAXLEN = 2048;

class MyString {
private:
	int len{0};
	char str[MAXLEN]{'\0'};

public:
	explicit MyString(const char *str /*, const int &len*/) {
		// if (str && len < MAXLEN) {
		// 	strncpy(this->str, str, len);
		// 	this->len = len;
		// 	this->str[len - 1] = '\0';
		// }else if (!str)
		// 	cout << "null pointer of str \n";
		// else
		// 	cout << "str is too long \n";
		strcpy(this->str, str);
		this->len = strlen(this->str);
	}

	~MyString() = default;

	MyString operator+(const MyString &str) const {
		char merge[MAXLEN]{'\0'};
		strncpy(merge, this->str, this->len);
		strncat(merge, str.getStr(), str.getLen());
		// return {merge};
		return MyString(merge);
	}

	MyString operator+(const int &n) const {
		char merge[MAXLEN]{'\0'};
		strncpy(merge, this->str, this->len);
		char strN[16]{'\0'};
		sprintf(strN, "%d", n);
		strncat(merge, strN, strlen(strN));
		// return {merge};
		return MyString(merge);
	}

	friend MyString operator+(const int &n, const MyString &str) {
		char merge[MAXLEN]{'\0'};
		sprintf(merge, "%d", n);
		strncat(merge, str.getStr(), str.getLen());
		// return {merge};
		return MyString(merge);
	}

	MyString &operator+=(const MyString &str) {
		strncat(this->str, str.getStr(), str.getLen());
		this->len += str.getLen();
		return *this;
	}

	MyString &operator+=(const int n) {
		char strN[16]{'\0'};
		sprintf(strN, "%d", n);
		strncat(this->str, strN, strlen(strN));
		this->len += strlen(strN);
		return *this;
	}

	friend ostream &operator<<(ostream &os, const MyString &str) {
		os << "\"" << str.getStr() << "\" : " << str.getLen();
		return os;
	}

	const char *getStr() const {
		return this->str;
	}

	int getLen() const {
		return this->len;
	}
};


#endif //MYSTRING_H
