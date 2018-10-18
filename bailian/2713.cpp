//2009年4月15日
//
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[500][500];
	int s = 0;//面积
	vector<int> vec;//vec中的每一项是每行含有0的数目
	int num = 0;//0的总个数
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
		int sizeof0 = 0;//每行中0的个数
		for(int j=0;j<n;j++)
		{
			if(arr[i][j] == 0)
				sizeof0++;	
		}
		vec.push_back(sizeof0);
	}
	
	int max0 = 0;//vec中最大的数
	int row = 0;//vec种非0的数目
	for(vector<int>::size_type i=0;i!=vec.size();i++)
	{
		if(vec[i]!=0)
		{
			row++;
			if(vec[i]>=max0)
				max0 = vec[i];
			num += vec[i];
		}
		
	}
	s = max0*row -num;//总个数-0的个数

	cout << s << endl;
	return 0;
	

}
