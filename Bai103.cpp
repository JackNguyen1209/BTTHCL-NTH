// Bai103.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

float HS(float);


void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;

	for(float i=1;i<=(float)1+0.1*n;i=i+0.100)
	{
		cout<<"f("<<setprecision(3)<<i<<") = "<<HS(i);
		cout<<endl;
		
	}
}

float HS(float x)
{
	return (float)(x*x-3*x+2)/((float)sqrt(2*x*x*x-1));
}
