#include "datetime.h"

//inline void cir_pro(int a);
//
//int main(void) {
//	int r = 5;
//	cir_pro(r);
//}
//
//inline void cir_pro(int a) {
//	cout << "원의 넓이 : " << a * a*3.14 << endl;
//}
//

int main()
{
	cout <<  "당신이 태어난 연도를 입력하세요 :";
	int birthyear;
	cin >> birthyear;
	calc_age(birthyear);
	int any = cal_zodiac(birthyear);
	calc_day(any);
	return 0;

}
