#include<iostream>
using namespace std;
//2009年6月19日
//理解、熟悉递归，因为它太重要了，尤其是在表达概念时
//递归不只是只做递归，还可以额外做点东西

//理解递归的非超好的函数
void printnum ( int begin )
{
	if ( begin > 9 ){
		return;
	}else{
		cout<< begin;
	}
//额外做的东西
	printnum ( begin + 1 );
	cout<< begin;
}
int main()
{
	int n;
	cin >> n;
	printnum(n);
	return 0;
}