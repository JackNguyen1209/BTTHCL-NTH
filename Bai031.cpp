// Bai031.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main() 
{
	float a,b,c;
	cout<<"Nhap a:"<<endl;
	cin>>a;
	cout<<"Nhap b:"<<endl;
	cin>>b;
	cout<<"Nhap c:"<<endl;
	cin>>c;
	float D=b*b-4*a*c;
	if(a==0)
	{
		float x;
		x=float(-c/b);
		if(x>0)
			cout<<"Nghiem : "<<sqrt(x)<<","<<-sqrt(x);
	}
	else
		if(D>0)
		{
			float x1,x2;
			x1=float((-b-sqrt(D))/(2*a));
			x2=float((-b+sqrt(D))/(2*a));
			if(x1>0)
				cout<<"Nghiem : "<<sqrt(x1)<<","<<-sqrt(x1);
			if(x2>0)
				cout<<"Nghiem : "<<sqrt(x2)<<","<<-sqrt(x2);
		}
		if(D<0)
		{
			cout<<"Vo Nghiem"<<endl;
		}
		if(D==0)
		{
			float x3;
			x3= float(-b/2*a);
			if(x3>0)
				cout<<"Nghiem kep: "<<sqrt(x3)<<","<<-sqrt(x3);
		}
}


