//2009年4月15日

#define MIN 50
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[100][100];
	int num = 0;

//录入数据
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> arr[i][j];
		}
	}
//处理数据
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=0 && j!=0 && i != n-1 && j!=n-1 && arr[i][j+1]-arr[i][j]>=50 
					&& arr[i][j-1]-arr[i][j]>=50 && arr[i-1][j]-arr[i][j]>=50 
					&& arr[i+1][j]-arr[i][j]>=50)
					num++;
			
		}
	}
	cout << num << endl;
	return 0;
	

}