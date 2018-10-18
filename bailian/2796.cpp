//2009年4月7日
#include<iostream>
using namespace std;
int main()
{
	int a;
	int arr[5];
	int sum = 0;
	cin >> a;
	for(int i=0;i<5;++i)
		cin >> arr[i];

	for(int j=0;j<5;++j)
	{
		if(arr[j]<a)//a不要写成数字了！
			sum += arr[j];
	}
	cout << sum << endl;
	return 0;
}