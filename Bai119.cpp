// Bai119.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Xuat(float [],int );
void XayDung(float[],float[],int);

float Tinhx(int);
float Tinhy(int);
long GiaiThua(int);
void XayDung1(float[],int );
int _tmain(int argc, _TCHAR* argv[])
{
	float b[100];
	float c[100];
	int k=15;
	float d[100];

	/* initialize random seed: */
	srand (time(NULL));

	cout<<setprecision(15)<<fixed;
	XayDung(b,c,k);
	cout<<"\nCau a: ";
	cout<<"\nMang X:\n ";
	Xuat(b,k);
	cout<<"\nMang Y:\n ";
	Xuat(c,k);

	cout<<"\nCau b: \n";
	XayDung1(d,k);
	Xuat(d,k);
	

	cout<<"\nKet Thuc.\n";
	return 0;
}


void Xuat(float a[],int n )
{
	for(int i=1;i<=n;i++)
		cout<<a[i]<<endl;
}

float Tinhx(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return (float)(Tinhy(n-1)+Tinhy(n-2))/2;
}
float Tinhy(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return (float)(Tinhx(n-1)*Tinhx(n-1)+Tinhx(n-2)+Tinhy(n-1))/GiaiThua(n);
}

long GiaiThua(int n)
{
	if(n==1)
		return 1;
	return GiaiThua(n-1)*n;
}

void XayDung(float a[100],float b[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
	{
		a[k]=Tinhx(i);
		b[k]=Tinhy(i);
		k++;
	}
}

void XayDung1(float a[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
	{
		a[k++]=(float)Tinhy(i)/(i+1);
	}
}