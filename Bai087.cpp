// Bai087.cpp : Defines the entry point for the console application.
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
float Tongc(int);

//Cau d
float Tongd(int);
float Mau(int);
int giaithua(int);

void main()
{
	
	int n;
	cout<<"Nhap n: ";
	cin>>n;

	//Cau a
	cout<<"\nCau a: "<<Tonga(n);

	//Cau b
	cout<<"\nCau b: "<<Tongb(n);

	//Cau c
	cout<<"\nCau c: "<<Tongc(n);

	//Cau d
	cout<<"\nCau d: "<<Tongd(n);
	
	cout<<"\nKet Thuc.";

}

float Tonga(int n)
{
	if(n==1)
		return 1;
	return Tonga(n-1)+(float)1/(n*n*n*n*n);
}

float Tongb(int n)
{
	if(n==1)
		return (float)-1/3;
	return Tongb(n-1)+(float)pow(-1.0,n)/(2*n*n+n);
}

float Tongc(int n)
{
	if(n==1)
		return (float)1/2;
	return Tongc(n-1)+(float)pow(-1.0,n+1)/(n*(n+1));
}

float Mau(int n)
{
	if(n==1)
		return 0;
	return Mau(n-1)+(float)1/n;
}

float Tongd(int n)
{
	if(n==1)
		return 0;
	return Tongd(n-1)+(float)giaithua(n)/Mau(n);
}

int giaithua(int n)
{
	if(n==1)
		return 1;
	return giaithua(n-1)*n;
}