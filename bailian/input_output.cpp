//acm.hdu.edu.cn_1089
//c codes
//��˵���ж������������ݣ�ֱ�����������ļ�ĩβΪֹ
/**
	scanf��������ֵ���Ƕ����ı����������磺scanf( ��%d %d��, &a, &b );
	���ֻ��һ���������룬����ֵ��1������������������룬����ֵ��2��
	���һ����û�У��򷵻�ֵ��-1��EOF��һ��Ԥ����ĳ���������-1��
**/
#include <stdio.h>
int main()
{ 
    int a,b;
    while(scanf("%d %d",&a, &b) != EOF)
    printf("%d\n",a+b);
} 
/*C++�汾
	//c++ codes
	#include<iostream>
	using namespace std;
	int main()
	{
		int a ,b;
		while(cin>>a>>b)
		cout<<a+b<<endl;
		return 0;
	}
*/