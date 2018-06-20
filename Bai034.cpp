// Bai034.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

int ktthanghang(float,float,float,float);
int ktcungphia(float,float,float,float,DUONGTHANG);

void main() 
{
	float x1,x2,x3,y1,y2,y3;
	cout<<"A...Nhap x1:"<<endl;
	cin>>x1;
	cout<<"Nhap y1:"<<endl;
	cin>>y1;
	cout<<"B...Nhap x2:"<<endl;
	cin>>x2;
	cout<<"Nhap y2:"<<endl;
	cin>>y2;
	cout<<"C...Nhap x3:"<<endl;
	cin>>x3;
	cout<<"Nhap y3:"<<endl;
	cin>>y3;

	float ABx=x2-x1;
	float ABy=y2-y1;
	float ACx=x3-x1;
	float ACy=y3-y1;

	DUONGTHANG AB;
	AB.a=(y1-y2);
	AB.b=(x2-x1);
	AB.c=-(y1-y2)*(x1)-(x2-x1)*(y1);
	DUONGTHANG BC;
	BC.a=(y2-y3);
	BC.b=(x3-x2);
	BC.c=-(y2-y3)*x3 +-(x3-x2)*y3;
	DUONGTHANG AC;
	AC.a=(y1-y3);
	AC.b=(x3-x1);
	AC.c=-(y1-y3)*x1+-(x3-x1)*y1;

	if(ktthanghang(ABx,ABy,ACx,ACy)==1)
		cout<<"\nA,B,C thang hang";
	else
	{
		if(ktcungphia(x1,y1,0,0,BC)==1 && ktcungphia(x2,y2,0,0,AC)==1 && ktcungphia(x3,y3,0,0,AB)==1)
			cout<<"\nGoc Toa Do O Nam Trong Tam Giac";
		else
			cout<<"\nGoc Toa Do Khong Nam Trong Tam Giac";
	}
	
}

int ktthanghang(float ax,float ay,float bx,float by)
{
	if((float)bx/ax == (float)by/ay)
		return 1;
	return 0;
}

int ktcungphia(float a,float b,float c,float d,DUONGTHANG x)
{
	if((a*x.a+b*x.b+x.c)*(c*x.a+d*x.b+x.c)>0)
		return 1;
	return 0;
}