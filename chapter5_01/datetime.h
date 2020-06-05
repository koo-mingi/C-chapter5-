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
		cout << "������ �� �Դϴ�.\n";
		break;
	case 1:
		cout << "�� �� �Դϴ�.\n";
		break;
	case 2:
		cout << "�� �� �Դϴ�.\n";
		break;
	case 3:
		cout << "���� �� �Դϴ�.\n";
		break;
	case 4:
		cout << "�� �� �Դϴ�.\n";
		break;
	case 5:
		cout << "�� �� �Դϴ�.\n";
		break;
	case 6:
		cout << "ȣ���� �� �Դϴ�.\n";
		break;
	case 7:
		cout << "�䳢 �� �Դϴ�.\n";
		break;
	case 8:
		cout << "�� �� �Դϴ�.\n";
		break;
	case 9:
		cout << "�� �� �Դϴ�.\n";
		break;
	case 10:
		cout << "�� �� �Դϴ�.\n";
		break;
	case 11:
		cout << "�� �� �Դϴ�.\n";
		break;
	}
	return any;
}

inline void calc_age(int year)
{
	time_t now; //���� �ð�
	struct tm mytime; //����ü tm�� mytime�̶�� �̸����� ����
	now = time(NULL); // ���� �ð��� �� ������ �ٲٱ�
	localtime_s(&mytime, &now);
	//now�� ��� ����ð��� ��,��,�ʷ� �ٲپ mytime�� �����

	cout << "����� ���̴� : " << mytime.tm_year + 1900 - year + 1 << " �Դϴ�.\n";
	// mytime.tm_year = ���� �⵵
	// ������, �з��Ͼ� ���� ������ 1900�� ���ؾ� 1900��밡 ����.
}

inline void calc_day(int any)
{
	switch (any)
	{
	case 0:
		cout << "�ֺ� ����� ������� �׳� ����ġ�� ���� �����ִ� ���� �����ϴ�..\n";
		break;
	case 1:
		cout << "������ ������ �ٱⰡ �η�����. �ʿ� ���� �͵��� �̷��� ���� ���� ġ���� ���� �Ǵ�.\n";
		break;
	case 2:
		cout << "����� ������ ��� ���̶�� �������� �Ϸ��̴�.\n";
		break;
	case 3:
		cout << "��ҿ� �ٸ��� ���� ���� ��½ ��� ȥ�ڶ�� ���� �� �ִ�.\n";
		break;
	case 4:
		cout << "����� ��� �� �� �Ҿ �ν��� ���� �ʴ� ���� ��ư��鼭 �ʿ��� ���̴�.\n";
		break;
	case 5:
		cout << "�̹� �־��� �Ͽ� ���ؼ��� ���� ������ �ϴ� �� �̷Ӵ�. \n";
		break;
	case 6:
		cout << "�ٸ� ����� ���� �� �������� ������, ������ ���� ���縦 ���� �شٰ� �Ͽ� ������ �ʿ�� ����. \n";
		break;
	case 7:
		cout << "��� ����� �缭�� �Ѵٴ� ������ �ִ�.\n";
		break;
	case 8:
		cout << "��ư� �����ߴ� �ϵ��� �������� ������ �����Ӱ� �̷������.\n";
		break;
	case 9:
		cout << "���ο� �̼��� ������ �ñ�δ� ���� �̸���, �� �� ��ٸ��� ���� ���ڴ�.\n";
		break;
	case 10:
		cout << "��ſ��� ���ο� ������ ��ȸ�� �´�.\n";
		break;
	case 11:
		cout << "���ο� ���ڸ��� ���忡�� ��å�� ���� �� ������, �̸� �غ��ϰ� ����ϴ� �� �����ϴ�.\n";
		break;
	}
}