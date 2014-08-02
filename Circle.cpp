// classes example
#include <iostream>
using namespace std;

class Circle {
private:
	const double pi = 3.1415926535;
	double radius;
public:
	Circle(double);
	Circle();
	Circle(const Circle &c);
	void setRadius(double);
	double area() {
		return radius*radius*pi;
	}
	double circum() {
		return 2 * radius*pi;
	}
};

Circle::Circle(double r){
	radius = r;
}

Circle::Circle(){
	radius = 1;
}
Circle::Circle(const Circle &c){
	radius = c.radius;
}

void Circle::setRadius(double r){
	radius = r;
}

int main() {
	Circle luke (10.5);
	Circle wallace;
	Circle lindsay = 6.2;
	Circle owen(lindsay);
	//wallace.setRadius(5.2);
	cout << "luke's area: " << luke.area() << "\n";
	cout << "luke's circum: " << luke.circum() << "\n";
	cout << "lindsay's area: " << lindsay.area() << "\n";
	cout << "lindsay's circum: " << lindsay.circum() << "\n";
	cout << "owen's area: " << owen.area() << "\n";
	cout << "owen's circum: " << owen.circum() << "\n";
	cout << "wallace's area: " << wallace.area() << "\n";
	cout << "wallace's circum: " << wallace.circum();
	return 0;
}