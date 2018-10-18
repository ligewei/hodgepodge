//2009年4月15日
//

#include<iostream>
using namespace std;

int main()
{
	int a[10];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9])
	{

		//冒泡法排序
		for(int i=0;i<10;i++)
		{
			for(int j=i+1;j<10;j++)
			{
				if(a[i]<a[j])
				{
					int tmp;
					tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
		//输出奇数
		for(int i=0;i<10;i++)
		{
			if(a[i]%2 != 0)
				cout << a[i] << " ";
		}

		//冒泡法排序
		for(int i=0;i<10;i++)
		{
			for(int j=i+1;j<10;j++)
			{
				if(a[i]>a[j])
				{
					int tmp;
					tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
		//输出偶数
		for(int i=0;i<10;i++)
		{
			if(a[i]%2==0)
				cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}