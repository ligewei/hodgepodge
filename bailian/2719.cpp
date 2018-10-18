//2009Äê4ÔÂ8ÈÕ
#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	int arr[10];
	for(int i=0;i<10;i++)
		cin >> arr[i];
	int hen;
	cin >> hen;
	hen += 30;
	for(int i=0;i<10;i++)
	{
		if(hen>=arr[i])
			num++;
	}
	cout << num << endl;
	return 0;
}