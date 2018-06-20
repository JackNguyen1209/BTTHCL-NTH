// Bai068.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Cach1
void BoTri(float[100],int);
double giaithua(float [100],int);
//Cach2-DeQuy
double giaithua1(float[100],int);
void main()
{
	int n=15;
	float b[100];
	BoTri(b,n);
	double kq= giaithua(b,n);
	cout<<"Ket Qua: "<<kq;
	cout<<endl;
	//Cach2-DeQuy
	float c[100];
	int k=15;
	BoTri(c,k);
	cout<<"Ket Qua: "<<giaithua1(c,k);
}

void BoTri(float a[100],int n)
{
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n-1;i++)
		a[i]=a[i-1]+(float)a[i-1]/pow(2.0,i-1);
}

double giaithua(float a[100],int n)
{
	double t=1.0;
	for(int i=1;i<=n-1;i++)
		t*=a[i];
	return t;
}

double giaithua1(float a[100],int n)
{
	if(n==2)
		return a[n-1];
	return a[n-1]*giaithua(a,n-1);
	
}

