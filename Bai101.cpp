// Bai101.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

float Caua(float);
float Caub(float);
float Cauc(float);

void main()
{
	for(float i=0;i<=20;i=i+0.05)
	{
		float a=Caua(i);
		cout<<"p1("<<setprecision(4)<<i<<") = "<<a;
		cout<<endl;
		float b=Caub(i);
		cout<<"p2("<<setprecision(4)<<i<<") = "<<b;
		cout<<endl;
		float c=Cauc(i);
		cout<<"p3("<<setprecision(4)<<i<<") = "<<c;
		cout<<endl;
		
	}
}

float Caua(float x)
{
	return x;
}

float Caub(float x)
{
	return (float)3*x*x/2 - (float)1/2;
}

float Cauc(float x)
{
	return (float)5*x*x/3 - x;
}
