// Bai063.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
struct So
{
	int p;
	int q;
};
typedef struct So SO;

int UCLN(int ,int);
SO TimSo(int ,int);
void main()
{
	int m;
	cout<<"Nhap m:";
	cin>>m;

	int n;
	cout<<"Nhap n:";
	cin>>n;

	cout<<"\np: "<<TimSo(m,n).p;
	cout<<"\nq: "<<TimSo(m,n).q;
	cout<<endl;
}

int UCLN(int a,int b)
{
	a=abs(a);
	b=abs(b);
	while(a*b!=0)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a+b;
}

SO TimSo(int m,int n)
{
	SO temp={0,0};
	for(int i=1;i<=m;i++)
	{
		int j=n*i/m;
		if(UCLN(i,j)==1)	
		{
			temp.p=i;
			temp.q=j;
		}
	}
	return temp;
}


