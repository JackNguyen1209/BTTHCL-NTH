// Bai094.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Xuat(int [],int);
void Xuat(float [],int);
//Cau a
void Nhapa(int [],int);
//Cau b
void Nhapb(int [],int);
//Cau c
void Nhapc(int [],int);
int GiaiThua(int );
//Cau d
void Nhapd(int [],int);
//Cau e
void Nhape(int [],int);
//Cau f
void Nhapf(float [],int);
float Tong(int);
//Cau g
void Nhapg(float [],int);
float Tongg(int);
//Cau h
void Nhaph(float [],int);
float Tongh(int);
int _tmain(int argc, _TCHAR* argv[])
{
	int a[100];
	int n;

	cout<<"Nhap n: ";
	cin>>n;

	//Cau a
	cout<<"\nCau a:";
	Nhapa(a,n);
	Xuat(a,n);

	//Cau b
	int b[100];
	cout<<"\nCau b:";
	Nhapb(b,n);
	Xuat(b,n);

	//Cau c
	int c[100];
	cout<<"\nCau c:";
	Nhapc(c,n);
	Xuat(c,n);

	//Cau d
	int d[100];
	cout<<"\nCau d:";
	Nhapd(d,n);
	Xuat(d,n);

	//Cau e
	int e[100];
	cout<<"\nCau e:";
	Nhape(e,n);
	Xuat(e,n);

	//Cau f
	float f[100];
	cout<<"\nCau f:";
	Nhapf(f,n);
	Xuat(f,n);

	//Cau g
	float g[100];
	cout<<"\nCau g:";
	Nhapg(g,n);
	Xuat(g,n);

	//Cau h
	float h[100];
	cout<<"\nCau h:";
	Nhaph(h,n);
	Xuat(h,n);

	return 0;
}

void Xuat(int a[100],int n)
{
	cout<<"\nMang La: ";
	for(int i=1;i<=n;i++)
		cout<<setw(8)<<a[i];
	cout<<endl;
}

void Xuat(float a[100],int n)
{
	cout<<"\nMang La: ";
	for(int i=1;i<=n;i++)
		cout<<setw(8)<<setprecision(3)<<fixed<<a[i];
	cout<<endl;
}

void Nhapa(int a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=i;
}

void Nhapc(int a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=GiaiThua(i);
}

int GiaiThua(int n)
{
	if(n==1)
		return 1;
	return GiaiThua(n-1)*n;
}

void Nhapb(int a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=i*2;
}

void Nhapd(int a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=pow(2.0,i+1);
}

void Nhape(int a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=pow(2.0,i)+pow(3.0,i+1);
}

float Tong(int n)
{
	if(n==1)
		return 1;
	return Tong(n-1)+(float)1/n;
}

void Nhapf(float a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=Tong(i);
}

float Tongg(int n)
{
	if(n==1)
		return 1;
	if(n%2==0)
		return Tongg(n-1)-(float)1/n;
	else
		return Tongg(n-1)+(float)1/n;
}

void Nhapg(float a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=Tongg(i);
}

float Tongh(int n)
{
	if(n==1)
		return 1;
	return Tongh(n-1)+(float)1/GiaiThua(n);
}

void Nhaph(float a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=i*Tongh(i);
}