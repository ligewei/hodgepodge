//2009��4��15��
//������ո���ַ�������ʹ��gets()
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
