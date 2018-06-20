// Bai116.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float [],int &);
void Xuat(float [],int );
void XayDung(float [],int,float[],int &);

int _tmain(int argc, _TCHAR* argv[])
{
	float b[100];
	int k;

	float c[100];
	int t;

	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	XayDung(b,k,c,t);
	cout<<"\nMang Luc Sau: \n";
	cout<<setprecision(5)<<fixed;
	Xuat(c,t);

	cout<<"\nKet Thuc.\n";
	return 0;
}

void Nhap(float a[],int &n)
{
	cout<<"Nhap So Phan Tu: ";
	cin>>n;
	float min=-100;
	float max=100;
	for(int i=0;i<n;i++)
	{
		float tu=static_cast <float> (rand());
		float mau=static_cast <float> (RAND_MAX/(max-min));
		a[i] = min+tu/mau;
	}
}

void Xuat(float a[],int n )
{
	for(int i=0;i<n;i++)
		cout<<setw(8)<<setprecision(3)<<a[i];
}

void XayDung(float a[100],int n,float b[100],int &k)
{
	k=1;
	for(int i=2;i<=n-1;i++)
		b[k++]=(float)(a[i-1]+a[i]+a[i+1])/3;
	k--;
}