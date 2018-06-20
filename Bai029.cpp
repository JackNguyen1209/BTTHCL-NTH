// Bai029.cpp : Defines the entry point for the console application.
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
		cout<<"Nghiem : "<<x;
	}
	else
		if(D>0)
		{
			float x1,x2;
			x1=float((-b-sqrt(D))/(2*a));
			x2=float((-b+sqrt(D))/(2*a));
			cout<<"Nghiem  1: "<<x1<<endl;
			cout<<"Nghiem 2: "<<x2<<endl;
		}
		if(D<0)
		{
			cout<<"Vo Nghiem"<<endl;
		}
		if(D==0)
		{
			float x3;
			x3= float(-b/2*a);
			cout<<"Nghiem kep: "<<x3<<endl;
		}
}

