//2009年4月15日
//
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int k;
		cin >> k;
		int a[80];
		vector<int> vec;

		for(int i=0;i<k;i++)
			cin >> a[i];

		//寻找极值
		//思考是，先考虑到的是第一项(0)和最后一项，由于题目要求从小到大，所以改进后
		//把最后一项放到了最后
		for(int i=0;i<k;i++)
		{
			if(i==0)//0项
			{
				if(a[i]!=a[i+1])
					vec.push_back(i);	
			}	
			else if(i!=k-1)
			{
				if((a[i]>a[i-1]&&a[i]>a[i+1]) || (a[i]<a[i-1]&&a[i]<a[i+1]))
					vec.push_back(i);
			}
			else//最后一项
			{
				if(a[i]!=a[i-1])
					vec.push_back(i);
			}
		}//end for
		for(vector<int>::size_type i=0;i!=vec.size();i++)
			cout << vec[i] << " ";
		cout << endl;
	}//end while
	return 0;
}