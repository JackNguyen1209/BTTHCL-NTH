// Bai074.cpp : Defines the entry point for the console application.
//
#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int giatri(float,float,float);
void main()
{
	float a;
	cout<<"Nhap a: ";
	cin>>a;
	float x;
	cout<<"Nhap x: ";
	cin>>x;
	float e;
	cout<<"Nhap e: ";
	cin>>e;
	cout<<"\nn la: "<<giatri(a,x,e);
	cout<<endl;

}

int giatri(float a,float x,float e)
{
	float y[100];
	y[0]=a;
	for(int i=1;;i++)
	{
		y[i]=(float)(y[i-1]+(float)x/(y[i-1]))/2;
		if(abs(y[i]*y[i]-y[i-1]*y[i-1])<e)
			return i;
	}
}