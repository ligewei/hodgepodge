//2009��5��29��
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

//����cin��scanf��ÿ�θ�ֵ�Ƕ����
//δ��ֵ����Ϊ�գ����Բ��õ���ȫ��
//����������ȱ�㣬���������Ч��
char str[101][101];
int t,n;
int searchMaxSubString(char * source);
int main()
{
	
	cin >> t;
	unsigned minStrLen;
	int subStrLen;
	//ͬstr
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
	//������ô��
	int subStrLen = strlen(source),sourceStrLen = strlen(source);
	bool foundMaxSubStr;
	char subStr[101],revSubStr[101];//����
	int i,j;

	//������ͬ���ȵ��ַ���
	while(subStrLen > 0)
	{
		//��������ΪsubStrLen���ַ���
		//����ܹؼ������ѭ��
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