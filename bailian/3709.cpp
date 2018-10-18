#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
//2009Äê9ÔÂ23ÈÕ
void conversion(char s[],char s2[],long d1,long d2);

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		char s[65] = {'\0'};
		cin >> s;
		char s2[65] = {'\0'};
		conversion(s,s2,2,3);
		cout << s2 << endl;
	}
	return 0;
}


void conversion(char s[],char s2[],long d1,long d2)
{
	long i,j,t,num;
	char c;
	num=0;
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]<='9'&&s[i]>='0') 
			t=s[i]-'0'; 
		else 
			t=s[i]-'A'+10;
		num=num*d1+t;
	}
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
