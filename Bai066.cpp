// Bai066.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Cach 1(dequy)
float xn(float [100],int ,float, float , float ,float,float); 
//Cach 2
float yn(float [100],int ,float, float , float ,float,float);
void main()
{
	float x[100];
	float q,r,b,c;
	float d;
	int n;
	cout<<"Nhap q: ";
	cin>>q;
	cout<<"\nNhap r: ";
	cin>>r;
	cout<<"\nNhap b: ";
	cin>>b;
	cout<<"\nNhap c: ";
	cin>>c;
	cout<<"\nNhap d: ";
	cin>>d;
	cout<<"\nNhap n: ";
	cin>>n;
	//Cach 1
	float kq=xn(x,n,q,r,b,c,d);
	cout<<"\nKet qua: "<<kq;
	cout<<endl;
	//Cach 2
	float kq1=yn(x,n,q,r,b,c,d);
	cout<<"\nKet qua: "<<kq1;
	cout<<endl;
}

float xn(float a[100],int n,float q, float r, float b,float c,float d)
{
	if(n==1)
		return c;
	if(n==2)
		return d;
	return q*xn(a,n-1,q,r,b,c,d)+r*xn(a,n-2,q,r,b,c,d)+b;
}

float yn(float a[100],int n,float q, float r, float b,float c,float d)
{
	a[0]=c;
	a[1]=d;
	for(int i=2;i<=n-1;i++)
		a[i]=q*a[i-1]+r*a[i-2]+b;
	return a[n-1];
}