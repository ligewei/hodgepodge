//2009��4��14��
//��������ʱ[]�ڱ��������γ������ʽ
//
#define MIN 50
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[100][100];
	int s = 0;//���
	int c = 0;//�ܳ�

//¼������
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> arr[i][j];
		}
	}
//��������
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j] <= MIN)
			{
				s++;
				//ע�����Ҳ�ǿ��õĺǺ�
				if(i==0 || j==0 || i == n-1 || j==n-1 || arr[i][j+1]>50 || arr[i][j-1]>50 
					|| arr[i-1][j]>50 || arr[i+1][j]>50)
					c++;
			}
		}
	}

	cout << s << " " << c << endl;
	return 0;
	

}