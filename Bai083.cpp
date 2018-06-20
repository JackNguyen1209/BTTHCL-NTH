// Bai083.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

float Tong(float);
void main()
{
	float x;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"\nKet Qua: "<<Tong(x);
	cout<<endl;
}

float Tong(float x)
{
	float t=x*x;
	float s=0;
	for(int i=256;i>=2;i=i-2)
		s=i/(s+t);
	return s+t;
}

