// Bai059.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Cau a
int demchuso(int);
//Cau b
int TongChuSo(int);
//Cau c
int csdt(int );

void main()
{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int kq=demchuso(n);
	cout<<"\nSo Chu So Cua "<<n<<" : "<<kq<<endl;
	
	int kq1=TongChuSo(n);
	cout<<"\nTong Cac Chu So Cua "<<n<<" : "<<kq1<<endl;

	int kq2=csdt(n);
	cout<<"\nChu So Dau Tien Cua "<<n<<" : "<<kq2<<endl;
}

int demchuso(int n)
{
	int dem=0;
	int t=abs(n);
	while(t!=0)
	{
		dem++;
		t=t/10;
	}
	return dem;
}

int TongChuSo(int n)
{
	int s=0;
	int t=abs(n);
	while(t!=0)
	{
		int dv=t%10;
		s+=dv;
		t=t/10;
	}
	return s;
}

int csdt(int n)
{
	int t=abs(n);
	while(t>=10)
	{
		t=t/10;
	}
	return t;
}