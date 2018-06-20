// Bai049.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void LietKe(int);
void LietKe1(int );
void main()
{
	int n;
	cout<<"Nhap n:";
	cin>>n;
	cout<<"\nCach 1:-Amateur";
	LietKe(n);
	cout<<endl<<"\nCach 2: -Semipro";
	LietKe1(n);
}
//Cach1
void LietKe(int n)
{
	for(int a=0;a<=n;a++)
		for(int b=0;b<=(float)((n-3*a)/5);b++)
			if(n== 3*a+5*b)
				cout<<"\na: "<<a<<"\nb: "<<b<<"\n";
	
}
//Cach2: CaiTien
void LietKe1(int n)
{
	for(int a=0;a<=(float)n/3;a++)
	{
			if((n-3*a)%5==0 && n-3*a>=0)
				cout<<"\na: "<<a<<"\nb: "<<(n-3*a)/5<<"\n";
	}
	
}

