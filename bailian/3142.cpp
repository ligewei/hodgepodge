//2009��4��13��
//ע������ģ��Ĺ���
#include<iostream>
using namespace std;

int main()
{
	
	double h;
	cin >> h;
	double sum = h;
	for(int i=1;i<=10;i++)
	{	
		h = h/2;
		sum += h*2;
	}
	sum -= h*2;
	cout << sum << endl;
	cout << h << endl;
	return 0;
}