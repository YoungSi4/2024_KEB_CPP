// ����� �迭�� �����Ҵ��Ͽ� �Ľ�Į�� �ﰢ�� ���װ�� ���ϱ�
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	// ����
	int maxPower = 10;
	int n;

	// �Է� ��ȿ�� �˻�
	do{
		cout << "(x+y)^n���� n�� �Է��ϼ���: ";
		cin >> n;
	} while (n < 0 || n > maxPower);

	// �����Ҵ�
	int** pascal = new int* [n + 1]; // �̰� ���� 2���� �迭 ����� ���
	for (int i = 0; i < n + 1; i++) {
		pascal[i] = new int[i]; // ���̰� 0�� �迭�� �Ҵ�?...
	}

	// ���װ�� ���ϱ�
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

	// ���װ�� ���
	cout << "(x+y)^" << n << "�� ���װ��: ";
	for (int j = 0; j <= n; j++) {
		cout << setw(5) << pascal[n][j];
	}
	cout << endl;

	// ȸ��
	for (int i = 0; i < n + 1; i++) {
		delete pascal[i];
	}
	delete[] pascal;


	return 0;
}