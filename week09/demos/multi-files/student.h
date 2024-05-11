//
// Created by suyi on 24-5-6.
//


#ifndef STUDENT_H
#define STUDENT_H


#pragma once

#include <string>


class Student {
private:
	std::string name;
	int age{};
	bool gender{};

public:
	bool setName(const std::string &);

	bool setAge(const int &);

	bool setGender(const bool &);

	bool getInfo() const;
};


#endif //STUDENT_H
