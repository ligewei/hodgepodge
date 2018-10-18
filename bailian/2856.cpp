//2009Äê4ÔÂ15ÈÕ
//
#include<iostream>
using namespace std;

int main()
{
	double weight;
	char exp;
	while(cin>>weight>>exp)
	{
		double money = 0;
		if(weight<=1)
			money += 0.8;
		else
			money += 0.8 + 0.5*(weight-1);

		if(exp=='y')
			money += 2;
		cout << money << endl;
	}
	return 0;
}