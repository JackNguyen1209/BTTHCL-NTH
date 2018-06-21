// Bai071.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

//Cach-DeQuy
float Tinha(int);
float Tinhb(int);
float Tong(int);
int giaithua(int);


void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"\nKet qua la:"<<Tong(n)<<endl;
}

float Tinha(int n)
{
	if(n==1)
		return 1;
	return 3*Tinhb(n-1)+2*Tinha(n-1);
}

float Tinhb(int n)
{
	if(n==1)
		return 1;
	return 2*Tinha(n-1)+Tinhb(n-1);
}

float Tong(int n)
{
	if(n==1)
		return (float)1/3;
	return Tong(n-1)+(float)pow(2.0,n)/((1+Tinha(n)*Tinha(n)+Tinhb(n)*Tinhb(n))*giaithua(n));
}

int giaithua(int n)
{
	if(n==1)
		return 1;
	return giaithua(n-1)*n;
}
