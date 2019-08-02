# include <iostream>
using namespace std;

struct time
{
	int hours;
	int min;
	int sec;
};
long time_to_sec(int, int, int);
long sec_to_time(long);
void addvid(time);

int main()
{
	time d1, d2;
	cout << "Please! Enter number hours: "; cin >> d1.hours;
	cout << "Please! Enter number min: "; cin >> d1.min;
	cout << "Please! Enter number sec:"; cin >> d1.sec;
	long oll = time_to_sec(d1.hours, d1.min, d1.sec);
	cout << "Oll secunds: " << oll << endl;
	cout << "ReaL TIME: "; addvid(d2);
	system("pause");
	return 0;
}

long time_to_sec(int a, int b, int c)
{
	return a * 3600 + b * 60 + c;
}

long sec_to_time(long d)
{
	int hour = d / 3600;
	int min = (d - hour * 3600) / 60;
	int sec = d - hour * 3600 - min * 60;
	return 
}