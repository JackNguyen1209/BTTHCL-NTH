// Bai091.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

void Nhap(float [],int &);
void Xuat(float [],int );
float Tong(float [],int);
float Tich(float [],int );
float Tongbinhphuong(float [],int);
float Tichabs(float[],int);
float TongChanLe(float[],int);
float TongChanLe1(float[],int);
float giaithua(int);
float Can(float[],int);

int _tmain(int argc, _TCHAR* argv[])
{
	float b[100];
	int k;

	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	cout<<setprecision(3)<<fixed;
	cout<<"\nCau a:"<<Tong(b,k);
	cout<<"\nCau b:"<<Tich(b,k);
	cout<<"\nCau c:"<<Tongbinhphuong(b,k);
	cout<<"\nCau d:"<<Tichabs(b,k);
	cout<<"\nCau e:"<<TongChanLe(b,k);
	cout<<"\nCau f:"<<TongChanLe1(b,k);
	cout<<"\nCau g:"<<Can(b,k);
	cout<<"\nKet Thuc.\n";
	return 0;
}

void Nhap(float a[],int &n)
{
	cout<<"Nhap So Phan Tu: ";
	cin>>n;
	float min=-100;
	float max=100;
	for(int i=1;i<=n;i++)
	{
		float tu=static_cast <float> (rand());
		float mau=static_cast <float> (RAND_MAX/(max-min));
		a[i] = min+tu/mau;
	}
}

void Xuat(float a[],int n )
{
	for(int i=1;i<=n;i++)
		cout<<setw(12)<<setprecision(3)<<fixed<<a[i];
}

float Tong(float a[100],int n)
{
	if(n==0)
		return 0;
	return Tong(a,n-1)+a[n];
}

float Tich(float a[100],int n)
{
	if(n==1)
		return a[n];
	return Tich(a,n-1)*a[n];
}

float Tongbinhphuong(float a[100],int n)
{
	if(n==1)
		return a[n]*a[n];
	return Tongbinhphuong(a,n-1)+a[n]*a[n];
}

float Tichabs(float a[100],int n)
{
	if(n==1)
		return abs(a[n]);
	return Tichabs(a,n-1)*abs(a[n]);
}

float TongChanLe(float a[100],int n)
{
	if(n==0)
		return 0;
	if(n%2==0)
		return TongChanLe(a,n-1)+a[n];
	else
		return TongChanLe(a,n-1)-a[n];
}

float TongChanLe1(float a[100],int n)
{
	if(n==0)
		return 0;
	if(n%2==0)
		return TongChanLe1(a,n-1)-(float)a[n]/giaithua(n);
	else
		return TongChanLe1(a,n-1)+(float)a[n]/giaithua(n);
}

float giaithua(int n)
{
	if(n==1)
		return 1;
	return giaithua(n-1)*n;
}

float Can(float a[],int n)
{
	if(n==0)
		return 0;
	return Can(a,n-1)+(sqrt(abs(a[n]))-a[n])*(sqrt(abs(a[n]))-a[n]);
}