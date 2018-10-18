#include<iostream>
#include<string>
using namespace std;

//b2ten命名不错
//char *便于使用[]
long b2ten(char *x,int b);
int main()
{
	//cout << strlen("110") << endl;//结果为3
	int n;
	scanf("%d",&n);
	char p[8],q[8],r[8];
	long pTen,qTen,rTen;
	while(n--)
	{
		scanf("%s%s%s",p,q,r);
		int b = 0;
		for(b=2;b<=16;b++)
		{
			pTen = b2ten(p,b);
			qTen = b2ten(q,b);
			rTen = b2ten(r,b);
			if(pTen==-1 || qTen==-1 || rTen==-1)
				continue;
			if(pTen * qTen == rTen)
			{
				printf("%d\n",b);
				break;
			}
		}
		if(b==17)
			printf("0\n");
		
	}
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