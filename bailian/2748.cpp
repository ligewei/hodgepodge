#include<iostream>
#include<cstring>
using namespace std;
//2009年6月23日
//递归的典型
void swap(char &x,char &y);
void sort(char list[],int n1,int n2);
void perm(char list[],int k,int m);
int main()
{
	char list[7];
	cin >> list;
	int n = strlen(list);
	sort(list,0,n-1);
	perm(list,0,n-1);
	return 0;
}

void perm(char list[],int k,int m)
{
	if(k==m)
	{
		for(int i=0;i<=m;i++)
			cout << list[i];
		cout << endl;
	}
	else
	{
		for(int i=k;i<=m;i++)
		{
			swap(list[k],list[i]);
			sort(list,k+1,m);
			perm(list,k+1,m);
			swap(list[k],list[i]);
			
		}
	}
}

void swap(char &x,char &y)
{
	char tmp = x;
	x = y;
	y = tmp;
}
void sort(char list[],int n1,int n2)
{
	for(int i=n1;i<n2;i++)
	{
		for(int j=i+1;j<n2;j++)
		{
			if(list[j]<list[i])
			{
				char tmp = list[j];
				list[j] = list[i];
				list[i] = tmp;
			}
		}
	}
}