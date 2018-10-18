//2009年4月15日
//输入带空格的字符串可以使用gets()
#include<stdio.h>
int main()
{
	char *p,str[100];
	p = str;
	gets(p);
	int len = 0;
	while(*p++)
	{
		++len;
	}
	printf("%d\n",len);
	return 0;
}
