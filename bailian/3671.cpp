#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	//printf("%d",strcmp("aaa","bbb"));
	char a[5][11];//char * a[5];���ԣ�
	int i,j;
	for(i=0;i<5;i++)
		scanf("%s",a[i]);

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			//ǧ���ס��if�Ǹ����ǲ��Ƿ�0���жϵģ���
			//���Ǹ�����������
			if(strcmp(a[i],a[j])>0)
			{
				//printf("!!!!");
				//tmp�����ʼ��Ϊָ��c����ַ�����ָ��
				//���Ҳ�����a�е�Ԫ�أ���a[0]����Ӱ�����
				//char * tmp = a[0];wrong
				//char * tmp={'a','\0'};wrong
				//char tmp[]={'a','\0'};wrongԽ��
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