//2009年8月2日
//已知一个秒数，计算距离1970年1月1日到那一天哪一秒
#include<cstdio>
#include<iostream>
using namespace std;
unsigned int a[12] = {31,29,31,30,31,30,31,31,30,31,30,31};//leap year
unsigned int b[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
unsigned int leap(unsigned int year);
unsigned int cal(unsigned int num,unsigned int a[],unsigned int &s);
int main()
{
	unsigned int t;
	while(cin>>t)
	{
		unsigned int day = t/(3600*24);

		unsigned int ht = t%(3600*24);
		unsigned int hour = ht/3600;

		unsigned int mt = ht%3600;
		unsigned int min = mt/60;

		unsigned int sec = mt%60;

		unsigned int sum = 0;
		unsigned int days = 365;
		unsigned int year= 1970;

		while(sum<=day)
		{
			if(leap(year))
			{
				days = 366;
			}else {//这个错误犯了多少次了！下次坚决不能再事先定义了！尤其是在循环中
				days = 365;
			}
			sum += days;
			year++;
		}
		year--;
		unsigned int dd = day-(sum-365);
		//cout << leap(year);
		if(leap(year))
		{
			//printf("He");
			dd = day-(sum-366);
		}
		//以上dd为当前年已经计算出来，剩余天数
		//printf("He");
		//dd = 43;



		unsigned int s;//s为多少日
		unsigned int j = 0;//j为月份
		if(leap(year))
			j=cal(dd,a,s);//a b写反了，差点把我的自信心给整没了
		else
			j=cal(dd,b,s);
		//s++;

		printf("%d-",year);

		if(j<10)
			printf("0");
		printf("%d-",j);

		if(s<10)
			printf("0");
		printf("%d ",s);

		if(hour<10)
			printf("0");
		printf("%d:",hour);

		if(min<10)
			printf("0");
		printf("%d:",min);

		if(sec<10)
			printf("0");
		printf("%d\n",sec);
	}
	return 0;
}

//判断闰年，是闰年返回1，否则返回0
unsigned int leap(unsigned int year)
{
	if((year%4 == 0) && year%100 || (year%400 == 0))
		return 1;
	else
		return 0;
}

unsigned int cal(unsigned int num,unsigned int a[],unsigned int &s)
{
	//s剩余非正月的天数
	unsigned int sum = 0;
	unsigned int i = 0;//月份
	while(sum<=num)
	{
		sum += a[i];
		i++;
	}
	s = num -(sum - a[i-1])+1;
	return i;
}