//2009��4��13��
//��һ�����ĸ���
//�ӹ��ѭ��
#include<iostream>
using namespace std;

int fun(int n);
int main()
{
	char a[10000];
	//cin������
	while(cin>>a && a[0]!='0')
	{
		int sum = 0;
		int i =0;
		//cout << sum << endl;
		while(a[i] != '\0')
		{
			sum += (int)a[i]-48;//�ַ�ת��
			//cout << a[i] << endl;;
			i++;
		}

		//cout << sum << endl;

		while(sum>=10)//α�ݹ����
			sum = fun(sum);

		
		cout << sum << endl;
	}
	return 0;
}

//�ؼ�֮��
int fun(int n)
{
	int sum = 0;
	while(n>=10)
	{
		int b = n%10;
		sum += b;
		n /= 10;
	}
	sum += n;
	return sum;
}