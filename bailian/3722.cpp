#include<iostream>
using namespace std;
//2009��6��16��
int main()
{
	int k;
	cin >> k;
	int n,m;
	int i;//ѭ�����Ʊ���
	int j;//m-a
	int flag;
	while(k--)
	{
		flag = 0;//�����˶��ٻ��ˣ������ǵã�����
		cin >> n >> m;
		for(i=1;i<=n;i++)
		{
			j = m - i;
			if(n%i==0 && n%j==0)
			{
				flag = i;
				break;
			}
		}
		if(flag)
			cout << flag << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}