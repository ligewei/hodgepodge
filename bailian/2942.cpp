#include<iostream>
using namespace std;
//吃糖果，用了递归
//2009年6月19日
int fun(int n);
int main()
{
	int n;
	cin >> n;
	cout << fun(n) << endl;
	return 0;
}
int fun(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else
		return fun(n-1)+fun(n-2);
}