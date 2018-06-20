// Bai104.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


void Nhap(int [],int &);
void Xuat(int [],int );
//Cau a
int Tong(int [],int);
//Cau b
float Tong1(int [],int);

int _tmain(int argc, _TCHAR* argv[])
{
	int b[100];
	int k;

	/* initialize random seed: */
	srand (time(NULL));

	Nhap(b,k);
	cout<<"\nMang Ban Dau: \n";
	Xuat(b,k);
	cout<<setprecision(3)<<fixed;

	cout<<"\nTong Dien Tro Noi Tiep: "<<Tong(b,k);
	cout<<endl;
	cout<<"\nTong Dien Tro Song Song: "<<(float)1/Tong1(b,k);
	cout<<endl;
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
		a[i] =abs(min + 
			(rand()  % static_cast<int>(max-min+1)));
	
	}
}

void Xuat(int a[],int n )
{
	for(int i=1;i<=n;i++)
		cout<<setw(8)<<setprecision(3)<<a[i];
}

int Tong(int a[100],int n)
{
	if(n==1)
		return abs(a[1]);
	return Tong(a,n-1)+abs(a[n]);
}

float Tong1(int a[100],int n)
{
	if(n==1)
		return (float)1/abs(a[1]);
	return Tong1(a,n-1)+(float)1/abs(a[n]);
}