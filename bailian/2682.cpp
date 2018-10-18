// 2009年4月18日
//
#include<iostream>
using namespace std;
int main()
{
//定义+输入
	int m,n;
	cin >> n >> m;
	int a[100];
	for(int i=0; i<n; i++)
		cin >> a[i];

//核心业务处理
	int *p = a;
	for(int i=0;i<m;i++)
	{
		for(int j=0)
		*(p+m) = *p;
		*(p+n-m) = *p;
		p++;
	}

//输出处理后的结果
	for(int i=0;i<n;i++)
		cout << a[i] << " " ;
	return 0;
}