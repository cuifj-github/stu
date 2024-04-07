#include <iostream>
using namespace std;

class Circle {
public:
	int m_r;
	double calucateZC() {
		return 2 * m_r;
	}
};


class Person {
public:
	string m_Car;
private:
	string m_Name;
protected:
	string m_Age;


public:
	void count() {
		cout << "hello world" << endl;
	}
};

int main() {
	Circle cl;
	cl.m_r = 10;
	cout << cl.m_r << endl;
	cl.calucateZC();
}