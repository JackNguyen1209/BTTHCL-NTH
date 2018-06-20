// Bai075.cpp : Defines the entry point for the console application.
//

#include "StdAfx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int giatri();
void main()
{
	
	cout<<"Gia tri n cua phan tu x[n] dau tien la: "<<giatri();
	cout<<endl;

}

int giatri()
{
	float x[1000];
	x[0]=1;
	for(int i=1;;i++)
	{
		x[i]=(float)(2-x[i-1]*x[i-1])/5;
		if(abs(x[i]-x[i-1])<pow(10.0,-5))
			return i;
	}
}

