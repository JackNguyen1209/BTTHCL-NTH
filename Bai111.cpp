// Bai111.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


void Nhap(int [],int &);
void Xuat(int [],int );
int Du(int ,int);
void XayDung(int [],int [],int );

int _tmain(int argc, _TCHAR* argv[])
{
	int b[100];
	int k;
	int a[100];
	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	cout<<"\nMang Luc Sau: \n";
	XayDung(a,b,k);
	Xuat(a,k);

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
		cout<<setw(5)<<a[i];
}

int Du(int a,int b)
{
	return a%b;
}

void XayDung(int a[100],int b[100],int n)
{
	int k=1;
	for(int i=1;i<=n;i++)
		a[k++]=Du(b[i],n);

}