//2009年5月29日
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

//由于cin和scanf在每次赋值是都会把
//未赋值的置为空，所以不用担心全局
//变量带来的缺点，反而提高了效率
char str[101][101];
int t,n;
int searchMaxSubString(char * source);
int main()
{
	
	cin >> t;
	unsigned minStrLen;
	int subStrLen;
	//同str
	char minStr[101];
	while(t--)
	{
		minStrLen = 100;
		cin >> n;
		int i;
		for(i = 0;i<n;i++)
		{
			cin >> str[i];
			if(strlen(str[i]) < minStrLen)
			{
				strcpy(minStr,str[i]);
				minStrLen = strlen(minStr);
			}
		}
		subStrLen = searchMaxSubString(minStr);
		printf("%d\n",subStrLen);
	}
	return 0;
}
int searchMaxSubString(char * source)
{
	//还能这么用
	int subStrLen = strlen(source),sourceStrLen = strlen(source);
	bool foundMaxSubStr;
	char subStr[101],revSubStr[101];//反序
	int i,j;

	//搜索不同长度的字符串
	while(subStrLen > 0)
	{
		//搜索长度为subStrLen的字符串
		//这个很关键，理解循环
		for(i=0;i<=sourceStrLen-subStrLen;i++)
		{
			strncpy(subStr,source+i,subStrLen);
			strncpy(revSubStr,source+i,subStrLen);
			subStr[subStrLen] = revSubStr[subStrLen] = '\0';
			strrev(revSubStr);
			foundMaxSubStr = true;
			for(j=0;j<n;j++)
				if(strstr(str[j],subStr)==NULL
					&& strstr(str[j],revSubStr)==NULL)
				{
					foundMaxSubStr = false;
					break;
				}
			if(foundMaxSubStr)
				return subStrLen;
		}
		subStrLen--;
	}
	return 0;
}