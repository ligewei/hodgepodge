#include<iostream>
using namespace std;
//̫������
//2009��6��14��
int main()
{
	int a,b,c,d,e,f;
	cin >> a;
	int sum = 0;

	cin >> b;
	if(b<a)
		sum += b;

	cin >> c;
	if(c<a)
		sum += c;

	cin >> d;
	if(d<a)
		sum += d;

	cin >> e;
	if(e<a)
		sum += e;

	cin >> f;
	if(f<a)
		sum += f;

	cout << sum << endl;
	return 0;

}
