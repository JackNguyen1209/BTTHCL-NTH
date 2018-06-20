// Bai017.cpp : Defines the entry point for the console application.
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
	cout<<"\nNhap Z:";
	cin>>z;

	//Cau a:
	float max,min;
	if(x>y && x>z)
	{
		max=x;
	}

	if(y>x && y>z)
	{
		max=y;
	}

	if(z>x && z>y)
	{
		max=z;
	}


	if(x>z && y>z )
	{
		min=z;
	}

	if(x>y && z>y)
	{
		min=y;
	}

	if(y>x && z>x)
	{
		min=x;
	}
	//Cau b::
	float MAX;
	float s=x+y+z;
	float t=x*y*z;
	if(s>t)
		MAX=s;
	else
		MAX=t;

	//Cau c::
	float MIN;
	float kq;
	float S=(x+y+z)/2;
	if(S>t)
		MIN=t;
	else
		MIN=s;
	kq=MIN*MIN+1;

	//KetThuc
	cout<<"Max(x,y,z):"<<max;
	cout<<endl;
	cout<<"Min(x,y,z):"<<min;
	cout<<endl;
	cout<<"Max(x+y+z,xyz)"<<MAX;
	cout<<endl;
	cout<<"Min^2(x+y+z/2,xyz)+1"<<kq;
	cout<<endl;
}
