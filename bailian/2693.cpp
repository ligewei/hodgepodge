//2009年4月7日
//
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);

	double x[1000];
	double y[1000];

	for(int i=0;i<n;i++)
		//scanf("%lf%lf",&x[i],&y[i]);
		cin >> x[i] >> y[i];

	double longestdis = 0;
	double dis = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			dis = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);//节省时间
			if((dis-longestdis)>1e-6)
				longestdis = dis;
		}
	}
	printf("%.4f\n",sqrt(longestdis));
	return 0;
}