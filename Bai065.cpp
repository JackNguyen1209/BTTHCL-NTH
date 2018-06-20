// Bai065.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Cach 1
float un(float[100],int );
//Cach 2
float dequy(float[100],int);

void main()
{
	float b[100];
	int n;
	cout<<"Nhap n: ";
	cin>>n;

	float kq=un(b,n);
	cout<<"\nKet Qua La:"<<kq<<endl<<"Dung De Quy(Cach 2): "<<dequy(b,n)<<endl;
}


float un(float a[100],int n)
{
	a[1]=0;
	a[2]=0;
	a[3]=1.5;
	for(int i=4;i<=n;i++)
		a[i]= (float)(i+1)*a[i-1]/(i*i+1)-a[i-2]*a[i-3];
	return a[n];
}

float dequy(float a[100],int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 0;
	if(n==3)
		return 1.5;
	return (float)(n+1)*dequy(a,n-1)/(n*n+1)-dequy(a,n-2)*dequy(a,n-3);
}