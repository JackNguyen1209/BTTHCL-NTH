// Bai072.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

//Cach-DeQuy
float Tinha(int,float);
float Tinhb(int,float);
float Tong(int,float,float);
int giaithua(int);


void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	float u;
	cout<<"Nhap u: ";
	cin>>u;

	float v;
	cout<<"Nhap v: ";
	cin>>v;

	cout<<"\nKet qua: "<<Tong(n,u,v);
}

float Tinha(int n,float u)
{
	if(n==1)
		return u;
	return 2*Tinhb(n-1,u)+Tinha(n-1,u);
}

float Tinhb(int n,float v)
{
	if(n==1)
		return v;
	return 2*Tinha(n-1,v)*Tinha(n-1,v)+Tinhb(n-1,v);
}

float Tong(int n,float u,float v)
{
	if(n==1)
		return (float)u*v/2;
	return Tong(n-1,u,v)+(float)Tinha(n,u)*Tinhb(n,v)/giaithua(n+1);
}

int giaithua(int n)
{
	if(n==1)
		return 1;
	return giaithua(n-1)*n;
}
