//
//2009Äê4ÔÂ8ÈÕ
#include<iostream>
using namespace std;
int main()
{
	int h,r;
	cin >> h >> r;
	double v;
	v = 3.14159*r*r*h;
	int n1;
	n1 = 20000/v;
	int n = (int)n1 + 1;
	cout << n << endl;
	return 0;
}