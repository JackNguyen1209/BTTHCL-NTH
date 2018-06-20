// Bai112.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int [],int &);
void Xuat(int [],int );
void XayDung(int[],int [],int,int & );

int _tmain(int argc, _TCHAR* argv[])
{
	int b[100];
	int k;
	int t[100];
	int c;

	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	XayDung(b,t,k,c);
	cout<<"\nMang Luc Sau: \n";
	Xuat(t,c);
	cout<<"\nKet Thuc.\n";
	return 0;
}

void Nhap(int a[],int &n)
{
	cout<<"Nhap So Phan Tu: ";
	cin>>n;
	float min=-100;
	float max=100;
	for(int i=1;i<=n;i++)
	{
		a[i] =min + 
			(rand()  % static_cast<int>(max-min+1));
	
	}
}

void Xuat(int a[],int n )
{
	for(int i=1;i<=n;i++)
		cout<<setw(8)<<setprecision(3)<<a[i];
}

void XayDung(int a[100], int b[100], int n,int &k)
{
	k=1;
	for(int i=1;i<=n-2;i++)
		b[k++]=a[i+1]+a[i+2];
	k=k-1;
}