// Bai024.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
void main()
{
	float x;
	float y;
	float z;
	cout<<"Nhap x:";
	cin>>x;
	cout<<"\nNhap y:";
	cin>>y;
	cout<<"\nNhap z:";
	cin>>z;
	if(x<0)
		x=x*x;
	if(y<0)
		y=y*y;
	if(z<0)
		z=z*z;
	cout<<"\n(x,y,z)=("<<x<<","<<y<<","<<z<<")";

	cout<<endl;
}

