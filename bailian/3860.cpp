//2009��8��2��
//��֪һ���������������1970��1��1�յ���һ����һ��
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
			}else {//��������˶��ٴ��ˣ��´μ�����������ȶ����ˣ���������ѭ����
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
		//����ddΪ��ǰ���Ѿ����������ʣ������
		//printf("He");
		//dd = 43;



		unsigned int s;//sΪ������
		unsigned int j = 0;//jΪ�·�
		if(leap(year))
			j=cal(dd,a,s);//a bд���ˣ������ҵ������ĸ���û��
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

//�ж����꣬�����귵��1�����򷵻�0
unsigned int leap(unsigned int year)
{
	if((year%4 == 0) && year%100 || (year%400 == 0))
		return 1;
	else
		return 0;
}

unsigned int cal(unsigned int num,unsigned int a[],unsigned int &s)
{
	//sʣ������µ�����
	unsigned int sum = 0;
	unsigned int i = 0;//�·�
	while(sum<=num)
	{
		sum += a[i];
		i++;
	}
	s = num -(sum - a[i-1])+1;
	return i;
}