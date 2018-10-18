#include<iostream>
#include<vector>
#include<algorithm>
//2009年6月14日
using namespace std;
int main()
{
	vector<int> vec(10);
	int i;
	while(cin>>vec[0]>>vec[1]>>vec[2]>>vec[3]>>vec[4]
	>>vec[5]>>vec[6]>>vec[7]>>vec[8]>>vec[9])
	{
		sort(vec.begin(),vec.end());
		for(i=9;i>=0;i--)//如果i定义为unsigned，会出问题，i<0
		{
			if(vec[i]%2 != 0)
				cout << vec[i] << " ";
		}
		for(i=0;i<10;i++)
		{
			if(vec[i]%2 == 0)
				cout << vec[i] << " ";
		}
		cout << endl;
	}
	return 0;
}