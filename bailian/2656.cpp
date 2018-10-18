#include<iostream>
using namespace std;
//变量最好定义在使用处的最近处
//动态处理问题，不要上来就存到数组中去
//2009年8月3日
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		
		int max = -1,day;
		for(int i=1;i<=n;i++)
		{
			int a,b;
			cin >> a >> b;
			if(a+b>max)
			{
				max = a + b;
				day = i;
			}

		}
		if(max<=8)
			cout << "0" << endl;
		else
			cout << day << endl;

	}
	return 0;
}