#include<iostream>
#include<cstdio>
using namespace std;

//这才是C和C++的高明之处，看看怎么操作数组的！！
int leap(int year);
int year[2] = {365,366};
char week[7][10] = {"Saturday","Sunday","Monday","Tuesday","Wednesday",
					"Thursday","Friday"};
int month[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31,
					31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int days;
	while(cin>>days && days != -1)
	{
		int dayofweek = days % 7;

		int y;
		for(y = 2000;days>=year[leap(y)];y++)
			days -= year[leap(y)];
		
		int m;
		for(m=0;days>=month[leap(y)][m];m++)
			days -= month[leap(y)][m];
		
		printf("%d-%02d-%02d %s\n",y,m+1,days+1,week[dayofweek]);
		
	}
	return 0;
}

//判断闰年，是闰年返回1，否则返回0
int leap(int year)
{
	if((year%4 == 0) && year%100 || (year%400 == 0))
		return 1;
	else
		return 0;
}
