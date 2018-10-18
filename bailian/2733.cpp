//判断闰年
//poj.pku.edu.cn_2733
//2009年4月5日
//3200不是
#include<iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;
	if((year%4==0 && year%100!=0) || (year%400==0 && year%3200!=0))
		cout << "Y" << endl;
	else 
		cout << "N" << endl;
	return 0;
}