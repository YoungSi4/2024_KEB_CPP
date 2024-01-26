// ���� 336p Class Circle ������.
#include<iostream>
using namespace std;

class Circle {
private:
	double radius = 0;
public:
	Circle(double radius); // �Ű����� ������
	Circle(); // �⺻ ������
	~Circle(); // �Ҹ���
	Circle(const Circle& circle); // ���� ������

	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value);
};

// ������ �Ҹ��� ����
Circle::Circle(double rds)
	: radius(rds) {
	cout << "�Ű����� �����ڰ� ȣ��ƴ�." << endl;
}

Circle::Circle()
	:radius(0.0) {
	cout << "�⺻ �����ڰ� ȣ��ƴ�." << endl;
}

Circle::Circle(const Circle& circle)
	:radius(circle.radius) {
	cout << "���� �����ڰ� ȣ��ƴ�." << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��ڰ� ȣ��ƴ�: " << radius;
	cout << endl;
}

// ��� �Լ� ����
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

// ��� �Լ� ȣ��


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
	// �Ҹ��� ȣ��

	return 0;
}