// Bai020.cpp : Defines the entry point for the console application.
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
	if(x>y)
	{
		z=x-y;
	}
	else
	{
		z=y-x+1;
		
	}
	cout<<"\nZ: "<<z;
	cout<<endl;
}
