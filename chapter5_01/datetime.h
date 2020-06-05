#pragma once
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <ctime>

using namespace std;

inline int cal_zodiac(int birthday)
{
	int any = birthday % 12;
	switch (any)
	{
	case 0:
		cout << "원숭이 띠 입니다.\n";
		break;
	case 1:
		cout << "닭 띠 입니다.\n";
		break;
	case 2:
		cout << "개 띠 입니다.\n";
		break;
	case 3:
		cout << "돼지 띠 입니다.\n";
		break;
	case 4:
		cout << "쥐 띠 입니다.\n";
		break;
	case 5:
		cout << "소 띠 입니다.\n";
		break;
	case 6:
		cout << "호랑이 띠 입니다.\n";
		break;
	case 7:
		cout << "토끼 띠 입니다.\n";
		break;
	case 8:
		cout << "용 띠 입니다.\n";
		break;
	case 9:
		cout << "뱀 띠 입니다.\n";
		break;
	case 10:
		cout << "말 띠 입니다.\n";
		break;
	case 11:
		cout << "양 띠 입니다.\n";
		break;
	}
	return any;
}

inline void calc_age(int year)
{
	time_t now; //현재 시간
	struct tm mytime; //구조체 tm을 mytime이라는 이름으로 선언
	now = time(NULL); // 현재 시간을 초 단위로 바꾸기
	localtime_s(&mytime, &now);
	//now에 담긴 현재시간을 년,월,초로 바꾸어서 mytime에 담아줌

	cout << "당신의 나이는 : " << mytime.tm_year + 1900 - year + 1 << " 입니다.\n";
	// mytime.tm_year = 현재 년도
	// 하지만, 밀레니엄 버그 때문에 1900을 더해야 1900년대가 나옴.
}

inline void calc_day(int any)
{
	switch (any)
	{
	case 0:
		cout << "주변 사람의 어려움을 그냥 지나치지 말고 도와주는 것이 유리하다..\n";
		break;
	case 1:
		cout << "가지가 굵으면 줄기가 부러진다. 필요 없는 것들은 미련을 두지 말고 치워야 함이 옳다.\n";
		break;
	case 2:
		cout << "행운의 여신이 당신 편이라고 느껴지는 하루이다.\n";
		break;
	case 3:
		cout << "평소와 다르게 오늘 따라 부쩍 당신 혼자라고 느낄 수 있다.\n";
		break;
	case 4:
		cout << "사람은 모든 걸 다 잃어도 인심을 잃지 않는 것이 살아가면서 필요한 법이다.\n";
		break;
	case 5:
		cout << "이미 주어진 일에 대해서는 빨리 마무리 하는 게 이롭다. \n";
		break;
	case 6:
		cout << "다른 사람의 눈에 잘 돋보이지 않으니, 남들이 나의 존재를 몰라 준다고 하여 슬퍼할 필요는 없다. \n";
		break;
	case 7:
		cout << "젊어서 고생은 사서도 한다는 옛말이 있다.\n";
		break;
	case 8:
		cout << "어렵게 생각했던 일들이 생각보다 오늘은 순조롭게 이루어진다.\n";
		break;
	case 9:
		cout << "새로운 이성과 만나는 시기로는 아직 이르니, 좀 더 기다리는 것이 좋겠다.\n";
		break;
	case 10:
		cout << "당신에게 새로운 발전의 기회가 온다.\n";
		break;
	case 11:
		cout << "새로운 일자리나 직장에서 중책을 맡을 수 있으니, 미리 준비하고 대비하는 게 유리하다.\n";
		break;
	}
}