//2009年4月11日
//注意输入的处理
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	while(cin>>n)
	{
		int sum = 0;//一定要放在循环内部！
		for(int i=0;i<=n;i++)
		{
			if(i%3==0)
				sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}