// Bai067.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

float  vn(int);
void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"\nKet Qua: "<<vn(n);
}

float  vn(int n)
{
	float u[100];
	float v[100];
	u[1]=0;
	u[2]=0;
	v[1]=1;
	v[2]=1;
	for(int i=3;i<=n;i++)
	{
		u[i]=(float)(u[i-1]-u[i-2]*v[i-1]-v[i-2])/(1+u[i-1]*u[i-1]+v[i-1]*v[i-1]);
		v[i]=(u[i-1]-v[i-1])/(abs(u[i-2]-v[i-1])+2);
	}
	return v[n];
}
