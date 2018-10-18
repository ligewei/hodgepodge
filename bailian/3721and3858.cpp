//2009年8月1日
//3721和3858重复了
#include<cstdio>
#include<iostream>
using namespace std;
//分别求和，然后线性搜索，方法太笨了
//
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int sum = 0;
		int tmp = 0;
		int num;
		cin >> num;
		int a[100];
		//int b[100] = {1};这句话的意思是第一个是1，其余全为0！！！
		int b[100] = {0};
		for(int i=0;i<num;i++)
			cin >> a[i];
		for(int i=0;i<num;i++)
		{
			for(int j=i+1;j<num;j++)
			{
				tmp = a[i] + a[j];
				for(int k=0;k<num;k++)
				{
					//千万注意
					//不等于其它两个数,题意要清楚
					if(a[k]==tmp && b[k]==0 && k!= i && k!= j)
					{
						sum++;
						b[k] = 1;
					}
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}
