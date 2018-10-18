#include <iostream> 
#include <vector> 
#include <ctime> 
#include <cmath> 
//别人的代码，测试一下
//正确性是有概率的
using namespace std; 
const int TIMES=3;       //测试次数 
inline int mypow(int a,int x) 
{ 
    if (x==0) return 1; 
    int t=a; 
    for (int i=2;i<=x;i++) 
        t*=a; 
    return t; 


}    //不高兴用pow 


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


}   //计算s^(p-1)%p 


int Miller_Ribin( int s )   //这位仁兄发明了该素数检测法，当然与此有些不同。 
{ 
    int i,p; 
    for ( i = 0; i < TIMES; i++ ) 
    { 
        p = rand()% ( s-2) + 2;  //产生2－p-1之间随机数。 
        if ( mpow( p, s - 1, s ) != 1 ) 
            break; 
    } 
    return i == TIMES; 

}   //如果每组测试数据都通过，则为素数。 


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
            printf("%d ",num.at(i));  //不用at还能快些。 
    } 
    return 0; 