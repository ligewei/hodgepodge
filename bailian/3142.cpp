//2009年4月13日
//注意想象模拟的过程
#include<iostream>
using namespace std;

int main()
{
	
	double h;
	cin >> h;
	double sum = h;
	for(int i=1;i<=10;i++)
	{	
		h = h/2;
		sum += h*2;
	}
	sum -= h*2;
	cout << sum << endl;
	cout << h << endl;
	return 0;
}