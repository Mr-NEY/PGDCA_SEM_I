#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	double deposit,loan;
	cout<<"\nEnter Loan Amount : ";
	cin>>loan;
	if (loan<25000)
	deposit=loan*0.05;
	else if(loan>= 25000 && loan<= 49999)
	deposit=1250+((loan-25000)*0.1);
	else if (loan>=50000 && loan<=100000)
	deposit = 5000+((loan-50000)*0.25);
	if (loan>100000)
	cout<<"\n  Excess of $100000 are not allowed ";
	else
	cout<<"\n Require Deposit = "<< deposit;
	getch();
}