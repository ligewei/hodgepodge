//acm.hdu.edu.cn_1089
//c codes
//不说明有多少组输入数据，直到读至输入文件末尾为止
/**
	scanf函数返回值就是读出的变量个数，如：scanf( “%d %d”, &a, &b );
	如果只有一个整数输入，返回值是1，如果有两个整数输入，返回值是2，
	如果一个都没有，则返回值是-1。EOF是一个预定义的常量，等于-1。
**/
#include <stdio.h>
int main()
{ 
    int a,b;
    while(scanf("%d %d",&a, &b) != EOF)
    printf("%d\n",a+b);
} 
/*C++版本
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