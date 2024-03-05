#include<iostream.h>
#include<conio.h>
void main (){
	clrscr();
	double saleTax, totAmount, purchAmount;
	int code;
	cout<<"\nEnter Purchase Amount: ";
	cin>>purchAmount;
	cout<<"Enter code(0 to 3): ";
	cin>>code;
	switch ( code ) {
	 case 0 : saleTax = 0; break;
	 case 1 : saleTax = purchAmount * 0.03; break;
	 case 2 : saleTax = purchAmount * 0.05; break;
	 case 3 : saleTax = purchAmount * 0.07;
	 }
	 cout<<"\n Sale Tax is "<<saleTax;
	 totAmount = saleTax + purchAmount;
	 cout<<"\n Total Amount is "<<totAmount;
	 getch();


}