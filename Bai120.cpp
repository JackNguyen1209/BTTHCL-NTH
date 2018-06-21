// Bai120.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Xuat(int [],int );
void Xuat1(int [],int);
void Xuat2(int [],int);
void Xuat3(int [],int);
void Nhap(int [],int &);
int _tmain(int argc, _TCHAR* argv[])
{
	int a[100];
	int k;


	/* initialize random seed: */
	srand (time(NULL));

	Nhap(a,k);
	cout<<"\nBan Dau:";
	Xuat(a,k);

	cout<<"\na:";
	Xuat1(a,k);

	cout<<"\nb:";
	Xuat2(a,k);

	cout<<"\nc:";
	Xuat3(a,k);

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

void Xuat1(int a[100],int n)
{
	if(n==6)
		return;
	Xuat1(a,n-1);
	cout<<setw(8)<<setprecision(3)<<a[n];
}
void Xuat2(int a[100],int n)
{
	 for(int i=6;i<=n;i++)
		 cout<<setw(8)<<setprecision(3)<<a[i];
	 cout<<setw(8)<<a[1];
}

void Xuat3(int a[100],int n)
{
	for(int i=6;i<=n;i++)
		 cout<<setw(8)<<setprecision(3)<<a[i];
	 cout<<setw(8)<<a[5];
}
