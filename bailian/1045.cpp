#include <stdio.h>
#include <math.h>
//不会模电啊！
int main() 
{ 
   double vs,r,c,w; 
   int n; 
   scanf("%lf %lf %lf %d\n",&vs,&r,&c,&n); 
   while(n--)
   { 
         scanf("%lf",&w); 
         w=vs*r/sqrt(r*r+1.0/(w*w*c*c)); 
         printf("%#.3lf\n",w); 
   } 
   return 0;
}