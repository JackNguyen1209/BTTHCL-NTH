// Bai110.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

float Tinhx(int,float,float,float );
float Tinhy(int,float,float,float );
void XayDung(float [],int,float,float,float);

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	float a,b;
	cout<<"\nNhap a: ";
	cin>>a;
	cout<<"\nNhap b: ";
	cin>>b;
	float h=(float)(b-a)/n;
	float k[100];
	XayDung(k,n,a,b,h);
	for(int i=1;i<=n;i++)
		cout<<setw(8)<<setprecision(3)<<fixed<<k[i];
	cout<<endl;
	
	return 0;
}

float Tinhx(int n,float a,float b,float h)
{
	float x;
	for(int i=1;i<=n;i++)
		x=a+(float)i*h;
	return x;
}
float Tinhy(int n,float a,float b,float h)
{
	return sqrt(Tinhx(n,a,b,h)) ;
}

void XayDung(float s[100],int n,float a,float b,float h)
{
	int k=1;
	for(int i=1;i<=n;i++)
		s[k++]=Tinhy(i,a,b,h);
}