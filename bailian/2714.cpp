//poj.pku.edu.cn
//2009��4��5��
//ÿдһ���������ջ���Ȼ��Ŀ�ܼ�
//��ߴ��������͵�������
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	float sum = 0;
	int m = n;
	while(m--)//����m��Ϊ�˲�Ӱ����ƽ����ʱ����n��ֵ
	{
		int age;
		cin >> age;
		sum += age;
	}
	float ave = sum/n;//����m
	printf("%.2f", ave); 
	return 0;
}