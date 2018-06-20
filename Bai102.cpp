// Bai102.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

float HS(float);


void main()
{
	
	for(float i=-3;i<=1;i=i+0.100)
	{
		cout<<"f("<<setprecision(3)<<i<<") = "<<HS(i);
		cout<<endl;
		
	}
}

float HS(float x)
{
	return (float)4*x*x*x -2*x*x +5;
}