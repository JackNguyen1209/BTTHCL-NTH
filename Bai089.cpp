// Bai089.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Cau a
float Caua(int);
//Cau b
float Caub(int);
void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"\nKet Qua Cau a: "<<Caua(n)<<endl;
	cout<<"\nKet Qua Cau b: "<<Caub(n)<<endl;
	
}

float Caua(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return (float)1/2;
	float kq=(float)(2*n-1)/(2*n);
	return Caua(n-1)*kq;
}

float Caub(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	float kq=(float)(2*n-1)/n;
	return Caub(n-1)*kq;
}