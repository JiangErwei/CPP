//
// Created by suyi on 24-5-8.
//


#include <iostream>

using namespace std;

class A {
private:
	inline static size_t a = 0; // C++17 标准 没错
public:
	A() {
		a++;
		cout << a << " constructor is called \n";
	}

	~A() {
		a--;
		cout << a << " deconstructor is called \n";
	}

	static size_t getA() {
		return a;
	}
};

// size_t A::a = 0;

int main() {
	A a1;
	A a2;
	return 0;
}
