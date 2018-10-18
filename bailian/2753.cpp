//2009年4月11日
//函数名和变量名不要相同，如int fun = fun(a)，
//会出现“项不会计算为接受 1 个参数的函数”
#include <iostream>
using namespace std;

int fun(int a);
int main ()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		cout << fun(a) << endl;
	}
	return 0;
}
int fun(int a)
{
	if(a==1 || a==2)
		return 1;
	else 
		return fun(a-1) + fun(a-2);
}