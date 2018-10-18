#include<iostream>
#include<iomanip>//setw
//2009Äê6ÔÂ18ÈÕ
using namespace std;
int main(){
    int n,m;
    int a[5][5];    
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];

    cin>>n>>m;
    if(n>4||n<0||m>4||m<0)
        cout<< "error" << endl;
    else
	{
        int temp;
        for(int j=0;j<5;j++)
		{
            temp=a[n][j];
            a[n][j]=a[m][j];
            a[m][j]=temp;
        }


        for(int i=0;i<5;i++)
		{
            for(int j=0;j<5;j++)
                cout<<setw(4)<<a[i][j];
            cout<<'\n';
        }
    }
}
