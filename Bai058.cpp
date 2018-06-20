// Bai058.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

#define PI 3.14159265359

float fx(float);
float fa(float ,float,int );

void main()
{
	float a;
	cout<<"Nhap a:";
	cin>>a;
	float x;
	cout<<"Nhap x:";
	cin>>x;
	int n;
	cout<<"Nhap n:";
	cin>>n;

	float kq=fa(a,x,n);
	cout<<"\nKet Qua: "<<kq;
	cout<<endl;
}

float fx(float x)
{
	return (x*x+1)*pow(cos((float)x*PI/180),2);
}

float fa(float a,float x,int n)
{
	float s=fx(a);
	float t;
	for(int i=1;i<=n;i++)
	{
		t=2*fx(a+i*x);
		s=s+t;
	}
	return s;
}