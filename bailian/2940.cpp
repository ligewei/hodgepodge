//Ƕ��ѭ��Ҫע��ѭ���Ŀ�ʼ��һ��
//2009��4��6��23:54:49
#include<iostream>
using namespace std;



int main()
{
	
	int a,n;
	cin >> a >> n;

	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		int num = 0;
		//��aaa...
		//num=aaa...
		for(int j=1;j<=i;j++)
		{
			int pow = 1;
			for(int m=1;m<j;m++)
				//�����㣬��10����
				pow *= 10;

			//�ڶ��㣬��ÿ��num
			num += (a*pow);
		}

		//��һ�㣬��ÿ��num
		sum += num;
	}
	cout << sum << endl;
	return 0;
}
