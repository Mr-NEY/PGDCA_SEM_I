#include<iostream.h>
#include<conio.h>
void main (){
	clrscr();
	double percel_weight,charges;
	cout<<"\nEnter Percel Weight : " ;
	cin>>percel_weight;
	if (percel_weight<2.5)
	charges=percel_weight*3.50;
	else if (percel_weight <=5 )
	charges = percel_weight*2.85;
	else
	charges=percel_weight*2.45;
	cout<<"\nCharges = "<< charges;
	getch();
}