//2009年4月19日
//
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//给sort函数写比较规则
bool less_second(const string & m1, const string & m2) {
	return m1.size() < m2.size();
}


int main()
{
	unsigned int n;
	unsigned int i;
	string s;
	while(cin>>n)
	{
		getchar();
		vector<string> vec;
		for(i=0;i<n;i++)
		{
			getline(cin,s);
			if(s=="stop")
				break;
			vec.push_back(s);
		}
		sort(vec.begin(),vec.end(),less_second);
		for(i=0;i<vec.size();i++)
			cout << vec[i] << endl;
	}
	return 0;
}