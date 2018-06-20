// Bai100.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Xuat(float [],int);
void Nhap(float [],int,float,float);

void main()
{
	float t[100];
	int n;
	float a;
	float b;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;

	Nhap(t,n,a,b);
	Xuat(t,n);

}

void Nhap(float s[100],int n,float a,float b)
{
	int k=1;
	for(int i=1;i<=n;i++)
		s[k++]=a+(float)i*(b-a)/n;
}

void Xuat(float a[100],int n)
{
	cout<<"\nMang La: ";
	for(int i=1;i<=n;i++)
		cout<<endl<<setprecision(3)<<fixed<<a[i];
	cout<<endl;
}

