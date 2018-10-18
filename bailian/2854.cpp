//2009Äê4ÔÂ15ÈÕ
//
#include<iostream>
using namespace std;

int main()
{
	double x,y;
	while(cin>>x>>y)
	{
		if(x>=-1&&x<=1&&y>=-1&&y<=1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}