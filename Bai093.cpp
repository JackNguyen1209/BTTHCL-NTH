// Bai093.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float [],int &);
void Xuat(float [],int );
void DichTrai(float [],int );

int _tmain(int argc, _TCHAR* argv[])
{
	float b[100];
	int k;

	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	DichTrai(b,k);
	cout<<"\nMang Sau: \n";
	Xuat(b,k);

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
		cout<<setw(8)<<setprecision(3)<<a[i];
}

void DichTrai(float	a[100],int n)
{
	float temp=a[1];
	for(int i=2;i<=n;i++)
		a[i-1]=a[i];
	a[n]=temp;
}