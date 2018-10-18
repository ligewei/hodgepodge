#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	//printf("%d",strcmp("aaa","bbb"));
	char a[5][11];//char * a[5];不对？
	int i,j;
	for(i=0;i<5;i++)
		scanf("%s",a[i]);

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			//千万记住：if是根据是不是非0来判断的！！
			//不是根据正负！！
			if(strcmp(a[i],a[j])>0)
			{
				//printf("!!!!");
				//tmp必须初始化为指向c风格字符串的指针
				//并且不能是a中的元素，如a[0]，会影响后面
				//char * tmp = a[0];wrong
				//char * tmp={'a','\0'};wrong
				//char tmp[]={'a','\0'};wrong越界
				char tmp[11]={'a','\0'};
				strcpy(tmp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],tmp);
			}
		}
	}
	for(i=0;i<5;i++)
		printf("%s\n",a[i]);
	return 0;
}