//2009Äê4ÔÂ7ÈÕ
#include<iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	int var;
	int num1 = 0;
	int num5 = 0;
	int num10 = 0;
	for(int i=0;i<k;i++)
	{
		cin >> var;
		if(var==1)
			num1++;
		else if(var==5)
			num5++;
		else if(var==10)
			num10++;
	}
	cout << num1 << endl;
	cout << num5 << endl;
	cout << num10 << endl;
	return 0;
}