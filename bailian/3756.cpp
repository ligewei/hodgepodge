#include<iostream>
using namespace std;
//2009��6��10��
int main()
{
	int n;
	int i;
	int sum;
	int tmp;
	int out;//�����
	while(cin>>n && n!= 0)
	{
		tmp = 0;//����
		sum = 0;
		out = 0;//����
		for(i = 0;i<n-1;i++)
		{
			cin >> tmp;
			sum += tmp;
		}
		out = (n-2) * 180 - sum;
		cout << out << endl;
	}
	return 0;
}