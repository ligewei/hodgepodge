#include<iostream>
using namespace std;
//2009年6月17日
//是有点水
//poj.pku1516
//acm.pku2027
//zoj2201
int main()
{
	int n;
	cin >> n;
	int a,b;
	while(n--)
	{
		cin >> a >> b;
		if(a>=b)
			cout << "MMM BRAINS" << endl;
		else 
			cout << "NO BRAINS" << endl;
	}
	return 0;
}