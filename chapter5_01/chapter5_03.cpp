#include "datetime.h"

//inline void cir_pro(int a);
//
//int main(void) {
//	int r = 5;
//	cir_pro(r);
//}
//
//inline void cir_pro(int a) {
//	cout << "���� ���� : " << a * a*3.14 << endl;
//}
//

int main()
{
	cout <<  "����� �¾ ������ �Է��ϼ��� :";
	int birthyear;
	cin >> birthyear;
	calc_age(birthyear);
	int any = cal_zodiac(birthyear);
	calc_day(any);
	return 0;

}
