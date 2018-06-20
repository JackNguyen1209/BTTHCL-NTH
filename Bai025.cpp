// Bai025.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

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

	float min;
	if(a>c && b>c )
	{
		min=c;
	}

	if(a>b && c>b)
	{
		min=b;
	}

	if(b>a && c>a)
	{
		min=a;
	}
	if(a!=b && b!=c && a!=c)
	{

		if(a+b+c<1)
			min=(a+b+c)/3;
		else
		{
			if(a>b)
				b=(a+c)/2;
			else
				a=(b+c)/2;
		}
		cout<<"(a,b,c)=("<<a<<","<<b<<","<<c<<")";
	}
	else
		cout<<"\nNhap Sai";
	cout<<endl;
}