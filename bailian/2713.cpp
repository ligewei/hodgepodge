//2009��4��15��
//
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[500][500];
	int s = 0;//���
	vector<int> vec;//vec�е�ÿһ����ÿ�к���0����Ŀ
	int num = 0;//0���ܸ���
//¼������
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> arr[i][j];
		}
	}
//��������
	for(int i=0;i<n;i++)
	{
		int sizeof0 = 0;//ÿ����0�ĸ���
		for(int j=0;j<n;j++)
		{
			if(arr[i][j] == 0)
				sizeof0++;	
		}
		vec.push_back(sizeof0);
	}
	
	int max0 = 0;//vec��������
	int row = 0;//vec�ַ�0����Ŀ
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
	s = max0*row -num;//�ܸ���-0�ĸ���

	cout << s << endl;
	return 0;
	

}
