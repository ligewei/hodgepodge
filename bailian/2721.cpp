#include<iostream>
#include<cstring>
using namespace std;
//strcasecmpΪɶ��������
//2009��6��21��
int main()
{
	int i;
	char a[81],b[81];

	cin.getline(a,81);
	cin.getline(b,81);

	
	//	��˼·�������еĴ�д���Сд
	//	ת��˼��
	//	��д��Сд
	   for(i=0;i<strlen(a);i++)
	   if(a[i]>'A' && a[i]<'Z') a[i]=a[i]-'A'+'a';

	   for(i=0;i<strlen(b);i++)
	   if(b[i]>'A' && b[i]<'Z') b[i]=b[i]-'A'+'a';

	   if(strcmp(a,b)<0) cout<<"<"<<endl;

	   if(strcmp(a,b)==0) cout<<"="<<endl;

	   if(strcmp(a,b)>0) cout<<">"<<endl;
	

	return 0;
	
}
