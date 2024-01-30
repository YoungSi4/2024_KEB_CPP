#include<iostream>
using namespace std;

int main() {
	int arr[5] = {10, 11, 12, 13 ,14};
	cout << arr[1] << endl;
	cout << *(arr + 1);
	return 0;
}