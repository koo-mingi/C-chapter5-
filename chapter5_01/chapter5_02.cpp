#include <iostream>

using namespace std;

int calc_weight(int a);
double calc_weight(int a, int b, double c = 0.9); // c�� �Ű������� �ν����� ����. ��������ó�� �ν�.

int main(void)
{
	int b = 100;
	double r = 0.9;
	cout << "Ű�� �Է��ϼ��� : ";
	int h;  // Ű
	cin >> h;
	if (h >= 150) {
		cout << "ǥ�� ü���� : " << calc_weight(h, b) << endl;
		cout << "ǥ�� ü���� : " << calc_weight(h, b, r) << endl;
	}
	else {
		cout << "ǥ�� ü���� : " << calc_weight(h) << endl;
	}
	return 0;
}

int calc_weight(int a)
{
	return a - 100;
}

double calc_weight(int a, int b, double c) // ���� c�� ������ �ʱ�ȭ���־ ���⼭�� ���� ���ָ� ��.
{
	return (a-b)*c;
}

