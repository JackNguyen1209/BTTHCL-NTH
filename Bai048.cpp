// Bai048.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main() 
{
	int k;
	cout<<"Nhap k:"<<endl;
	cin>>k;

	int l;
	cout<<"Nhap l:"<<endl;
	cin>>l;

	int max;
	if(k>l)
		max=k;
	else
		max=l;

	if(k!=l)
	{
		k=max;
		l=max;
	}
	else
	{
		k=0;
		l=0;
	}
	cout<<"\nk:"<<k;
	cout<<"\nl:"<<l;

	cout<<endl;
}
