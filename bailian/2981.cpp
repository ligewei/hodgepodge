
#include<stdio.h>
#include<string.h>
#define MAX 200
int a1[MAX + 10];
int a2[MAX + 10];
char s1[MAX + 10];
char s2[MAX + 10];
int main()
{
	scanf("%s%s",s1,s2);
	//既初始化了，又有0便于计算
	memset(a1,0,sizeof(a1));
	memset(a1,0,sizeof(a1));
	//字符化为int
	int len1 = strlen(s1);
	for(int i=len1-1,j=0;i>=0;i--)
		a1[j++] = s1[i] - '0';//化为值
	
	int len2 = strlen(s2);
	for(int i=len2-1,j=0;i>=0;i--)
		a2[j++] = s2[i] - '0';//化为值
	//相加
	for(int i=0;i<MAX;i++)
	{
		a1[i] += a2[i];
		if(a1[i]>=10)//少些一个=，浪费了几个小时！
		{
			a1[i] -= 10;
			a1[i+1]++;
		}
	}
	//print
	bool flag = false;//设置的很精妙
	for(int i=MAX-1;i>=0;i--)
	{
		if(flag)
			printf("%d",a1[i]);
		else if(a1[i])
		{
			printf("%d",a1[i]);
			flag = true;
		}
	}
	if(!flag)
		printf("0");
	return 0;
}
/*
//POJ Grids 2981
#include <string>
#include <iostream>
using namespace std;

#define MAX 200

unsigned int num[MAX+10];
unsigned int num1[MAX+10];

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    memset(num,0,sizeof(num));
    memset(num1,0,sizeof(num1));
    int len = str1.length();int index = 0;
    for (int i=len-1;i>=0;i--)
    {
        num[index++] = str1[i]-'0';
    }
    len = str2.length();index = 0;
    for (int i=len-1;i>=0;i--)
    {
        num1[index++] = str2[i]-'0';
    }

    len = str1.length()>str2.length() ? str1.length() : str2.length();

    for (int i=0;i<len;i++)
    {
        num[i] += num1[i];
        if (num[i]>=10)
        {
            num[i] -= 10;
            num[i+1]++;
        }
    }
    bool flag = false;
    for (int i=len;i>=0;i--)
    {
        if (flag||num[i])
        {
            flag = true;
            cout<<num[i];
        }
    }
    if (!flag)
    {
        cout<<"0";
    }

    return 0;
}
*/