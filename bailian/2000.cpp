#include<iostream>
using namespace std;
//2009��6��14��
//poj������վ���õı���������һ����
//������ƽ̨�����е��ڴ��ʱ�侹Ȼ��һ��
int main()
{
	int n;
	int i;
	int sum;//�ܵ�coins
	int num;//����
	while(cin>>n && n!=0)
	{
		sum = 0;
		num = 0;
		//for(i=1,num += i;num<=n;i++)
		//���ϳ������󣬵�һ���ֺ�ֻ������ʼ��
		for(i=1;num+i<=n;i++)
		{
			num += i;
			sum += i*i;
		}
		sum += (n-num)*i;
		cout << n << " " << sum << endl;
	}
	return 0;
}