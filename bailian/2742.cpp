#include<stdio.h>
#include<string.h>
//2009��5��27��
int main()
{
	int n;
	int sum[26];//ÿ���ַ��ĸ���
	char str[1001];
	int i;
	int max;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",str);//�����ַ���
		for(i=0;i<26;i++)
			sum[i] = 0;
		//�ܹؼ����ܾ����Ĵ����
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