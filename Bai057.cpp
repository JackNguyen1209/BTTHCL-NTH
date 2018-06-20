// Bai057.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

#define PI 3.14159265359

float Caua(float,int);
float Caub(float,int);
float Cauc(float,int);
void main()
{
	float x;
	cout<<"Nhap x:";
	cin>>x;
	int n;
	cout<<"Nhap n:";
	cin>>n;
	float kq=Caua(x,n);
	cout<<"\nCau a: "<<kq;
	cout<<endl;

	float kq1=Caub(x,n);
	cout<<"\nCau b: "<<kq1;
	cout<<endl;

	float kq2=Cauc(x,n);
	cout<<"\nCau c: "<<kq2;
	cout<<endl;


}

float Caua(float x,int n)
{
	float s=0;
	for(int i=1;i<=n;i++)
		s+=pow(sin((float)x*PI/180),i);
	return s;
}

float Caub(float x,int n)
{
	float s=0;
	float t;
	for(int i=1;i<=n;i++)
	{
		t=pow(x,i);
		s+=sin((float)t*PI/180);
	}
	return s;
}

float Cauc(float x,int n)
{
	float s=0;
	float t=x;
	for(int i=1;i<=n;i++)
	{
		t=sin((float)t*PI/180);
		s+=t;
	}
	return s;
}