#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int count = 0;
	while(cin>>n && n!=0)
	{
		count++;

		string input[15];
		int i;

		for(i = 0; i < n; i++)
			cin >> input[i];

		cout << "SET " << count << endl;
		for(i = 0; i < n; i += 2)
			cout << input[i] << endl;


		if(n%2==0)
			 i--;
		else
			i -= 3;

		for(; i >= 0; i -= 2)
			cout << input[i] << endl;
	}
	return 0;
}