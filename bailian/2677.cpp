//2009年4月14日
//数组声明时[]内必须是整形常量表达式
//
#define MIN 50
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[100][100];
	int s = 0;//面积
	int c = 0;//周长

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
			if(arr[i][j] <= MIN)
			{
				s++;
				//注意这个也是可用的呵呵
				if(i==0 || j==0 || i == n-1 || j==n-1 || arr[i][j+1]>50 || arr[i][j-1]>50 
					|| arr[i-1][j]>50 || arr[i+1][j]>50)
					c++;
			}
		}
	}

	cout << s << " " << c << endl;
	return 0;
	

}