//
//2009��4��8��
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		//����7�ı�������λ����7��ʮλ����7
		//if(i/7==10)
			//cout << i << endl;
		//if(i%7!=0 && i%10!=7 && i/7!=10)����78��79
		//if(i%7!=0 && i%10!=7 && i/7!=10 && i/7!=11)����80-88
		if(i%7!=0 && i%10!=7 && !(i>=70&&i<=79))
			sum += i*i;
	}
	cout << sum << endl;
	return 0;
}
