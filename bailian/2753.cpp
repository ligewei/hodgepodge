//2009��4��11��
//�������ͱ�������Ҫ��ͬ����int fun = fun(a)��
//����֡�������Ϊ���� 1 �������ĺ�����
#include <iostream>
using namespace std;

int fun(int a);
int main ()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		cout << fun(a) << endl;
	}
	return 0;
}
int fun(int a)
{
	if(a==1 || a==2)
		return 1;
	else 
		return fun(a-1) + fun(a-2);
}