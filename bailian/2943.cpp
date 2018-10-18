//2009年4月18日
//
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100];
	string b[100];
	for(int i=0;i<n;i++)
	{
		//cin >> a[i];
		//cin >> b[a[i]];
		//说有runtime error
		cin >> a[i];
		cin >> b[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int tmp;
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;

				string str;
				str = b[i];
				b[i] = b[j];
				b[j] = str;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout << b[i] << endl;
	//cout << endl;
	return 0;
}