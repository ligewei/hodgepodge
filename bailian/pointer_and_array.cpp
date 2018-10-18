#include<iostream>
using namespace std;
int main()
{

	//char *s1 = "hello";
	//s1[2] = 'a';s1是不可修改的，所以这段代码要注意
	//cout << s1 

	char s2[] = "hello";
	s2[2] = 'a';
	cout << s2;
}
