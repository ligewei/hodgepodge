//2009��4��15��
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

		//Ѱ�Ҽ�ֵ
		//˼���ǣ��ȿ��ǵ����ǵ�һ��(0)�����һ�������ĿҪ���С�������ԸĽ���
		//�����һ��ŵ������
		for(int i=0;i<k;i++)
		{
			if(i==0)//0��
			{
				if(a[i]!=a[i+1])
					vec.push_back(i);	
			}	
			else if(i!=k-1)
			{
				if((a[i]>a[i-1]&&a[i]>a[i+1]) || (a[i]<a[i-1]&&a[i]<a[i+1]))
					vec.push_back(i);
			}
			else//���һ��
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