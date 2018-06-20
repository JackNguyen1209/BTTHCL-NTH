// Bai092.cpp : Defines the entry point for the console application.
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
//Cau a
void Caua(float [],int,float[],int &);
//Cau b
void Caub(float [],int ,float[],int &);
//Cau c
float Tong(float[],int);
void Cauc(float [],int ,float[],int &);
//Cau d
float Tich(float[],int);
void Caud(float [],int ,float[],int &);
//Cau e
int GiaiThua(int);
void Caue(float [],int ,float[],int &);

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
	//Cau a
	float l[100];
	int h;
	cout<<"\nCau a-Mang:"<<endl;
	Caua(b,k,l,h);
	Xuat(l,k);

	//Cau b
	float s[100];
	int m;
	cout<<"\nCau b-Mang:"<<endl;
	Caub(b,k,s,m);
	Xuat(s,k);
	//Cau c
	float n[100];
	int t;
	cout<<"\nCau c-Mang:"<<endl;
	Cauc(b,k,n,t);
	Xuat(n,k);
	//Cau d
	float u[100];
	int v;
	cout<<"\nCau d-Mang:"<<endl;
	Caud(b,k,u,v);
	Xuat(u,k);
	//Cau e
	float p[100];
	int o;
	cout<<"\nCau e-Mang:"<<endl;
	Caue(b,k,p,o);
	Xuat(p,k);

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

void Caua(float a[100],int n,float b[100],int &k)
{
	k=1;
	b[k]=a[1];
	k++;
	for(int j=2;j<=n;j++)
		b[k++]=a[1]+a[j];
	
}

void Caub(float a[100],int n,float b[100],int &k )
{
	k=1;
	for(int j=1;j<=n;j++)
	{
		b[k++]=a[1]*a[j];
	}
}

float Tong(float a[100],int n)
{
	if(n==0)
		return 0;
	return Tong(a,n-1)+a[n];
}

void Cauc(float a[100],int n,float b[100],int &k)
{
	k=1;
	for(int j=1;j<=n;j++)
		b[k++]=abs(Tong(a,j));

}

float Tich(float a[100],int n)
{
	if(n==0)
		return 1;
	return Tich(a,n-1)*a[n];
}

void Caud(float a[100],int n,float b[100],int &k)
{
	k=1;
	for(int j=1;j<=n;j++)
	{
		if(j%2==0)
			b[k++]=-Tich(a,j);
		else
			b[k++]=Tich(a,j);
	}
}

int GiaiThua(int n)
{
	if(n==1)
		return 1;
	return GiaiThua(n-1)*n;
}

void Caue(float a[100],int n,float b[100],int &k)
{
	k=1;
	for(int j=1;j<=n;j++)
	{
		b[k++]=(float)a[j]+GiaiThua(j);
	}
}
