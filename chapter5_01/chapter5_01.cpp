#include <iostream>

using namespace std;

void HAB()
{
	cout << "Let's check" << endl;
}

void HAB(int a)
{
	int gab = 0;
	for (int b = 1; b <= a; gab += b++);
	cout << "1부터" << a << "까지의 합은 : " << gab << endl;

}

void HAB(int start,int end)
{
	int gab = 0;
	for (int b = start; b <= end; gab += b++);
	cout <<start<< " 부터" << end << "까지의 합은 : " << gab << endl;

}

void HAB(int start, int end, int inc)
{
	int gab = 0;
	for (int b = start; b <= end; b +=inc) gab+=b;
	cout << start << " 부터" << end << "까지 "<<inc<<" 씩 증가한 값은 : " << gab << endl;

}

int main()
{
	HAB();
	HAB(10);
	HAB(1, 10);
	HAB(10, 20);
	HAB(1, 10, 2);
	cout << endl;
	system("pause");
	


}


