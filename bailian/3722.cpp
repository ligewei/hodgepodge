#include<iostream>
using namespace std;
//2009年6月16日
int main()
{
	int k;
	cin >> k;
	int n,m;
	int i;//循环控制变量
	int j;//m-a
	int flag;
	while(k--)
	{
		flag = 0;//都错了多少回了，还不记得！！！
		cin >> n >> m;
		for(i=1;i<=n;i++)
		{
			j = m - i;
			if(n%i==0 && n%j==0)
			{
				flag = i;
				break;
			}
		}
		if(flag)
			cout << flag << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}