// 2009��4��18��
//
#include<iostream>
using namespace std;
int main()
{
//����+����
	int m,n;
	cin >> n >> m;
	int a[100];
	for(int i=0; i<n; i++)
		cin >> a[i];

//����ҵ����
	int *p = a;
	for(int i=0;i<m;i++)
	{
		for(int j=0)
		*(p+m) = *p;
		*(p+n-m) = *p;
		p++;
	}

//��������Ľ��
	for(int i=0;i<n;i++)
		cout << a[i] << " " ;
	return 0;
}