//2009��4��5��
//��12����n�Ľ׳�int����
//��20���ڵĽ׳�Ҫlong long int��long int�����У�
//long int ��long��ͬ
//poj.pku.edu.cn_2729
#include<iostream>
using namespace std;

int main()
{
	long long  n=1;
	long long  result = 1;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		result *= i;
	}
	cout << result << endl;
	return 0;
}