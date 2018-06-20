// Bai077.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

double caua(float,int);
double caub(float,int);

void main()
{
	float x;
	cout<<"Nhap x: ";
	cin>>x;
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	cout<<"\nCau a:"<<caua(x,n);
	cout<<endl;
	cout<<"\nCau b:"<<caub(x,n);

}

double caua(float x,int n)
{
	double tren=n;
	double tu=1;
	double mau=1;
	if(n==0)
	{
		return 1;
	}
	else
	{
		tren*=tren;
		for(int i=2;i<=tren;i++)
			tu=tu*x;
		for(int i=2;i<=n;i++)
			mau=2*mau;
		return double(tu/mau);
	}
}


double caub(float x,int n)
{
	double tren=n;
	double tu=1;
	double mau=1;
	if(n==0)
	{
		return 1;
	}
	else
	{
		tren*=tren;
		for(int i=2;i<=tren;i++)
			tu=tu*x;
		for(int i=2;i<=n;i++)
			mau=3*mau;
		return double(tu/mau);
	}
}
