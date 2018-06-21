// Bai073.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

//Cach-DeQuy
float Tinhx(int);
float Tong(int);

void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	

	cout<<"\nKet qua: "<<Tong(n);
}

float Tinhx(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 1;
	if(n==3)
		return 1;
	return Tinhx(n-1)+Tinhx(n-3);
}

float Tong(int n)
{
	if(n==1)
		return (float)1/2;
	return Tong(n-1)+Tinhx(n)/pow(2.0,n);
}
