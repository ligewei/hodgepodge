#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char str[80];
char telNum[100000][9];//存储所有电话号码
char map[] = "22233344455566677778889999";//注意个数
int compare(const void * elem1,const void * elem2)
{
	return (strcmp((char*)elem1,(char*)elem2));
}
//char 也是int
// 标准化电话号码为数字
//n为第n个电话号码
void standardizeTel(int n)
{
	int j,k;
	j = k = -1;
	while(k<8)
	{
		j++;
		if(str[j] == '-')
			continue;
		k++;
		if(k==3)
		{
			telNum[n][k] = '-';
			k++;
		}
		if(str[j]>='A' && str[j]<='Z')
		{
			telNum[n][k] = map[str[j]-'A'];
			continue;
		}
		telNum[n][k] = str[j];
	}
	telNum[n][k] = '\0';
	return;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;

	//输入电话号码，并将其存入telNUM
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		//标准化str并存入
		standardizeTel(i);
	}

	//对电话号码排序
	qsort(telNum,n,9,compare);

	bool noduplicate = true;
	i = 0;
	int j;
	//关键算法,由于已经排好序，所以直接检查相邻的就OK
	while(i<n)
	{
		j = i;
		i++;
		//检查是否有相同号码，如果没有，i-j == 1 !> 1
		while(i<n && strcmp(telNum[i],telNum[j])==0)
			i++;
		if(i-j>1)
		{
			printf("%s %d\n",telNum[j],i-j);
			noduplicate = false;
		}
	}
	if(noduplicate)
		printf("No duplicates.\n");
	return 0;
}