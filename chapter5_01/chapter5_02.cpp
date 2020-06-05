#include <iostream>

using namespace std;

int calc_weight(int a);
double calc_weight(int a, int b, double c = 0.9); // c는 매개변수로 인식하지 않음. 전역변수처럼 인식.

int main(void)
{
	int b = 100;
	double r = 0.9;
	cout << "키를 입력하세요 : ";
	int h;  // 키
	cin >> h;
	if (h >= 150) {
		cout << "표준 체중은 : " << calc_weight(h, b) << endl;
		cout << "표준 체중은 : " << calc_weight(h, b, r) << endl;
	}
	else {
		cout << "표준 체중은 : " << calc_weight(h) << endl;
	}
	return 0;
}

int calc_weight(int a)
{
	return a - 100;
}

double calc_weight(int a, int b, double c) // 변수 c는 위에서 초기화해주어서 여기서는 선언만 해주면 됨.
{
	return (a-b)*c;
}

