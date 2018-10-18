#include<iostream>
using namespace std;

int main()
{
	int a[5];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4])
	{
		bool flag = false;
		for(int i=0;i<5;i++)
		{
			for(int j=i+1;j<5;j++)
				if(a[i]>a[j])
				{
					flag = true;
					int tmp = a[j];
					a[j] = a[i];
					a[i] = tmp;
				}
			
		}
		if(flag)
		{
			cout << "No";
			for(int i=0;i<5;i++)
				cout << " " << a[i];
			cout << endl;
		}
		else
			cout << "Yes" << endl;
			
	}
	return 0;
}