//2009Äê4ÔÂ11ÈÕ
//
#include<iostream>
using namespace std;

int main()
{
	for(int i=100;i<=999;i++)
	{
		int sum = 0;
		int qian = i/100;
		int bai = (i%100)/10;
		int ge = (i%100)%10;
		sum = qian*qian*qian + bai*bai*bai + ge*ge*ge;
		if(sum == i)
			cout << i << endl;
	}
	return 0;
}