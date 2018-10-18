#include<iostream>
using namespace std;
//2009年6月10日
int main()
{
	int n;
	int i;
	int sum;
	int tmp;
	int out;//最后结果
	while(cin>>n && n!= 0)
	{
		tmp = 0;//可无
		sum = 0;
		out = 0;//可无
		for(i = 0;i<n-1;i++)
		{
			cin >> tmp;
			sum += tmp;
		}
		out = (n-2) * 180 - sum;
		cout << out << endl;
	}
	return 0;
}