#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
//�߼��Ƿ�������ǳ���Ҫ 
int main()
{
	int n;
	cin >> n;
	getchar();//û��������н�������һ���ַ�����������ж�
	string str;
	unsigned int i;
	bool flag ;
	while(n--)
	{
		flag = true;//�������Ҫ��
		getline(cin,str);
		//�������getchar();�ӳ�һ���س������
		if(isalpha(str[0]) || str[0]=='_')
		{
			for(i=2;i<str.size();i++)
			{
				if(!isalnum(str[i]) && str[i]!='_' )
					flag = false;
			}
		}
		else 
			flag = false;
		if(flag)
			cout << "1" << endl;
		else
			cout << "0" << endl;
		
	}
	return 0;
}