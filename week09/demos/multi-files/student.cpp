//
// Created by suyi on 24-5-6.
//

#include <iostream>
#include "student.h"
// using namespace Student;

bool Student::setName(const std::string &name) {
	this->name = name;
	return true;
}

bool Student::setAge(const int &age) {
	this->age = age;
	return true;
}

bool Student::setGender(const bool &gender) {
	this->gender = gender;
	return true;
}

bool Student::getInfo() const {
	std::cout << this->name << " is a " << (this->gender ? "Man" : "Women") << ", and his/her age is " << this->age <<
			std::endl;
	return true;
}
