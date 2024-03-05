#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	int empNo,workHours,wageRate;
	double oPay = 0,rPay,netPay,tax;
	double avgPay,totPay = 0,totEmp = 0;
	cout<<"\nEnter Employee No : ";
	cin>>empNo;
	cout<<"\nEnter Work hours : ";
	cin>>workHours;
	cout<<"\nEnter Wage rate : ";
	cin>>wageRate;
	while( empNo != 0){
	if( workHours > 35){
	rPay = 35 * wageRate;
	oPay = (workHours - 35)*wageRate*1.5;
	}
	else
		rPay = workHours * wageRate;

	tax = (rPay+oPay)* 0.15;
	netPay = (rPay + oPay)-tax;
	cout<<"\nEmployee No : "<<empNo;
	cout<<"\nNet Pay     : "<<netPay;
	totPay += netPay;
	totEmp += 1;
	cout<<"\n";
	cout<<"\nEnter Employee No : ";
	cin>>empNo;
	cout<<"\nEnter Work hours : ";
	cin>>workHours;
	cout<<"\nEnter Wage rate : ";
	cin>>wageRate;
	}
	avgPay = totPay/totEmp;
	cout<<"\nAverage Pay is "<<avgPay;
	cout<<"\nTotal Pay is "<<totPay;
	getch();






}