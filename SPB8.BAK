#include<iostream.h>
#include<conio.h>
void main (){
	clrscr();
	char empName;
	int empNo , hrPayrate , rHours , oHours;
	double empTotalpay , totalPay ,rPay , oPay;
	do{
	 cout<<"\nEnter Employee No : ";
	 cin>>empNo;
	 if( empNo <= 0)
	 { break; }
	 cout<<"\nEnter Employee Name(A to z) : ";
	 cin>>empName;
	 cout<<"\nEnter Regular Hours : ";
	 cin>>rHours;
	 cout<<"\nEnter Overtime Hours : ";
	 cin>>oHours;
	 hrPayrate = 5 ;
	 rPay = rHours * hrPayrate;
	 oPay = (oHours * hrPayrate)*1.5;
	 empTotalpay = rPay + oPay;
	 cout<<"\n Employee No........= "<<empNo;
	 cout<<"\n Employee Name......= "<<empName;
	 cout<<"\n Regular Hours..... = "<<rHours;
	 cout<<"\n Overtime Hours.....= "<<oHours;
	 cout<<"\n Employee Total pay.= "<<empTotalpay;
	 cout<<"\n---------------------------------------------";
	 totalPay += empTotalpay;
	}while(empNo > 0);
	 cout<<"\n Total Pay .........= "<<totalPay;
	 getch();

}