//2009��4��6��
//poj.pku_2709
//����e
//��C�����ύ��Ȼ����
//poj.pku_2732δͨ��
#include <stdio.h>

double fun(int n);
int main()
{
	double num = 0.0;
	int m;//���㾫��,���һ���ĸ�ĵ���
	scanf("%d",&m);

	for(int i=m;i>=1;--i)
	{
		num += 1/fun(i);
	}

	printf("%\n",num+1);

}
double fun(int n)
{
	double res = 1.0;
	for(int i = 1; i<=n; ++i)
		res *= i;
	return res;
}