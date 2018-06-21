// Bai088.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int giaithua(int);
//Cau a
float Tonga(int,float);

//Cau b
float Tongb(int,float);

//Cau c

//Cau d
float Tichd(int,float);

void main()
{
	
	int n;
	cout<<"Nhap n: ";
	cin>>n;

	float x;
	cout<<"Nhap x: ";
	cin>>x;

	//Cau a
	cout<<"\nCau a: "<<Tonga(n,x);

	//Cau b
	cout<<"\nCau b: "<<Tongb(n,x);

	//Cau c

	//Cau d
	cout<<"\nCau d: "<<Tichd(n,x);

	
	cout<<"\nKet Thuc.";

}

int giaithua(int n)
{
	if(n==1)
		return 1;
	return giaithua(n-1)*n;
}

float Tonga(int n,float x)
{
	if(n==1)
		return x;
	return Tonga(n-1,x)+(float)pow(x,n)/giaithua(n);
}

float Tongb(int n,float x)
{
	if(n==1)
		return 1+sqrt(abs(x));
	return Tongb(n-1,x)+((float)1/giaithua(n)+sqrt(abs(x)));
}

float Tichd(int n,float x)
{
	if(n==1)
		return (float)1/2;
	return Tichd(n-1,x)*(float)(pow(1-x,n-1)+1)/((giaithua(n-1)+1)*(giaithua(n-1)+1));
}