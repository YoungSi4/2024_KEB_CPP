// 138p lab 1번 예제

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	double number = 0.0;
//	int integer = 0;
//	double fract = 0;
//
//	cout << "숫자를 입력 (소수점을 포함한 실수로): ";
//	cin >> number;
//
//	integer = static_cast<int>(number);
//	fract = number - integer;
//
//	cout << fixed << showpoint << setprecision(4); // 소수점 두 자리까지로 제한
//	cout << "원래의 값: " << number << endl;
//	cout << "정수 부분: " << integer << endl;
//	cout << "소수 부분: " << fract << endl;
//	return 0;
//}

// lab 2번

//#include<iostream>
//using namespace std;
//
//int main() {
//	unsigned int givenInt, firstDigit = 0;
//
//	cout << "양의 정수를 입력: ";
//	cin >> givenInt;
//
//	firstDigit = givenInt % 10;
//
//	cout << "입력한 정수: " << givenInt << endl;
//	cout << "첫 번째 자릿수: " << firstDigit;
//}

// lab 3번 초 단위의 시간을 정수로 입력 받아 시분초로 변환해주기

//#include<iostream>
//using namespace std;
//
//int main() {
//	unsigned long duration, hours, minutes, seconds = 0;
//
//	cout << "초 단위의 시간을 양의 정수로 입력: ";
//	cin >> duration;
//
//	hours = duration / 3600L; // ?
//	minutes = (duration - (hours * 3600L)) / 60L;
//	seconds = duration - (hours * 3600L) - (minutes * 60);
//
//	cout << "입력된 초 단위 시간: " << duration << endl;
//	cout << "결과: ";
//	cout << hours << "시 " << minutes << "분 " << seconds << "초";
//	return 0;
//}

// lab 4번 세 숫자를 입력받아 평균, 각 분산 구하기.
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	int num1, num2, num3 = 0;
//	double mean, variance1, variance2, variance3 = 0;
//
//	cout << "정수 세 개를 띄어쓰기하여 입력: ";
//	cin >> num1 >> num2 >> num3;
//
//	mean = static_cast<double>((num1 + num2 + num3)/3);
//	variance1 = num1 - mean;
//	variance2 = num2 - mean;
//	variance3 = num3 - mean;
//
//	cout << fixed << setprecision(2);
//	cout << "입력한 세 숫자: " << num1 << ", " << num2 << ", " << num3 << endl;
//	cout << "평균: " << mean << endl;
//	cout << "입력한 순서대로의 분산: " << variance1 << ", " << variance2 << ", " << variance3;
//	return 0;
//}