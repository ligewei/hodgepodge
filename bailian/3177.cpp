//2009年4月15日
//
#include<math.h>
#include<iostream>
using namespace std;

bool isPrime(int m);
int main()
{
	int x,y;
	cin >> x >> y;
	if(x>y)
	{
		int tmp;
		tmp=x;x=y;y=tmp;
	}
	int num = 0;
	for(int i=x;i<=y;i++)
	{
		if(isPrime(i))
			num++;
	}
	cout << num << endl;
	return 0;
}



//据谭浩强127
//判断素数
//如果是素数，返回true
bool isPrime(int m)
{
	int i;
	int k = sqrt((double)m);
	for(i=2;i<=k;i++)
		if(m%i==0)
			break;
	if(i>k && m != 1)
		return true;
	else
		return false;
}