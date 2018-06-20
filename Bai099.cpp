// Bai099.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Xuat(float [],int);
//Cau a
float Caua(int);
void Nhapa(float [],int);
//Cau b
float Caub(int);
void Nhapb(float [],int);
//Cau c
float Cauc(int);
void Nhapc(float [],int);

void main()
{
	int n=20;
	cout<<"N=20: ";
	
	//Cau a
	cout<<"\nCau a";
	float a[100];
	Nhapa(a,n);
	Xuat(a,n);
	
	//Cau b
	cout<<"\nCau b";
	float b[100];
	Nhapb(b,n);
	Xuat(b,n);

	//Cau c
	cout<<"\nCau c";
	float c[100];
	Nhapc(c,n);
	Xuat(c,n);


}

float Caua(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return (float)5/8;
	return (float)Caua(n-1)/2 + (float)3*Caua(n-2)/4;
}

void Nhapa(float a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=Caua(i);
}

void Xuat(float a[100],int n)
{
	cout<<"\nMang La: ";
	for(int i=1;i<=n;i++)
		cout<<endl<<setprecision(3)<<fixed<<a[i];
	cout<<endl;
}

float Caub(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return (float)3/10;
	return (float)(n+1)*Caub(n-2);
}

void Nhapb(float a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=Caub(i);
}

float Cauc(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 1;
	if(n==3)
		return 1;
	return (float)(n+3)*(Cauc(n-1)-1)+(float)(n+4)*Cauc(n-3);
}

void Nhapc(float a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=Cauc(i);
}