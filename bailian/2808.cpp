//У�������
//����Ԫ��Ϊtrue�ߣ�˵������
#include<iostream>
using namespace std;
int main()
{
	int L,M;
	cin >> L >> M;
	
	bool arr[10001];
	for(int i=0;i<10001;i++)
		arr[i] = true;

//�ֱ���ÿ�����䣬�������ڵĶ���Ϊfalse
	for(int i=0;i<M;i++)
	{
		int begin,end;
		cin >> begin >> end;
		for(int j=begin;j<=end;j++)
			arr[j] = false;
	}

	int counter = 0;
	for(int i=0;i<=L;i++)
	{
		if(arr[i])
			counter++;
	}

	cout << counter << endl;
	return 0;


}