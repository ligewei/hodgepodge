//2009��4��5��
//poj.pku.edu.cn_2680
//string�����==

#include<string>
#include<iostream>
using namespace std;

int main()
{
	double k;
	cin >> k;
	while(k--)
	{
		double unnomal = 0;
		//�ж��Ա�
		double flag = -1;
		string sex;
		cin >> sex;
		if(sex=="female")
			flag = 0;
		else if(sex=="male")
			flag = 1;
		else
			return 0;

		//WBC
		double wbc;
		cin >> wbc;
		if(wbc<4.0 || wbc>10.0)
			unnomal++;

		//RBC
		double rbc;
		cin >> rbc;
		if(rbc<3.5 || rbc>5.5)
			unnomal++;
		//hgb
		double hgb;
		cin >> hgb;
		if((flag==1 && (hgb<120||hgb>160)) || (flag==0 && (hgb<110||hgb>150)))//ƥ������
			unnomal++;
		//hct
		double hct;
		cin >> hct;
		if((flag==1 && (hct<42 || hct>48)) || (flag==0 && (hct<36 || hct>40)))
			unnomal++;
		//plt
		double plt;
		cin >> plt;
		if(plt<100 || plt>300)
			unnomal++;
		if(unnomal==0)
			cout << "normal" << endl;//normal��Ȼ��Щ��һ��r����
		else
			cout << unnomal << endl;
	}
	return 0;
}