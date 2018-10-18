#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long a,b,c,d,e;
		cin >> a >> b >> c >> d;
		if(a-b != b-c)
			e = d * d/c;
		else
			e = d + d -c;
		cout << a << " "
			 << b << " "
			 << c << " "
			 << d << " "
			 << e << " "
			 << endl;
	}
	return 0;
}