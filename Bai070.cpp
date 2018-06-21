// Bai070.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

//Cach-DeQuy
float Tinhx(int);
float Tinhy(int);
float Tong(int);

void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"\nKet qua la:"<<Tong(n)<<endl;
}

float Tinhx(int n)
{
	if(n==1)
		return 1;
	return Tinhx(n-1)*0.3;
}

float Tinhy(int n)
{
	if(n==1)
		return 1;
	return Tinhx(n-1)-Tinhy(n-1);
}

float Tong(int n)
{
	if(n==1)
		return (float)1/2;
	return Tong(n-1)+(float)Tinhx(n)/(1+abs(Tinhy(n)));
}