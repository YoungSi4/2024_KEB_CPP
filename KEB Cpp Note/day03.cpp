// for. 한 달을 달력 형태로 출력하기.
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int startDay;
	int	daysInMonth;
	int col = 1;

	do {
		cout << "이번 달에 몇 일까지 있는지 입력 (28, 29, 30, 31): ";
		cin >> daysInMonth;
	} while (daysInMonth < 28 || daysInMonth > 31);

	do {
		cout << "첫 날의 요일을 입력 (0 ~ 6): ";
		cin >> startDay;
	} while (startDay < 0 || startDay > 6);

	cout << endl;
	cout << "Sun Mon Tue Wed Thr Fri Sat" << endl;
	cout << "--- --- --- --- --- --- ---" << endl;

	for (int space = 0; space < startDay; space++) {
		cout << "    ";
		col++;
	}

	for (int day = 1; day <= daysInMonth; day++) {
		cout << setw(3) << day << " ";
		col++;
		if(col > 7) {
			cout << endl;
			col = 1;
		}
		
	}
	return 0;
}