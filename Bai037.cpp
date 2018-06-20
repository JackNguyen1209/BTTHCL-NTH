// Bai037.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
float a(float);
float b(float);
float c(float);
void main() 
{
	float x;
	cout<<"Nhap x:"<<endl;
	cin>>x;

	cout<<"\na:"<<a(x);
	cout<<"\nb:"<<b(x);
	cout<<"\nc:"<<c(x);
	cout<<endl;

}

float a(float x)
{
	float a;
	if(x>=2)
		a=4;
	else
		if(-2<=x && x<2)
			a=x*x;
		else
			return x;
	return a;

}

float b(float x)
{
	float a;
	if(x<=2)
		a=x*x+4*x+5;
	else
		if(x>2)
			a=1/(x*x+4*x+5);
	return a;

}

float c(float x)
{
	float a;
	if(x<=0)
		a=0;
	else
		if(0<x && x<=1)
			a=x;
		else
			a=x*x*x*x;
	return a;

}