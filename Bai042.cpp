// Bai042.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int TongLapPhuong(int );

void main() 
{
	int n;
	cout<<"Nhap n:"<<endl;
	cin>>n;

	if(n*n==TongLapPhuong(n))
		cout<<"\n=>n*n Bang Tong Lap Phuong Cac Chu So n ";
	else
		cout<<"\n=>n*n Khong Bang Tong Lap Phuong Cac Chu So n ";
	cout<<endl;

}

int TongLapPhuong(int n)
{
	int s=0;
	while(n!=0)
	{
		n=n%10;
		s=s+n*n*n;
		n=n/10;
	}
	return s;
}


