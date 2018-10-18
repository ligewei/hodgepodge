#include<iostream>
using namespace std;
//2009年6月14日
//poj的两个站点用的编译器还不一样？
//在两个平台上运行的内存和时间竟然不一样
int main()
{
	int n;
	int i;
	int sum;//总的coins
	int num;//天数
	while(cin>>n && n!=0)
	{
		sum = 0;
		num = 0;
		//for(i=1,num += i;num<=n;i++)
		//以上超级错误，第一个分号只用来初始化
		for(i=1;num+i<=n;i++)
		{
			num += i;
			sum += i*i;
		}
		sum += (n-num)*i;
		cout << n << " " << sum << endl;
	}
	return 0;
}