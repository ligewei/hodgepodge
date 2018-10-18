#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char str[80];
char telNum[100000][9];//�洢���е绰����
char map[] = "22233344455566677778889999";//ע�����
int compare(const void * elem1,const void * elem2)
{
	return (strcmp((char*)elem1,(char*)elem2));
}
//char Ҳ��int
// ��׼���绰����Ϊ����
//nΪ��n���绰����
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

	//����绰���룬���������telNUM
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		//��׼��str������
		standardizeTel(i);
	}

	//�Ե绰��������
	qsort(telNum,n,9,compare);

	bool noduplicate = true;
	i = 0;
	int j;
	//�ؼ��㷨,�����Ѿ��ź�������ֱ�Ӽ�����ڵľ�OK
	while(i<n)
	{
		j = i;
		i++;
		//����Ƿ�����ͬ���룬���û�У�i-j == 1 !> 1
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