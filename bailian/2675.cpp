//poj.pku.edu.cn_2675
//2009��4��5��
//���������һ���ࣺ�ڿ�ʼ��ʱ������һ��N����������N������
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int k = 0;
	cin >> k;
	while(k--)
    {
		 int arr[10];
		 for(int i=0;i<10;i++)
			 cin >> arr[i];
		 float sum = 0;
		 sum = arr[0]*28.9 + arr[1]*32.7 + arr[2]*45.6 + arr[3]*78
			 + arr[4]*35 + arr[5]*86.2 + arr[6]*27.8 + arr[7]*43
			 + arr[8]*56 + arr[9]*65;
		 printf("%.2f\n",sum);
    }
	return 0;

}
