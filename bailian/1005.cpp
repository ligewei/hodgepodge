#include<iostream>
using namespace std;
//2009年6月10日
int main()
{
	int n;
	cin >> n;
	int m =n;//输出END OF OUTPUT.用
	double x,y;
	double s;
	int i = 1;
	int nn = 0;
	while(n--)
	{
		nn++;
		cin >> x >> y;
		s = 1.57 * (x*x + y*y);
		while(50 * i < s)
			++i;
		cout << "Property "
			 << nn
			 << ": This property will begin eroding in year "
			 << i << "." << endl;
		if(nn==m)
			cout << "END OF OUTPUT." << endl;
	}
	return 0;
}