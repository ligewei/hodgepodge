//2009��4��11��
//ע������Ĵ���
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	while(cin>>n)
	{
		int sum = 0;//һ��Ҫ����ѭ���ڲ���
		for(int i=0;i<=n;i++)
		{
			if(i%3==0)
				sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}