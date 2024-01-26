// 교재 336p Class Circle 만들어보기.
#include<iostream>
using namespace std;

class Circle {
private:
	double radius = 0;
public:
	Circle(double radius); // 매개변수 생성자
	Circle(); // 기본 생성자
	~Circle(); // 소멸자
	Circle(const Circle& circle); // 복사 생성자

	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value);
};

// 생성자 소멸자 정의
Circle::Circle(double rds)
	: radius(rds) {
	cout << "매개변수 생성자가 호출됐다." << endl;
}

Circle::Circle()
	:radius(0.0) {
	cout << "기본 생성자가 호출됐다." << endl;
}

Circle::Circle(const Circle& circle)
	:radius(circle.radius) {
	cout << "복사 생성자가 호출됐다." << endl;
}

Circle::~Circle() {
	cout << "소멸자가 호출됐다: " << radius;
	cout << endl;
}

// 멤버 함수 정의
double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	const double PI = 3.14;
	return (PI * radius * radius);
}

double Circle::getPerimeter() const {
	const double PI = 3.14;
	return(2 * PI * radius);
}

void Circle::setRadius(double value) {
	radius = value;
}

// 멤버 함수 호출


int main() {
	cout << "Circle 1: " << endl;
	Circle circle1(5.2);
	cout << "Radius: " << circle1.getRadius() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

	cout << "Circle 2: " << endl;
	Circle circle2(circle1);
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

	cout << "Circle 3: " << endl;
	Circle circle3;
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;
	// 소멸자 호출

	return 0;
}