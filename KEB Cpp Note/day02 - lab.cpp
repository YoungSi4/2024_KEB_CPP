// 138p lab 1�� ����

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	double number = 0.0;
//	int integer = 0;
//	double fract = 0;
//
//	cout << "���ڸ� �Է� (�Ҽ����� ������ �Ǽ���): ";
//	cin >> number;
//
//	integer = static_cast<int>(number);
//	fract = number - integer;
//
//	cout << fixed << showpoint << setprecision(4); // �Ҽ��� �� �ڸ������� ����
//	cout << "������ ��: " << number << endl;
//	cout << "���� �κ�: " << integer << endl;
//	cout << "�Ҽ� �κ�: " << fract << endl;
//	return 0;
//}

// lab 2��

//#include<iostream>
//using namespace std;
//
//int main() {
//	unsigned int givenInt, firstDigit = 0;
//
//	cout << "���� ������ �Է�: ";
//	cin >> givenInt;
//
//	firstDigit = givenInt % 10;
//
//	cout << "�Է��� ����: " << givenInt << endl;
//	cout << "ù ��° �ڸ���: " << firstDigit;
//}

// lab 3�� �� ������ �ð��� ������ �Է� �޾� �ú��ʷ� ��ȯ���ֱ�

//#include<iostream>
//using namespace std;
//
//int main() {
//	unsigned long duration, hours, minutes, seconds = 0;
//
//	cout << "�� ������ �ð��� ���� ������ �Է�: ";
//	cin >> duration;
//
//	hours = duration / 3600L; // ?
//	minutes = (duration - (hours * 3600L)) / 60L;
//	seconds = duration - (hours * 3600L) - (minutes * 60);
//
//	cout << "�Էµ� �� ���� �ð�: " << duration << endl;
//	cout << "���: ";
//	cout << hours << "�� " << minutes << "�� " << seconds << "��";
//	return 0;
//}

// lab 4�� �� ���ڸ� �Է¹޾� ���, �� �л� ���ϱ�.
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	int num1, num2, num3 = 0;
//	double mean, variance1, variance2, variance3 = 0;
//
//	cout << "���� �� ���� �����Ͽ� �Է�: ";
//	cin >> num1 >> num2 >> num3;
//
//	mean = static_cast<double>((num1 + num2 + num3)/3);
//	variance1 = num1 - mean;
//	variance2 = num2 - mean;
//	variance3 = num3 - mean;
//
//	cout << fixed << setprecision(2);
//	cout << "�Է��� �� ����: " << num1 << ", " << num2 << ", " << num3 << endl;
//	cout << "���: " << mean << endl;
//	cout << "�Է��� ��������� �л�: " << variance1 << ", " << variance2 << ", " << variance3;
//	return 0;
//}