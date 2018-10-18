//2009年4月13日
//

#include<iostream>
using namespace std;

int main()
{
	int arr[8] = {0};
	int n;
	cin >> n;
	int key;
	for(int i=0;i<n;i++)
	{
		cin >> key;
		key= key-1;//千万注意
		arr[key] = 1;
	}
	//四项指标
	int test1 = arr[0] + arr[1];
	int test2 = arr[2] + arr[3];
	int test3 = arr[4] + arr[5];
	int test4 = arr[6] + arr[7];
	if(test1==2 || test2 ==2 || test3 ==1 || test4 != 1)
		cout << "0" << endl;
	else 
		cout << "1" << endl;

	return 0;

	
}