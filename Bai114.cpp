// Bai114.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


void Nhap(int [],int &);
void Xuat(int [],int );

float TrungBinh(int [],int,int);
int Tong(int [],int);

int _tmain(int argc, _TCHAR* argv[])
{
	int b[100];
	int k;
	int i;

	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	cout<<"\nNhap i: ";
	cin>>i;
	cout<<setprecision(5)<<fixed;
	cout<<"\nGia Tri Trung Binh: "<<TrungBinh(b,k,i);

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

float TrungBinh(int a[100],int n,int k)
{
	int s=Tong(a,n)-a[k];
	return (float)s/(n-1);
}

int Tong(int a[100],int n)
{
	if(n==0)
		return 0;
	return Tong(a,n-1)+a[n];
}