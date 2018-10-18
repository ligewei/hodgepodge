#include<iostream>
using namespace std;
int main()
{
	int n;
	int a;
	int num;
	cin >> n;
	while(n--)
	{
		cin >> a;
		num = 0;
		//¹Ø¼üËã·¨
		while(a>=1)
		{
			if(a%2==1)
				num++;
			a /= 2;
		}
		cout << num << endl;
	}
	return 0;
}