// Bai055.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main()
{
	float x;
	cout<<"Nhap x:";
	cin>>x;
	double tu=1.0;
	double mau=1.0;
	for(int i=2;i<=62;i=i+6)
	{
		if(x==i-1 || x==i+1 )
		{
			cout<<"\nX khong thoa";
			cout<<endl;
			return;
		}
		else
			tu=tu*(double)(x-i)*(x-(i+2));
			mau=mau*(double)(x-(i-1))*(x-(i+1));
	}
	double kq=tu/mau;
	cout<<"\nKet Qua: "<<kq;

}
