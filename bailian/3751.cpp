#include<iostream>
using namespace std;
//������˫��ѭ����ֱ�Ӽ���m*n�����
//������
int main()
{
	int n,m;
	cin >> n >> m;
	int a[100][100];
	int i,j;
	int max,min;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin >> a[i][j];

			if(i==0 && j==0)
			{
				max = a[0][0];
				min = a[0][0];
			}
			
			if(a[i][j]>max)
				max = a[i][j];
			if(a[i][j]<min)
				min = a[i][j];
		}
	}
	cout << max << " " << min << endl;
	return 0;

}