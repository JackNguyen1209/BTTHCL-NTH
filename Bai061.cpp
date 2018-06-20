// Bai061.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Cau a
int XuatHien3(int );
//Cau b
int DaoNguoc(int);
//Cau c 
int HoanVi(int);
void main()
{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	int kq= XuatHien3(n*n);
	if(kq==1)
		cout<<"\nTon Tai So 3 Trong n*n ";
	else
		cout<<"\nKhong Ton Tai So 3 Trong n*n";
	cout<<endl;

	//Cau b

	int kq1=DaoNguoc(n);
	cout<<"\nDao Nguoc Cua "<<n<<" : "<<kq1;
	cout<<endl;

	//Cau c
	int kq2=HoanVi(n);
	cout<<"\nSau Khi Hoan Vi: "<<kq2<<endl;
}

int XuatHien3(int n)
{
	int flag=0;
	int t=abs(n);
	while(t!=0)
	{
		int dv=t%10;
		if(dv==3)
			flag=1;
		t/=10;
	}
	return flag;
}

int DaoNguoc(int n)
{
	int t=abs(n);
	int dn=0;
	while(t!=0)
	{
		int dv=t%10;
		dn=dn*10+dv;
		t/=10;
	}
	if(n>0)
		return dn;
	if(n<0)
		return -dn;
}

int HoanVi(int n)
{
	int b[100];
	int k=0;
	int t=abs(n);
	while(t!=0)
	{
		int dv=t%10;
		b[k++]=dv;
		t/=10;
	}


	int temp=b[0];
	b[0]=b[k-1];
	b[k-1]=temp;

	int s=0;
	for(int i=k-1;i>=0;i--)
	{
		s=s*10+b[i];
	}
	return s;
}

