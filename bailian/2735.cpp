#include<iostream>
#include<string>
using namespace std;

//b2ten命名不错
//char *便于使用[]
long b2ten(char *x,int b);
int main()
{

	char p[8];
	scanf("%s",p);
	cout << b2ten(p,8) << endl;
	return 0;
}
//b进制转换成10进制
long b2ten(char *x,int b)
{
	int len = strlen(x);
	int result = 0;
	/*
		for(int i =0;i<len;i++)
		{
			result *= b;
			result += currentBit;
		}
	*/
		for(int i = len-1; i>=0; i--)
		{
			//-'0'将字符变成数值
			int currentBit = x[i]-'0';
			if(currentBit >= b)
				return -1;
			int tmp = currentBit;
			for(int j=0;j<len-i-1;j++)
				tmp *= b; 
			result += tmp;
		}
	return (long)result;
}