//// 구현 파일
//
//#include<iostream>
//#include<cmath>
//#include<cassert>
//#include"day05 - fraction.h"
//
//using namespace std;
//
//Fraction::Fraction(int num, int den = 1)
//	: numer(num), denom(den) {
//	normalize();
//}
//
//Fraction::Fraction()
//	:numer(0), denom(1) {
//
//}
//
//Fraction::Fraction(const Fraction& fract)
//	:numer(fract.numer), denom(fract.denom) {
//
//}
//
//Fraction::~Fraction() {
//
//}
//
//int Fraction::getNumer() const {
//	return numer;
//}
//
//int Fraction::getDenom() const {
//	return denom;
//}
//
//void Fraction::print() const {
//	cout << numer << "/" << denom << endl;
//}
//
//void Fraction::setNumer(int num) {
//	numer = num;
//	normalize();
//}
//
//void Fraction::setDenom(int den) {
//	denom = den;
//	normalize();
//}
//
//void Fraction::normalize() {
//	if (denom == 0) {
//		cout << "잘못된 분모 값입니다. 프로그램을 중단합니다." << endl;
//		assert(0);
//	}
//
//	if (denom < 0) {
//		denom = -denom;
//		numer = -numer;
//	}
//
//	int
//}