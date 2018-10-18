#include <iostream> 
#include <vector> 
#include <ctime> 
#include <cmath> 
//���˵Ĵ��룬����һ��
//��ȷ�����и��ʵ�
using namespace std; 
const int TIMES=3;       //���Դ��� 
inline int mypow(int a,int x) 
{ 
    if (x==0) return 1; 
    int t=a; 
    for (int i=2;i<=x;i++) 
        t*=a; 
    return t; 


}    //��������pow 


inline int reverse(int n) 
{ 
    int t=0; 
    while (n>0) 
    { 
        t=t*10+n%10; 
        n/=10; 
    } 
    return t; 


} 


int mpow( int s, int t, int m ) 
{ 
    long long f; 
    if ( t == 0 ) 
        return 1; 
    f = mpow( s, t >> 1, m ); 
    if ( t & 1 ) 
       return ((s * f)%m * f)%m; 
    else 
    return f * f%m; 


}   //����s^(p-1)%p 


int Miller_Ribin( int s )   //��λ���ַ����˸�������ⷨ����Ȼ�����Щ��ͬ�� 
{ 
    int i,p; 
    for ( i = 0; i < TIMES; i++ ) 
    { 
        p = rand()% ( s-2) + 2;  //����2��p-1֮��������� 
        if ( mpow( p, s - 1, s ) != 1 ) 
            break; 
    } 
    return i == TIMES; 

}   //���ÿ��������ݶ�ͨ������Ϊ������ 


int main() 
{ 
    int n; 
    vector <int> num; 
    scanf("%d",&n); 
    if (n==1) 
        printf("4\n2 3 5 7\n"); 
    else 
    { 
        srand(time(0)); 
        int x=mypow(10,(n+1)/2); 
        int t; 
        for (int i=x/10;i<x;i++) 
        { 
            t=reverse(i); 
            if (t%2==0 || t%5==0) continue; 
            if (n&1) 
                t+=i/10*x; 
            else 
                t+=i*x; 
            if (Miller_Ribin(t)) 
             num.push_back(t); 
        } 
        int counter=num.size(); 
        cout<<counter<<endl; 
        for (int i=0;i<counter;i++) 
            printf("%d ",num.at(i));  //����at���ܿ�Щ�� 
    } 
    return 0; 