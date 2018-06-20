// Bai084.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int giaithua(int);
void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;

	int k;
	cout<<"Nhap k: ";
	cin>>k;
	float kq=(float)giaithua(n)/(giaithua(k)*giaithua(abs(n-k)));
	if(n<k)
		kq=-kq;
	cout<<"\nKet Qua: "<<kq;
}

int giaithua(int n)
{
	if(n==1)
		return 1;
	return giaithua(n-1)*n;
}