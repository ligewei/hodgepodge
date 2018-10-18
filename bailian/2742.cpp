#include<stdio.h>
#include<string.h>
//2009年5月27日
int main()
{
	int n;
	int sum[26];//每个字符的个数
	char str[1001];
	int i;
	int max;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",str);//读入字符串
		for(i=0;i<26;i++)
			sum[i] = 0;
		//很关键，很精练的代码段
		for(i=0;i<strlen(str);i++)
			sum[str[i]-'a']++;
		max=0;
		for(i=1;i<26;i++)
			if(sum[i]>sum[max])
				max=i;
		printf("%c %d\n",max+'a',sum[max]);
	}
	return 0;
}