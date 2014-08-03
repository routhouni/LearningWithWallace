// classes example
#include <iostream>
using namespace std;

class Circle {
	const static double pi = 3.1415926535;
	double radius;
public:
	//CONSTRUCTORS
	Circle(double r){
		radius = r;
	}
	Circle(){
		radius = 1;
	}
	Circle(const Circle &c){
		radius = c.radius;
	}
	//Overload the + operator
	Circle operator+(Circle &c){
		return Circle(radius + c.radius);
	}
	void setRadius(double r){
		radius = r;
	}
	double getRadius(){
		return radius;
	}
	double area() {
		return radius*radius*pi;
	}
	double circum() {
		return 2 * radius*pi;
	}
};

//This is a function that swaps two integers
void swapInts(int &int1, int &int2){
	int temp = int1;
	int1 = int2;
	int2 = temp;
}


int main() {
	Circle luke (10.5);
	Circle wallace;
	Circle lindsay = 6.2;
	Circle owen(lindsay);
	Circle isaac = luke + lindsay;

	cout << "luke's area: " << luke.area() << "\n";
	cout << "luke's circum: " << luke.circum() << "\n\n";
	cout << "lindsay's area: " << lindsay.area() << "\n";
	cout << "lindsay's circum: " << lindsay.circum() << "\n\n";
	cout << "owen's area: " << owen.area() << "\n";
	cout << "owen's circum: " << owen.circum() << "\n\n";
	cout << "isaac's area: " << isaac.area() << "\n";
	cout << "isaac's circum: " << isaac.circum() << "\n\n";
	cout << "wallace's area: " << wallace.area() << "\n";
	cout << "wallace's circum: " << wallace.circum() << "\n\n\n";

	int a = 123;
	int b = 456;
	cout << "before swap: a = " << a << " and b = " << b << "\n";
	swapInts(a, b);
	cout << "after swap: a = " << a << " and b = " << b << "\n";
	return 0;
}
