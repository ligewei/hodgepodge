#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char c;
	int result = 1;
	while(cin>>a>>c)
	{
		if((c-'!')==0)
		{
			//һ��Ҫ�ٴγ�ʼ��
			//ȫ�ֱ�����ȱ��֮һ
			result = 1;
			if(a!=0)
				for(int i=1;i<=a;i++)
					result *= i;			
		}
		else
		{
			cin >> b;
			if((c-'+'==0))
				result = a + b;
			else if((c-'-')==0)
				result = a - b;
			else if((c-'*')==0)
				result = a * b;
			else if((c-'/')==0)
			{
				if(b==0)
				{
					cout << "error" << endl;
					continue;
				}
				else 
					result = a / b;
			}
			else
			{
				if(b==0)
				{
					cout << "error" << endl;
					continue;
				}
				else 
					result = a % b;
			}
		}
		cout << result << endl;
	}
	return 0;
}