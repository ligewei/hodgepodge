//2009��4��15��
//��������0�Ƚ�ʱע��һ��
#include<iostream>
using namespace std;

int main()
{
	double x;
	while(cin >> x)
	{
		double money = 0;
		//С��0Ĭ�ϲ�����
		if(x<=3)
			money += 5;
		else
			money += 5 + (x-3)*2;
		if(money>40)
			money = 40;
		printf("%.2f\n",money);
	}
	return 0;
}