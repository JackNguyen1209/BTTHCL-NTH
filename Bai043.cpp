// Bai043.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int Dem(int );
int Tong(int );
int cscc(int );
int csdt(int);
int cshc(int);
void main() 
{
	int n;
	cout<<"Nhap n:"<<endl;
	cin>>n;

	cout<<"\nSo Chu So Cua So Tu Nhien n:"<<Dem(n);

	cout<<"\nTong Cac Chu So n:"<<Tong(n);

	cout<<"\nChu So Cuoi Cung:"<<cscc(n);

	cout<<"\nChu So Dau Tien:"<<csdt(n);

	cout<<"\nChu So Hang Chuc:"<<cshc(n);

	cout<<endl;

}

int Dem(int n)
{
	int dem=0;
	n=abs(n);
	while(n!=0)
	{
		dem++;
		n=n/10;
	}
	return dem;
}

int Tong(int n)
{
	int s=0;
	n=abs(n);
	while(n!=0)
	{
		int dv=n%10;
		s=s+dv;
		n=n/10;
	}
	return s;
}

int cscc(int n)
{
	n=abs(n);
	return n%10;
}

int csdt(int n)
{
	for(int i=abs(n);i>=0;i=i/10)
		if(i<10)
		return i;
}

int cshc(int n)
{
	n=abs(n);
	for(int i=n;i>=0;i=i/10)
		if(i<100 && i>10)
			return i%10;
}