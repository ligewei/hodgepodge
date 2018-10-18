#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
//2009Äê9ÔÂ23ÈÕ
void conversion(int num,char s2[],long d1,long d2);

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		char s2[255] = {'\0'};
		conversion(a,s2,10,6);
		cout << s2 << endl;
	}
	return 0;
}

void conversion(int num,char s2[],long d1,long d2)
{
	long i,j,t;
	char c;

	i=0;
	while(1)
	{
		t=num%d2;
		if (t<=9) 
			s2[i]=t+'0'; 
		else 
			s2[i]=t+'A'-10;
		num/=d2;
		if (num==0) break;
		i++;
	}
	for (j=0;j<=i/2;j++)
	{
		c=s2[j];
		s2[j]=s2[i-j];
		s2[i-j]=c;
	}
	s2[i+1]='\0';
}
