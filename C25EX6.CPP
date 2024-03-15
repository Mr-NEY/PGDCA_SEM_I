#include<iostream.h>
#include<conio.h>
#include<string.h>
void main(){
	clrscr();
	float unit,charges;
	char name[20] = "Nay Min Thant";
	//cout<<"\nEnter Name : ";
	//cin>>name;
	cout<<"\nEnter Meter Unit : ";
	cin>>unit;
	if (unit <=500)
	charges = unit * 2;
	else if (unit <=1000)
	charges = (500 * 4)+((unit-500)*2);
	else
	charges = (1000 * 6)+ ((unit-1000)*3);
	cout<<"\nName : "<<name;
	cout<<"\nMeter unit : "<<unit;
	cout<<"\nTotal Charges : "<<charges;
	getch();
}