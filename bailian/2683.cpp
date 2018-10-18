#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double a = 2;
	double b = 1;
	double sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum += a/b;
		a = a+b;
		b = a-b;
		
	}
	printf("%.4lf\n",sum);
	return 0;

}