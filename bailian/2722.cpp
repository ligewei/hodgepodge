//2009Äê4ÔÂ8ÈÕ
//
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	double arr1[10];
	double arr2[10];

	double sumXueFen = 0;
	for(int i=0; i<n; i++)
	{
		cin >> arr1[i];
		sumXueFen += arr1[i];
	}

	double sumJiDian = 0;
	for(int i=0; i<n; i++)
	{
		cin >> arr2[i];
		if(arr2[i]<60)
			arr2[i] = 0;
		else if(arr2[i]>=60&&arr2[i]<=63)
			arr2[i] = 1.0;
		else if(arr2[i]>=64&&arr2[i]<=67)
			arr2[i] = 1.5;
		else if(arr2[i]>=68&&arr2[i]<=71)
			arr2[i] = 2.0;
		else if(arr2[i]>=72&&arr2[i]<=74)
			arr2[i] = 2.3;
		else if(arr2[i]>=75&&arr2[i]<=77)
			arr2[i] = 2.5;
		else if(arr2[i]>=78&&arr2[i]<=81)
			arr2[i] = 3.0;
		else if(arr2[i]>=82&&arr2[i]<=84)
			arr2[i] = 3.3;
		else if(arr2[i]>=85&&arr2[i]<=89)
			arr2[i] = 3.7;
		else 
			arr2[i] = 4.0;
	
		sumJiDian += arr2[i];

	}
	double JiDian = 0;
	for(int i=0; i<n; i++)
	{
		JiDian += arr1[i]*arr2[i];
	}

	double GPA = JiDian/sumXueFen;
	printf("%.2f",GPA);;
	return 0;

}