// Bai060.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int Tong(int ,int);
void main()
{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int m;
	cout<<"Nhap m:";
	cin>>m;

	int kq=Tong(n,m);
	cout<<"\nTong "<<m<<" chu so cuoi cung cua "<<n<<" : "<<kq;
	cout<<endl;
}

int Tong(int n ,int m)
{
	int s=0;
	int t=abs(n);
	if(m>n)
		return 0;
	for(int i=1;i<=m;i++)
	{
		int dv=t%10;
		s+=dv;
		t=t/10;
	}
	return s;
}

