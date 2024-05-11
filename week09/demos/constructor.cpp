//
// Created by suyi on 24-5-8.
//


#include <cstring>
#include <iostream>

using namespace std;

class Student {
private:
	char name[4];
	int age;
	bool gender; // 0 female 1 male

public:
	Student() {
		name[0] = '0';
		age = 0;
		gender = false;
		cout << "The first is called!" << endl;
	}

	Student(const char *initName): age(0), gender(false) {
		strncpy(name, initName, sizeof(name));
		cout << "The second is called!" << endl;
	}

	Student(const char *initName, const int &initAge, const bool &initGender) {
		strncpy(name, initName, sizeof(name));
		age = initAge;
		gender = initGender;
		cout << "The third is called!" << endl;
	}

	void printInfo() const {
		cout << "name is " << name << endl;
		cout << "age is " << age << endl;
		cout << "gender is " << (gender ? "male" : "female") << endl;
	}
};


int main() {
	Student stu1;
	stu1.printInfo();

	Student stu2("zhang");
	stu2.printInfo();

	// Student stu3("wang", 20, false);
	Student stu3{"wang", 20, true};
	stu3.printInfo();

	Student * stu4 = new Student("li");
	stu4->printInfo();
	delete stu4;


	return 0;
}
