#include<stdio.h>
#include<string>
using namespace std;
//抄一遍
//重写一遍
//自己绞尽脑汁做一遍
//三个境界，三种收获
int main()
{
	//这种在开始处定义一大堆变量的方式非常不好
	int i,k,base[31],sum;
	char skew[32];
	base[0] = 1;
	for(i=1;i<31;i++)
		base[i] = 2 * base[i-1] + 1;//推导公式
	while(1)
	{
		scanf("%s",skew);
		if(strcmp(skew,"0")==0)
			break;
		sum = 0;
		k = strlen(skew);
		for(i = 0;i<(int)strlen(skew);i++)
		{
			k--;
			sum += (skew[i] - '0') * base[k];
		}
		printf("%d\n",sum);

	}
	return 0;
}