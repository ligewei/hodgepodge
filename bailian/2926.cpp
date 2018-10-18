#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long a,b;
	char c;
	while(cin >> a >> c >> b)
	{
		int flag = c -'+';
		if(!flag)
			cout << a + b << endl;
		else
			cout << a-b << endl;
	}
	return 0;
}