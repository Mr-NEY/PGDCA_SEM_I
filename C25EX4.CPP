#include<iostream.h>
#include<conio.h>
void main (){
	clrscr();
	int num1,num2;
	cout<<"\nEnter first integer : ";
	cin>>num1;
	cout<<"\nEnter second integer : ";
	cin>>num2;
	if((num2%num1) == 0)
	cout<<"\nFirst integer is multiple of the second integer";
	else
	cout<<"\nFirst integer is not multiple of the second integer";
	getch();
}