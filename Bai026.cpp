// Bai026.cpp : Defines the entry point for the console application.
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
	float d;

	cout<<"Nhap a:";
	cin>>a;
	cout<<"\nNhap b:";
	cin>>b;
	cout<<"\nNhap c:";
	cin>>c;
	cout<<"\nNhap d:";
	cin>>d;

	if(a<=b && b<=c && c<=d)
	{
		a=d;
		b=d;
		c=d;
	}
	else
	{
		if(a>b && b>c && c>d )
		{
			a=a;
			b=b;
			c=c;
			d=d;
		}
		else
		{
			a=a*a;
			b=b*b;
			c=c*c;
			d=d*d;
		}
	}
	cout<<"\n(a,b,c,d)=("<<a<<","<<b<<","<<c<<","<<d<<")";
	cout<<endl;
}
