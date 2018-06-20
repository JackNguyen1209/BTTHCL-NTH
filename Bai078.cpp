// Bai078.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//DeQuy
float Tinh(int,float,float,float);
//Loops
float Tinh1(int,float,float,float);

void main()
{
	float a;
	cout<<"Nhap a: ";
	cin>>a;
	float b;
	cout<<"\nNhap b: ";
	cin>>b;
	int n;
	cout<<"\nNhap n: ";
	cin>>n;
	//C1: DeQuy
	cout<<"\nKet Qua:"<<Tinh(n,a,b,(float)(b-a)/n)*(b-a)/n;
	cout<<endl;
	//C2
	cout<<"\nKet Qua 2:"<<Tinh1(n,a,b,(float)(b-a)/n)*(b-a)/n;
	cout<<endl;
}
//DeQuy

float Tinh(int n,float a,float b,float h)
{
	if(n==0)
		return 0;
	return Tinh(n-1,a,b,h)+(a+(n-1/2)*h)/(1+(a+(n-1/2)*h)*(a+(n-1/2)*h));

}
//Loops
float Tinh1(int n,float a,float b,float h)
{
	float s=0;
	for(int i=1;i<=n;i++)
		s+=(a+(i-1/2)*h)/(1+(a+(i-1/2)*h)*(a+(i-1/2)*h));
	return s;
}