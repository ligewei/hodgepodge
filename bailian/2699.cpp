//2009Äê4ÔÂ11ÈÕ
//
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i=10;i<=n;i++)
	{
		int shi = i/10;
		int ge = i%10;
		int sum = shi + ge;
		if(i%sum==0)
			cout << i << endl;
	}
	return 0;
}