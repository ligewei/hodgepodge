//2009��4��7��
#include<iostream>
using namespace std;
int main()
{
	int k;
	cin >> k;
	int sum = 0;
	for(int i=1;i<=k;i++)
	{
		sum += i*i*i;
	}
	cout << sum << endl;
	return 0;
}