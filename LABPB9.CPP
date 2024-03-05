#include<iostream.h>
#include<conio.h>
void main (){
	clrscr();
	int cust_no,tax_code;
	double purch_amt,sales_tax,tot_amt;
	cout<<"\n Enter customer No : ";
	cin>>cust_no;
	cout<<"\n Enter Purchase amount : ";
	cin>>purch_amt;
	cout<<"\n Enter Tax Code(0 to 3): ";
	cin>>tax_code;
	switch (tax_code){
	 case 0 :sales_tax= 0;break;
	 case 1 :sales_tax= purch_amt*0.03;break;
	 case 2 :sales_tax= purch_amt*0.05;break ;
	 case 3 :sales_tax= purch_amt*0.07;break  ;

	}
	       tot_amt = purch_amt+sales_tax;
	       cout<<"\n Sales Tax  = "<<sales_tax;
	       cout<<"\n Total Amount = "<<tot_amt;
	       getch();
}