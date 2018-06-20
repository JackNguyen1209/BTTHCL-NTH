// Bai081.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int Tim(int);
int Tich(int);
void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"\nKet Qua: "<<Tim(n);
	cout<<endl;
}

int Tim(int n)
{
	if(n==0)
		return 0;
	return Tim(n-1)+Tich(n);
}

int Tich(int n)
{
	int t=1;
	for(int i=n;i<=2*n;i++)
		t=t*i;
	return t;
}