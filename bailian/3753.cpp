//2009年6月16日
#include<iostream>
#include<string>
#include<vector>

#include<sstream>//istringstream
//istringstream对象可以绑定一行字符串
//然后以空格为分隔符把该行分隔开来。
using namespace std;
int main()
{
	//string a[50];
	string s;
	//vector<string> vec;定义在此处会有错
	while(getline(cin,s))
	{
		vector<string> vec;//避免小的不能覆盖大的
		istringstream ss(s);
        string str;
        while( ss >> str ) //又学一招
			vec.push_back(str);
		for(vector<string>::size_type i=vec.size()-1;i>0;i--)
			cout << vec[i] << " " ;
		cout << vec[0] << endl;
	}
	return 0;
}
