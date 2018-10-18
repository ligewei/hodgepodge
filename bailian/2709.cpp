//2009年4月6日
//poj.pku_2709
//计算e
//用C语言提交竟然错误！
//poj.pku_2732未通过
#include <stdio.h>

double fun(int n);
int main()
{
	double num = 0.0;
	int m;//计算精度,最后一项分母的底数
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