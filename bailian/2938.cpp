//2009Äê4ÔÂ18ÈÕ
//
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b;
	if(a<b)
	{
		int tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
	cin >> c;
	if(a<c)
	{
		int tmp;
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b<c)
	{
		int tmp;
		tmp = b;
		b = c;
		c = tmp;
	}
	cout << a << " " << b << " " << c << endl;
	return 0;

}