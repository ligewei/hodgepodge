//2009年4月15日
//浮点数和0比较时注意一下
#include<iostream>
using namespace std;

int main()
{
	double x;
	while(cin >> x)
	{
		double money = 0;
		//小于0默认不可能
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