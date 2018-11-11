#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()

{
	int N,i,jb;
	i=1;
	cout<<"Masukkan Nilai N : ";cin>>N;
	cout<<"Jumlah Bilangan 1 Sampai Dengan N :"<<endl;
	do
{
	jb=i+N;
	cout<<jb<<endl;
}
	while (jb<=i);
}
