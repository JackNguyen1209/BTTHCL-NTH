// Bai050.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;


//Cau a
int kttrung(int,int,int,int);
int ktden(int,int);
//Cau b
int kthaukhongche(int ,int ,int ,int);
//Cau c
int kttuongkhongche(int,int ,int ,int);
//Cau d
int ktmakhongche(int,int,int,int);
//Cau e
//Cmt ben duoi
//Cau f
int madichuyen2lan(int ,int,int ,int);

void main()
{
	int b[8][8];
	int n=8;

	int i,j;
	cout<<"Nhap vi tri dau (i,j) ";
	cout<<"\nNhap dong: ";
	cin>>i;
	cout<<"Nhap cot: ";
	cin>>j;

	int k,l;
	cout<<"Nhap vi tri sau (k,l) ";
	cout<<"\nNhap dong: ";
	cin>>k;
	cout<<"Nhap cot: ";
	cin>>l;
	//Cau a
	int kq1=kttrung(i,j,k,l);
	if(kq1==1)
		cout<<"\n2 Diem Trung Mau";
	else
		cout<<"\n2 Diem Khong Trung Mau";
	cout<<endl;
	
	//Cau b
	int kq2=kthaukhongche(i,j,k,l);
	if(kq2==1)
		cout<<"\n("<<k<<","<<l<<") bi hau o vi tri ("<<i<<","<<j<<") khong che";
	else
		cout<<"\n("<<k<<","<<l<<") khong bi hau o vi tri ("<<i<<","<<j<<") khong che";
	
	//Cau c

	int kq3=kttuongkhongche(i,j,k,l);
	if(kq3==1)
		cout<<"\n("<<k<<","<<l<<") bi tuong o vi tri ("<<i<<","<<j<<") khong che";
	else
		cout<<"\n("<<k<<","<<l<<") khong bi tuong o vi tri ("<<i<<","<<j<<") khong che";

	//Cau d

	int kq4=ktmakhongche(i,j,k,l);
	if(kq4==1)
		cout<<"\n("<<k<<","<<l<<") bi ma o vi tri ("<<i<<","<<j<<") khong che";
	else
		cout<<"\n("<<k<<","<<l<<") khong bi ma o vi tri ("<<i<<","<<j<<") khong che";
	//Cau e
	//tuongtu f nhung ma:=xe=> luon dung
	//Cau f
	int kq5=madichuyen2lan(i,j,k,l);
	if(kq5==1)
		cout<<"\n("<<k<<","<<l<<") bi ma o vi tri ("<<i<<","<<j<<") khong che trong 2 nuoc di";
	else
		cout<<"\n("<<k<<","<<l<<") khong bi ma o vi tri ("<<i<<","<<j<<") khong che trong 2 nuoc di";
}

int kttrung(int i, int j, int k, int l)
{
	if((ktden(i,j)==1 && ktden(k,l)==1 ) || (ktden(i,j)==0 && ktden(k,l)==0 ))
		return 1;
	return 0;
}

int ktden(int d, int c)
{
	if((d+c)%2!=0)
		return 1;
	return 0;
}

int kthaukhongche(int i,int j,int k,int l)
{
	if(i==k && j==l)
		return 0;
	else
		if(i==k || j==l)
			return 1;

	//TH1
	for(int t=0;t<=8;t++)
		if(((i+t>=0 && j+t>=0 && i+t<=7 && j+t<=7 && i+t==k && j+t==l) || (i-t>=0 && j-t>=0 && i-t<=7 && j-t<=7 && i-t==k && j-t==l)) && kttrung(i,j,k,l)==1)
			return 1;
	//TH2
	if((i+j == k+l) && kttrung(i,j,k,l)==1)
		return 1;
	return 0;
}

int kttuongkhongche(int i,int j,int k,int l)
{
	if(i==k && j==l)
		return 0;
	//TH1
	for(int t=0;t<=8;t++)
		if(((i+t>=0 && j+t>=0 && i+t<=7 && j+t<=7 && i+t==k && j+t==l) || (i-t>=0 && j-t>=0 && i-t<=7 && j-t<=7 && i-t==k && j-t==l)) && kttrung(i,j,k,l)==1)
			return 1;
	//TH2
	if((i+j == k+l) && kttrung(i,j,k,l)==1)
		return 1;
	return 0;
}

int ktmakhongche(int i,int j,int k,int l)
{
	int flag=0;
	if(i==k && j==l)
		return 0;
	for(int di=-2;di<=2;di++)
		for(int dj=-2;dj<=2;dj++)
		{
			if(i+di>=0 && j+dj>=0 && i+di<=7 && j+dj<=7 )
				if( k==i+di && l==j+dj && di!=0 && dj!=0)
					flag=1;
		}
		return flag;

}

int madichuyen2lan(int i,int j,int k,int l)
{
	if(ktmakhongche(i,j,k,l)==1)
		return 0;
	for(int di=-2;di<=2;di++)
		for(int dj=-2;dj<=2;dj++)
		{
			if(i+di>=0 && j+dj>=0 && i+di<=7 && j+dj<=7 )
					if(di!=0 && dj!=0)
						if(ktmakhongche(i+di,j+dj,k,l)==1)
							return 1;
		}
		return 0;
}