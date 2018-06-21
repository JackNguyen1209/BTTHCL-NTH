// Bai121.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include "math.h"

using namespace std;

void Nhap(int[],int);
void Xuat(int[],int);

int Timk(int[],int,float);

void main()
{
	int b[200];
	int k=100;
	Nhap(b,k);
	Xuat(b,k);

	float x;
	cout<<"\nNhap x: ";
	cin>>x;
	while(Timk(b,k,x)==0)
	{
		
		cout<<"\nNhap sai.Nhap lai";
		cout<<"\nNhap x: ";
		cin>>x;
	}
	cout<<"\nVi tri k: "<<Timk(b,k,x);
	cout<<endl;

	cout<<"\nKet Thuc";
}

void Nhap(int a[],int n )
{

	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
}

void Xuat(int a[],int n )
{
	for(int i=1;i<=n;i++)
	{
		cout<<endl<<a[i];
	}
}

int Timk(int a[],int n,float x)
{
	for(int i=2;i<=99;i++)
		if(a[i-1]<x && a[i+1]>=x)
			return i;
	return 0;
}