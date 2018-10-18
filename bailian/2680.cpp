//2009年4月5日
//poj.pku.edu.cn_2680
//string对象的==

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
		//判断性别
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
		if((flag==1 && (hgb<120||hgb>160)) || (flag==0 && (hgb<110||hgb>150)))//匹配问题
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
			cout << "normal" << endl;//normal竟然少些了一个r！！
		else
			cout << unnomal << endl;
	}
	return 0;
}