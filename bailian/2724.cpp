//2009年4月13日
//找出生日相同的学生
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string arr1[100];
	int arr2[100];
	int arr3[100];
	
	vector<int> a;
	vector<int> b;
	vector<string> resultVec;
	
//录入数据
	for(int i =0;i<n;i++)
	{
		cin >> arr1[i];
		cin >> arr2[i];
		cin >> arr3[i];
	}
//处理数据
	for(int i=0;i<n;i++)
	{
		vector<string> vec;
		vec.push_back(arr1[i]);

		for(int j=i+1;j<n;j++)
		{
			if(arr2[i]!=0 && arr2[j]==arr2[i] && arr3[j]==arr3[i])
			{
				vec.push_back(arr1[j]);
				arr2[j]=0;//一旦检测过后，就将其置为0，以示标志
			}
		}

		if(vec.size()!=1)//vector里面存的如果不止一个学生证号，就打印
		{
			//为了能使日期递增打印，需要全局比较，所以设置了更大范围的vector a b
			a.push_back(arr2[i]);
			b.push_back(arr3[i]);
			string s;
			for(vector<string>::size_type k=0; k != vec.size();k++)
				s = s +  " " + vec[k];
			resultVec.push_back(s);

		}
	}
//打印结果
	for(int month=1;month<=12;month++)
	{
		for(int day=1;day<31;day++)
		{
			for(unsigned int k=0; k != a.size();k++)//各种sizi_type统一到unsigned int/long
			{
				if(a[k]==month && b[k]==day)
				{
					cout << a[k] << " " << b[k];
					cout << resultVec[k] << endl;
				}	
			}
		}
	}
	
	
	return 0;
}