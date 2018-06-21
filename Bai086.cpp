// Bai086.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

//Cau a
float Tonga(int);

//Cau b
float Tongb(int);

//Cau c
int giaithua(int);
float Tongc(int);

//Cau d
float Tongd(int);

//Cau e
float Tiche(int);

//Cau f
float Tichf(int);


void main()
{
	//Cau a
	int a=100;
	cout<<"\nKet qua cau a: "<<Tonga(a);

	//Cau b
	int b=50;
	cout<<"\nKet qua cau b: "<<Tongb(b);

	//Cau c
	int c=10;
	cout<<"\nKet qua cau c: "<<Tongc(c);

	//Cau d
	int d=128;
	cout<<"\nKet qua cau d: "<<Tongd(d);

	//Cau e
	int e=52;
	cout<<"\nKet qua cau e: "<<Tiche(e);

	//Cau f
	int f=10;
	cout<<"\nKet qua cau f: "<<Tichf(f);
}

float Tonga(int n)
{
	if(n==1)
		return 1;
	return (float)Tonga(n-1)+(float)1/(n*n);
}

float Tongb(int n)
{
	if(n==1)
		return 1;
	return (float)Tongb(n-1)+(float)1/(n*n*n);
}

float Tongc(int n)
{
	if(n==1)
		return 1;
	return (float)Tongc(n-1)+(float)1/giaithua(n);
}

int giaithua(int n)
{
	if(n==1)
		return 1;
	return giaithua(n-1)*n;
}

float Tongd(int n)
{
	if(n==1)
		return (float)1/4;
	return (float)Tongd(n-1)+(float)1/((2*n)*(2*n));
}

float Tiche(int n)
{
	if(n==1)
		return (float)1/6;
	return (float)Tiche(n-1)*n*n/(n*n+2*n+3);
}

float Tichf(int n)
{
	if(n==1)
		return 3;
	return Tichf(n-1)*(2+(float)1/giaithua(n));
}