//poj.pku.edu.cn
//2009年4月5日
//每写一道都会有收获，虽然题目很简单
//提高代码能力和调试能力
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	float sum = 0;
	int m = n;
	while(m--)//换成m是为了不影响求平均数时除数n的值
	{
		int age;
		cin >> age;
		sum += age;
	}
	float ave = sum/n;//不是m
	printf("%.2f", ave); 
	return 0;
}