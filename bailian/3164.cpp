//2009��4��15��
//

#include<iostream>
using namespace std;

int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		cin >> a[i];

	//ð�ݷ�����
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				int tmp;
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	//�������
	for(int i=0;i<10;i++)
	{
		if(a[i]%2 != 0)
			cout << a[i] << " ";
	}
	//���ż��
	for(int i=0;i<10;i++)
	{
		if(a[i]%2==0)
			cout << a[i] << " ";
	}
	
	return 0;
}