// Bai107.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include "math.h"
using namespace std;

struct Diem 
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
void Nhap(DIEM[],int &);
void Xuat(DIEM);
void Xuat(DIEM[],int );

float KhoangCach(DIEM[],int,DIEM);
float KhoangCach(DIEM,DIEM);
void LietKe(DIEM[],int,DIEM);

void main()
{
	DIEM b[100];
	int k;

	Nhap(b,k);
	cout<<"\nMang Ban Dau:";
	Xuat(b,k);

	DIEM a;
	cout<<"\nNhap Truong Hoc: \n";
	Nhap(a);
	Xuat(a);

	LietKe(b,k,a);

	cout<<"\nKhoang Cach Trung Binh: "<<(float)KhoangCach(b,k,a)/k;
	
	cout<<"\nKet Thuc";
}

void Nhap(DIEM &P)
{
	float temp;
	cout<<"Nhap x:";
	cin>>temp;
	P.x = temp;

	cout<<"Nhap y:";
	cin>>temp;
	P.y = temp;

}

void Nhap(DIEM a[],int &n )
{
	cout<<"Nhap n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Nhap a["<<i<<"]"<<endl;
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout<<"("<<P.x<<","<<P.y<<")";
}

void Xuat(DIEM a[],int n )
{
	for(int i=1;i<=n;i++)
	{
		Xuat(a[i]);
	}
}

float KhoangCach(DIEM a[],int n,DIEM b)
{
	float s=0;
	for(int i=1;i<=n;i++)
		s+=KhoangCach(a[i],b);
	return s;
}

float KhoangCach(DIEM a,DIEM b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

void LietKe(DIEM a[],int n,DIEM b)
{
	for(int i=1;i<=n;i++)
	{
		cout<<"\nKhoang Cach Cua Nha "<<i<<" Den Truong :"<<KhoangCach(a[i],b);
	}
}