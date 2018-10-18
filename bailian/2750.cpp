//2009年4月7日
//鸡兔同笼                                                                                                                                       
#include<stdio.h>

int main()
{
	int nCases,i,nFeet;
	scanf("%d",&nCases);
	for(i=0;i<nCases;i++)
	{
		scanf("%d",&nFeet);
		if(nFeet%2 != 0)
			printf("0 0\n");
		else if(nFeet%4!=0)
			printf("%d %d\n",nFeet/4 + 1,nFeet/2);
		else
			printf("%d %d\n",nFeet/4,nFeet/2);
	}
	return 0;
}