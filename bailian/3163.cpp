#include<iostream>
using namespace std;
//2009��6��19��
//��⡢��Ϥ�ݹ飬��Ϊ��̫��Ҫ�ˣ��������ڱ�����ʱ
//�ݹ鲻ֻ��ֻ���ݹ飬�����Զ������㶫��

//���ݹ�ķǳ��õĺ���
void printnum ( int begin )
{
	if ( begin > 9 ){
		return;
	}else{
		cout<< begin;
	}
//�������Ķ���
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