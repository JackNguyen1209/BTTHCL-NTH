// Bai085.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Cau a
int giaithua(int);
//Cau b
int ketqua(int);
void main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"\nKet Qua a: "<<giaithua(n);
	cout<<endl;
	cout<<"\nKet Qua b: "<<ketqua(n);
	cout<<endl;
}

int giaithua(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return giaithua(n-2)*n;
}

int ketqua(int n)
{
	return pow(-1.0,n+1)*giaithua(n);
}
