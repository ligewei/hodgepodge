#include<iostream>
using namespace std;
//���ǹ������˵ݹ�
//2009��6��19��
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