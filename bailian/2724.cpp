//2009��4��13��
//�ҳ�������ͬ��ѧ��
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
	
//¼������
	for(int i =0;i<n;i++)
	{
		cin >> arr1[i];
		cin >> arr2[i];
		cin >> arr3[i];
	}
//��������
	for(int i=0;i<n;i++)
	{
		vector<string> vec;
		vec.push_back(arr1[i]);

		for(int j=i+1;j<n;j++)
		{
			if(arr2[i]!=0 && arr2[j]==arr2[i] && arr3[j]==arr3[i])
			{
				vec.push_back(arr1[j]);
				arr2[j]=0;//һ�������󣬾ͽ�����Ϊ0����ʾ��־
			}
		}

		if(vec.size()!=1)//vector�����������ֹһ��ѧ��֤�ţ��ʹ�ӡ
		{
			//Ϊ����ʹ���ڵ�����ӡ����Ҫȫ�ֱȽϣ����������˸���Χ��vector a b
			a.push_back(arr2[i]);
			b.push_back(arr3[i]);
			string s;
			for(vector<string>::size_type k=0; k != vec.size();k++)
				s = s +  " " + vec[k];
			resultVec.push_back(s);

		}
	}
//��ӡ���
	for(int month=1;month<=12;month++)
	{
		for(int day=1;day<31;day++)
		{
			for(unsigned int k=0; k != a.size();k++)//����sizi_typeͳһ��unsigned int/long
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