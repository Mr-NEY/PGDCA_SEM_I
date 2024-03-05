#include<iostream.h>
#include<conio.h>
void main ()
{
	clrscr();
	int payroll_amt = 0;
	int totpayroll_amt = 0;
	do {
	cout<<"\nEnter Payroll Amount : ";
	cin>>payroll_amt;
	if ( payroll_amt == 999)
	{ break; }
	totpayroll_amt = payroll_amt + totpayroll_amt;
	}while(payroll_amt != 999);
	cout<<"\nTotal payroll Amount is "<<totpayroll_amt;
	getch();

}