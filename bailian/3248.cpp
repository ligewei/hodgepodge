//2009年4月23日
//最大公约数，正整数的最大公约数
#include<iostream>
using namespace std;
int gcd(int m,int n);
int main()
{
	int m,n;
	while(cin >> m >> n)
	{
		int result = gcd(m,n);
		cout << result << endl;
	}
	return 0;
}
int gcd(int m,int n)
{
	if (m < n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}

	if (n == 0)
		return m;
	else
		return gcd(n,m % n);
}