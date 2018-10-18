#include<iostream>
#include<cstring>
using namespace std;
//strcasecmp为啥不能用呢
//2009年6月21日
int main()
{
	int i;
	char a[81],b[81];

	cin.getline(a,81);
	cin.getline(b,81);

	
	//	好思路，把所有的大写变成小写
	//	转化思想
	//	大写变小写
	   for(i=0;i<strlen(a);i++)
	   if(a[i]>'A' && a[i]<'Z') a[i]=a[i]-'A'+'a';

	   for(i=0;i<strlen(b);i++)
	   if(b[i]>'A' && b[i]<'Z') b[i]=b[i]-'A'+'a';

	   if(strcmp(a,b)<0) cout<<"<"<<endl;

	   if(strcmp(a,b)==0) cout<<"="<<endl;

	   if(strcmp(a,b)>0) cout<<">"<<endl;
	

	return 0;
	
}
