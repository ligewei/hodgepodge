#include<cstdio>
#include<iostream>
using namespace std;
//2009��8��1��
//poj3864������7�޹ص���
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1;i<=n;i++)
	{
		if(i%7 != 0 && i/10 != 7 && i%10 != 7)
		{
			sum += i*i;
		}

	}
	cout << sum << endl;
	return 0;
}