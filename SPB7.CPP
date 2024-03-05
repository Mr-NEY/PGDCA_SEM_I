#include<iostream.h>
#include<conio.h>

void main (){
	clrscr();
	int accNo;
	float obalance,cheque,closeBalance,balance;
	cout<<"\n Enter Account Number : ";
	cin>>accNo;
	cout<<"\n Enter Opening Balance : ";
	cin>>obalance;
	balance = obalance;
	do {

	cout<<"\n Enter Cheque Amount : ";
	cin>>cheque;
	if (cheque != 0)
	balance -= cheque;
	cout<<"\n Cheque Amount  : "<<cheque;
	cout<<"\n Running Balance: "<<balance;
	}while(cheque != 0 && balance > 0) ;
	closeBalance = balance;
	cout<<"\n Account Number : "<<accNo;
	cout<<"\n Opening Balance: "<<obalance;
	cout<<"\n Closing Balance is "<<closeBalance;
	getch();



}