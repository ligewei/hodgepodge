//2009年4月13日
//求一个数的根数
//队规和循环
#include<iostream>
using namespace std;

int fun(int n);
int main()
{
	char a[10000];
	//cin与数组
	while(cin>>a && a[0]!='0')
	{
		int sum = 0;
		int i =0;
		//cout << sum << endl;
		while(a[i] != '\0')
		{
			sum += (int)a[i]-48;//字符转换
			//cout << a[i] << endl;;
			i++;
		}

		//cout << sum << endl;

		while(sum>=10)//伪递归调用
			sum = fun(sum);

		
		cout << sum << endl;
	}
	return 0;
}

//关键之处
int fun(int n)
{
	int sum = 0;
	while(n>=10)
	{
		int b = n%10;
		sum += b;
		n /= 10;
	}
	sum += n;
	return sum;
}