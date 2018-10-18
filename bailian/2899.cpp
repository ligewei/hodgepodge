//2009年4月19日
//整个数组之间不能直接相互赋值!!!
#include<iomanip>
#include<iostream>
using namespace std;

int change(int a[5][5],int n,int m);

int main()
{
	int a[5][5];
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			cin >> a[i][j];

	int n,m;
	cin >> n >> m;
	
	//call the function
	int flag = change(a,n,m);

	//output
	if(!flag)
		cout<< "error" << endl; 
	else 
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
				cout << setw(4) << a[i][j];
			cout << endl;
		}
	}
	return 0;

}
int change(int a[5][5],int n,int m)
{
	if(n<0||n>4||m<0||m>4)
		return 0;
	else
	{
		//换行
		for(int i=0;i<5;i++)
		{
			int tmp;
			tmp = a[n][i];
			a[n][i] = a[m][i];
			a[m][i] = tmp;

		}
		return 1;
	}
}
