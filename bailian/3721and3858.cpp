//2009��8��1��
//3721��3858�ظ���
#include<cstdio>
#include<iostream>
using namespace std;
//�ֱ���ͣ�Ȼ����������������̫����
//
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int sum = 0;
		int tmp = 0;
		int num;
		cin >> num;
		int a[100];
		//int b[100] = {1};��仰����˼�ǵ�һ����1������ȫΪ0������
		int b[100] = {0};
		for(int i=0;i<num;i++)
			cin >> a[i];
		for(int i=0;i<num;i++)
		{
			for(int j=i+1;j<num;j++)
			{
				tmp = a[i] + a[j];
				for(int k=0;k<num;k++)
				{
					//ǧ��ע��
					//����������������,����Ҫ���
					if(a[k]==tmp && b[k]==0 && k!= i && k!= j)
					{
						sum++;
						b[k] = 1;
					}
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}
