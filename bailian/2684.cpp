//求阶乘和
//2009年4月6日
//poj.pku_2684
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int  res = 1;
	int sum = 0;
	for(int i = 1; i<=n; ++i)
	{
		res *= i;
		sum += res;
	}

	cout << sum << endl;
	return 0;

}