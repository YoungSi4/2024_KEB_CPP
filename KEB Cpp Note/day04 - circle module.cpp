#include<iostream>
using namespace std;

class Circle {
private:
	double radius = 0;
public:
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value);
};