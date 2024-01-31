// 래기드 배열을 동적할당하여 파스칼의 삼각형 이항계수 구하기
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	// 선언
	int maxPower = 10;
	int n;

	// 입력 유효성 검사
	do{
		cout << "(x+y)^n에서 n을 입력하세요: ";
		cin >> n;
	} while (n < 0 || n > maxPower);

	// 동적할당
	int** pascal = new int* [n + 1]; // pascal 배열에 0 ~ 5 행 생성
	for (int i = 0; i < n + 1; i++) {
		pascal[i] = new int[i + 1]; // pascal 배열에 길이가 1부터 n인 열 생성
	}

	// 이항계수 구하기
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0 || i == j) {
				pascal[i][j] = 1;
			}
			else {
				pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			}
		}
	}

	// 이항계수 출력
	cout << "(x+y)^" << n << "의 이항계수: ";
	for (int j = 0; j <= n; j++) {
		cout << setw(5) << pascal[n][j]; // setw : 빈칸 출력하는 함수
	}
	cout << endl;

	// 회수
	for (int i = 0; i < n + 1; i++) {
		delete pascal[i];
	}
	delete[] pascal;


	return 0;
}