// Bai076.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

float giatri(float);
float Min(float,float);
void main()
{
	float a;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"\nKet Qua:"<<giatri(a);

}
float giatri(float a)
{
	float x[100];
	if(a<=1)
		x[0]=Min(2*a,0.95);
	else
	{
		if(1<a && a<25)
			x[0]=(float)a/5;
		else
			x[0]=(float)a/25;
	}
	for(int i=1;;i++)
	{
		x[i]=(float)4*(x[i-1])/5+(float)a/(4*(pow(x[i-1],4)-1));
		if(((float)5*a*abs(x[i]-x[i-1])/4)<pow(10.0,-6))
			return 	a-x[i-1];
	}
}

float Min(float a,float b)
{
	if(a<b)
		return a;
	else
		return b;
}



