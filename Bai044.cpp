// Bai044.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int kt3giongnhau(int );
int kt4khacnhau(int);
int ktdx(int );
int TanSuat(int [],int, int);
void main() 
{
	int n;
	cout<<"Nhap n:"<<endl;
	cin>>n;
	if(ktdx(n)==n)
		cout<<"\nCo Doi Xung";
	else
		cout<<"\nKhong Co Doi Xung";

	if(kt3giongnhau(n)==1)
		cout<<"\nCo 3 Chu So Giong Nhau";
	else
		cout<<"\nKhong Co 3 Chu So Giong Nhau";

	if(kt4khacnhau(n)==1)
		cout<<"\nCo 4 Chu So Khac Nhau";
	else
		cout<<"\nKhong Co 4 Chu So Khac8 Nhau";
	
	cout<<endl;


}

int ktdx(int n)
{
	int t=abs(n);
	int dn=0;
	while(t!=0)
	{
		int dv=t%10;
		dn=dn*10+dv;
		t=t/10;
	}
	return dn;
}

int kt3giongnhau(int n )
{
	int b[4]={0,0,0,0};
	int t=abs(n);
	int k=0;
	while(t!=0)
	{
		int dv=t%10;
		b[k++]=dv;
		t=t/10;
	}

	int flag=0;
	for(int i=0;i<k;i++)
	{
		if(TanSuat(b,k,b[i])==3)
			flag=1;
	}
	return flag;
}

int TanSuat(int a[],int n, int x)
{
	int dem=0;
	for(int i=0;i<=n-1;i++)
		if(a[i] == x)
			dem++;
	return dem;
}

int kt4khacnhau(int n)
{
	int b[4]={0,0,0,0};
	int t=abs(n);
	int k=0;
	while(t!=0)
	{
		int dv=t%10;
		b[k++]=dv;
		t=t/10;
	}

	int flag=1;
	for(int i=0;i<k;i++)
	{
		if(TanSuat(b,k,b[i])!=1)
			flag=0;
	}
	return flag;
}

