// Bai045.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void main()
{
	int m;
	int n;
	cout<<"Nhap gio:";
	cin>>m;
	cout<<"Nhap phut:";
	cin>>n;
	float goc=(float)((float)-11*n/2)+30*m;
	float kq;
	float temp=(float)11/720;
	if(goc>0)
		kq=((float)goc/360)/temp;
	if(goc<0)
		kq=((float)((360+goc)/360))/temp;
	float kq1=kq-(int)kq;
	kq1=kq1*60;
	cout<<"\nToi thieu khoang "<<(int)kq<<" phut "<<(int)kq1<<" giay nua thi kim gio trung kim phut";
	cout<<endl;
}

