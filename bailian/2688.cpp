#include <iostream>
using namespace std;

//2009Äê10ÔÂ3ÈÕ

int main()
{
	char s[80] = {'\0'};
	gets(s);
	
	char *p = s;
	int a,e,i,o,u;
	a = e = i = o = u = 0;
	while(*p != '\0')
	{
		if(*p == 'a')
			a++;
		if(*p == 'e')
			e++;
		if(*p == 'i')
			i++;
		if(*p == 'o')
			o++;
		if(*p == 'u')
			u++;
		p++;
	}
	cout << a << " "
		 << e << " "
		 << i << " "
		 << o << " "
		 << u << " "
		 << endl;
	return 0;	
}