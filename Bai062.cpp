// Bai062.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int UCLN(int ,int);
int BCNN(int ,int);

void main()
{
	int n;
	cout<<"Nhap n:";
	cin>>n;

	int m;
	cout<<"Nhap m:";
	cin>>m;

	int kq1=UCLN(n,m);
	int kq2=BCNN(n,m);
	cout<<"\nUCLN: "<<kq1;
	cout<<endl;
	cout<<"\nBCNN: "<<kq2;
	cout<<endl;
}

int UCLN(int a,int b)
{
	a=abs(a);
	b=abs(b);
	while(a*b!=0)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a+b;
}

int BCNN(int a,int b)
{
	int m=abs(a);
	int n=abs(b);
	while(m*n!=0)
	{
		if(m>n)
			m=m-n;
		else
			n=n-m;
	}
	int kq= abs(a*b)/(m+n);
	return kq;
}