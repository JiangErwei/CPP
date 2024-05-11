#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int age{};
	bool gender{};

public:
	bool setName(const string &name) {
		this->name = name;
		return true;
	}

	bool setAge(const int &age) {
		this->age = age;
		return true;
	}

	bool setGender(const bool &gender) {
		this->gender = gender;
		return true;
	}

	bool getInfo() const {
		cout << this->name << " is a " << (this->gender ? "Man" : "Women") << ", and his/her age is " << this->age <<
				endl;
		return true;
	}
};


int main(int argc, char **argv) {
	Student stu;
	stu.setName("zhangsan");
	stu.setAge(20);
	stu.setGender(true);

	stu.getInfo();
	return 0;
}