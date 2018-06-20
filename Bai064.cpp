// Bai064.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int an(int[100],int );

void main()
{
	int b[100];
	int n;
	cout<<"Nhap n: ";
	cin>>n;

	int kq=an(b,n);
	cout<<"\nKet Qua La:"<<kq<<endl;
}


int an(int a[100],int n)
{
	if(n==1)
		return 1;
	return (n-1)*an(a,n-1)+1;
}