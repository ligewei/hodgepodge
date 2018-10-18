#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
//逻辑是否表达清楚非常重要 
int main()
{
	int n;
	cin >> n;
	getchar();//没有这个换行将被当做一个字符进入下面的判断
	string str;
	unsigned int i;
	bool flag ;
	while(n--)
	{
		flag = true;//这个很重要！
		getline(cin,str);
		//有了这个getchar();延迟一个回车才输出
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