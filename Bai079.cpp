// Bai079.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int Timk(int);
void main()
{
	int m;
	cout<<"Nhap m: ";
	cin>>m;
	cout<<"\nK la: "<<Timk(m);
	cout<<endl;
}

int Timk(int m)
{
	for(int k=0;;k++)
		if(pow(4.0,k)>m)
			return k-1;
}
