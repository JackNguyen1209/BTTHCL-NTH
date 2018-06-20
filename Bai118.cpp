// Bai118.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


void Nhap(int [],int &);
void Xuat(int [],int );
void Xuat(float [],int );
void XayDung(float[],int,int[]);

int _tmain(int argc, _TCHAR* argv[])
{
	int b[100];
	float c[100];
	int k;

	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	XayDung(c,k,b);
	cout<<"\nMang Sau:\n ";
	Xuat(c,k);

	

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

void Xuat(float a[],int n )
{
	for(int i=1;i<=n;i++)
		cout<<setw(8)<<setprecision(3)<<a[i];
}

void XayDung(float b[100],int n,int a[100])
{
	b[1]=a[1];
	b[n]=a[n];
	int k=2;
	for(int i=2;i<=n-1;i++)
		b[k++]=(float)(a[i+1]-a[i])/3;

}

