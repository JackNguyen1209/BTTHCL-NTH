// Bai022.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int kt(float);
void main()
{
	float a;
	float b;
	float c;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"\nNhap b:";
	cin>>b;
	cout<<"\nNhap c:";
	cin>>c;
	if(kt(a)==1 || kt(b)==1 || kt(c)==1)
	{
		if(kt(a)==1)
			cout<<"\nThuoc(3,5): "<<a;
		if(kt(b)==1)
			cout<<"\nThuoc(3,5): "<<b;
		if(kt(c)==1)
			cout<<"\nThuoc(3,5): "<<c;
	}
	else
		cout<<"\nKhong co gia tri nao thoa";

	cout<<endl;
}

int kt(float a)
{
	if(a>3 && a<5)
		return 1;
	return 0;
}