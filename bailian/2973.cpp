#include<stdio.h>
#include<string>
using namespace std;
//��һ��
//��дһ��
//�Լ��ʾ���֭��һ��
//�������磬�����ջ�
int main()
{
	//�����ڿ�ʼ������һ��ѱ����ķ�ʽ�ǳ�����
	int i,k,base[31],sum;
	char skew[32];
	base[0] = 1;
	for(i=1;i<31;i++)
		base[i] = 2 * base[i-1] + 1;//�Ƶ���ʽ
	while(1)
	{
		scanf("%s",skew);
		if(strcmp(skew,"0")==0)
			break;
		sum = 0;
		k = strlen(skew);
		for(i = 0;i<(int)strlen(skew);i++)
		{
			k--;
			sum += (skew[i] - '0') * base[k];
		}
		printf("%d\n",sum);

	}
	return 0;
}