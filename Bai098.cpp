// Bai098.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

long  fibo(int );

void main()
{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	cout<<"\nKet Qua: "<<fibo(n)<<endl;
}

long fibo(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibo(n-1)+fibo(n-2);
}
