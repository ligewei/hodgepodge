//2009��4��11��
//���ŵĿ���
//������vector�汾ûд
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	for(int i=2;i<=1000;i++)
	{
		int sum = 0;
		vector<int> vec;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum += j;
				vec.push_back(j);
			}
		}
		if(sum==i)
		{
			cout << i<< " its factors are ";
			for(vector<int>::size_type j=0;j!=vec.size();j++)
			{
				cout << vec[j];
				//���ŵĿ���
				if(j != (vec.size()-1))
					cout << ",";
			}
			cout << endl;
		}
	}
	return 0;
}