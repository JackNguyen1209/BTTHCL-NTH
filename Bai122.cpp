// Bai122.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int [],int &);
void Xuat(int[],int );
void TimNguoi(int[],int &,int[],int &);
void XoaViTri(int[],int &,int k);

void main() 
{
	int a[100];
	int n;
	int b[100];
	int k;
	Nhap(b,k);
	cout << "Mang ban dau:" << endl;
	Xuat(b,k);
	cout<<"\n4 gia tri tuong trung cho 4 nguoi can tim: ";
	TimNguoi(b,k,a,n);

}
	
void Xuat(int a[], int n)
{
	
	for(int l = 1; l<=n; l++) 
	{
		cout <<setw(4)<<a[l]; 
	}
	cout<<endl;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: " << endl;
	cin >> n;

	for(int i = 1; i<=n; i++) 
	{
		cout<<"Nhap"<<" a["<<i<<"]: ";
		cin >> a[i];
	}
}

void XoaViTri(int a[],int &n,int k)
{
	for(int i=k;i<=n-1;i++)
		a[i]=a[i+1];
	n--;
}

void TimNguoi(int a[],int &n,int b[],int &k)
{
	k=1;
	while(k<=4)
	{
		int lc=1;
		for(int i=1;i<=n;i++)
			if(a[i]<a[lc])
				lc=i;
		b[k++]=a[lc];
		XoaViTri(a,n,lc);
	}
	Xuat(b,k-1);
}