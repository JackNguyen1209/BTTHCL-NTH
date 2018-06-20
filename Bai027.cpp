// Bai027.cpp : Defines the entry point for the console application.
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

	cout<<"Nhap x:";
	cin>>x;
	cout<<"\nNhap y:";
	cin>>y;
	
	if(x<0 && y<0)
	{
		x=abs(x);
		y=abs(y);
	}
	else
	{
		if(x<0 || y<0 )
		{
			x=0.5*x;
			y=0.5*y;
		}
		else
		{
			if(x>0 && y>0 && ((x>2 || x<1) && (y>2 || y<1)))
			{
				x=10*x;
				y=10*y;
			}
			else
			{
				x=x;
				y=y;
			}
		}
	}
	cout<<"\n(x,y)=("<<x<<","<<y<<")";
	cout<<endl;
}

