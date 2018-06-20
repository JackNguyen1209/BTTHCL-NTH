// Bai08.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int Tim(int);
void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"\nSo Can Tim La: "<<Tim(n);
	cout<<endl;
}

int Tim(int n)
{
	for(int k=0;;k++)
		if(pow(2.0,k)>n)
			return pow(2.0,k);
}
