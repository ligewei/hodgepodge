//2009Äê4ÔÂ8ÈÕ
//
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	double bike,walk;
	int n;
	cin >> n;
	while(n--)
	{
		int len;
		cin >> len;
		bike = len/3.0 + 50;
		walk = len/1.2;
		
		if(bike>walk)
			cout << "Walk" << endl;
		else if(bike<walk)
			cout << "Bike" << endl;
		else 
			cout << "All" << endl;

	}
	return 0;

}