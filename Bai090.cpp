// Bai090.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//a+b
double Tinh(int );
double Tinh1(int );
//c
double Tinh3(int);
double Tinh4(int);
void main()
{
	int n=10000;
	cout<<"Cau a: \n"<<Tinh(n)<<endl<<Tinh1(n);
	cout<<"\nCau b:\n"<<Tinh3(n-1)<<endl<<Tinh4(n);
}

double Tinh(int n)
{
	double s=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
			s=s+(float)1/i;
		else
			s=s-(float)1/i;
	}
	return s;
}


double Tinh1(int n)
{
	double s=0;
	for(int i=n;i>=1;i--)
	{
		if(i%2==0)
			s=s+(float)1/i;
		else
			s=s-(float)1/i;
	}
	return s;
}

double Tinh3(int n)
{
	double s=0;
	for(int i=1;i<=n;i=i+2)
		s+=(float)1/i;
	return s;
}

double Tinh4(int n)
{
	double s=0;
	for(int i=2;i<=n;i=i+2)
		s+=(float)1/i;
	return s;
}