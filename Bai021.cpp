// Bai021.cpp : Defines the entry point for the console application.
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
	cout<<"Nhap a:";
	cin>>a;
	cout<<"\nNhap b:";
	cin>>b;
	if(a>=b)
	{
		a=0;
	}
	cout<<"\na: "<<a;
	cout<<endl;
}
