//2009��6��16��
#include<iostream>
#include<string>
#include<vector>

#include<sstream>//istringstream
//istringstream������԰�һ���ַ���
//Ȼ���Կո�Ϊ�ָ����Ѹ��зָ�������
using namespace std;
int main()
{
	//string a[50];
	string s;
	//vector<string> vec;�����ڴ˴����д�
	while(getline(cin,s))
	{
		vector<string> vec;//����С�Ĳ��ܸ��Ǵ��
		istringstream ss(s);
        string str;
        while( ss >> str ) //��ѧһ��
			vec.push_back(str);
		for(vector<string>::size_type i=vec.size()-1;i>0;i--)
			cout << vec[i] << " " ;
		cout << vec[0] << endl;
	}
	return 0;
}
