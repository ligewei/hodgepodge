#include<iostream>
using namespace std;
//������ö�����ʹ�ô��������
//��̬�������⣬��Ҫ�����ʹ浽������ȥ
//2009��8��3��
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		
		int max = -1,day;
		for(int i=1;i<=n;i++)
		{
			int a,b;
			cin >> a >> b;
			if(a+b>max)
			{
				max = a + b;
				day = i;
			}

		}
		if(max<=8)
			cout << "0" << endl;
		else
			cout << day << endl;

	}
	return 0;
}