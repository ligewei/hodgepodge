#include<iostream>
#include<string>
//���ڴ�̫���ˣ�����Ľ�
//string��==���ж��Ƿ����
using namespace std;
int main()
{
	int n;
	cin >> n;
	int fenshu[3] = {0};
	//¼�뾺��������������
	while(n--)
	{
		string a,b,c;
		cin >> a >> b >> c;
		if(a=="right")
			fenshu[0] += 10;
		else if(a=="wrong")
			fenshu[0] -= 10;
		if(b=="right")
			fenshu[1] += 10;
		else if(b=="wrong")
			fenshu[1] -= 10;
		if(c=="right")	
			fenshu[2] += 10;
		else if(c=="wrong")
			fenshu[2] -= 10;
	}
	//�����ӡ���,����ؼ�
	int duihao[3] = {1,2,3};
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
			if(fenshu[j]>fenshu[i])
			{
				int tmp1 = fenshu[j];
				fenshu[j] = fenshu[i];
				fenshu[i] = tmp1;

				int tmp2 = duihao[j];
				duihao[j] = duihao[i];
				duihao[i] = tmp2;
			}
	}
	//û�����´��������δ���ģ���
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
			if(fenshu[j]==fenshu[i] && duihao[j]<duihao[i])
			{
				int tmp2 = duihao[j];
				duihao[j] = duihao[i];
				duihao[i] = tmp2;
			}
	}
	

	cout<<"("<<duihao[0]<<","<<fenshu[0]<<")";
	if(fenshu[1]<fenshu[0])
		cout<<endl;
	cout<<"("<<duihao[1]<<","<<fenshu[1]<<")";
	if(fenshu[2]<fenshu[1])
		cout<<endl;
	cout<<"("<<duihao[2]<<","<<fenshu[2]<<")"; 

	return 0;
}