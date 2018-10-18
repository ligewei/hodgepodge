//2009年4月5日
//求12以内n的阶乘int即可
//求20以内的阶乘要long long int，long int都不行！
//long int 和long相同
//poj.pku.edu.cn_2729
#include<iostream>
using namespace std;

int main()
{
	long long  n=1;
	long long  result = 1;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		result *= i;
	}
	cout << result << endl;
	return 0;
}