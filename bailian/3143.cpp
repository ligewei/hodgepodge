//2009年4月13日
//验证哥德巴赫猜想
#include<math.h>
#include<iostream>
using namespace std;

bool isPrime(int m);
int main()
{
	int x;
	while(cin>>x)
	{
		if(x<6 || x%2!=0)
			cout << "Error!" << endl;
		else
		{
			int maxY = x/2;
			for(int y=3;y<=maxY;y++)
			{
				if(!isPrime(y))
					continue;
				else
				{
					int z = x-y;
					if(!isPrime(z))
						continue;
					else
						cout << x << "=" << y << "+" << z << endl;
				}
			}
		}
	}// end while
	return 0;
}

//据谭浩强127
bool isPrime(int m)
{
	int i;
	int k = sqrt((double)m);
	for(i=2;i<=k;i++)
		if(m%i==0)
			break;
	if(i>k)
		return true;
	else
		return false;
}