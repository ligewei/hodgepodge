//嵌套循环要注意循环的开始相一致
//2009年4月6日23:54:49
#include<iostream>
using namespace std;



int main()
{
	
	int a,n;
	cin >> a >> n;

	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		int num = 0;
		//求aaa...
		//num=aaa...
		for(int j=1;j<=i;j++)
		{
			int pow = 1;
			for(int m=1;m<j;m++)
				//第三层，求10次幂
				pow *= 10;

			//第二层，求每个num
			num += (a*pow);
		}

		//第一层，加每个num
		sum += num;
	}
	cout << sum << endl;
	return 0;
}
