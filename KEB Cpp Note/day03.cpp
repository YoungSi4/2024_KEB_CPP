// cmath ���̺귯���� ���ٰ��� �ѷ� ���ϱ�
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// ���� ����
	const double PI = 3.141592653589793238462;
	int n = 0;
	double s, peri, area = 0;

	// ���� ���� �Է¹ޱ�
	do {
		cout << "���� ������ �Է��ϼ��� (4 �̻��� ����): ";
		cin >> n;
	} while (n < 4);

	// ���� ���� �Է¹ޱ�
	do {
		cout << "���� ���̸� �Է��ϼ���: ";
		cin >> s;
	} while (s <= 0.0);

	// �ѷ��� ���� ���ϱ�
	peri = n * s;
	area = (n * pow(s, 2)) / (n * tan(PI / n));
	
	// ��� ���
	cout << "�ѷ�: " << peri << endl;
	cout << "����: " << area;
	
	return 0;
}