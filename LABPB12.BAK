#include<iostream.h>
#include<conio.h>
void main (){
	clrscr();
	char code;
	double dis_rate,new_price,dis_amt,price;
	cout<<"\nEnter Price and Discount code : ";
	cin>>price>>code;
	switch (code){
	 case 'H':dis_amt=price*0.5;break;
	 case 'F':dis_amt=price*0.4;break;
	 case 'T':dis_amt=price*0.33;break;
	 case 'Q':dis_amt=price*0.25;break;
	 case 'Z':dis_amt=0;
	 default :cout<<"\nIvalid pricing code";
	}
	new_price=price-dis_amt;
	cout<<"\nOrginal Price    = "<<price;
	 if(code == 'Z')
	 cout<<"\nDiscount Amount  = No Discount";
	 else if( code == 'H'||code =='F'||code =='T'||code =='Q')
	 cout<<"\nDiscount Amount  = "<<dis_amt;
	// else
	// cout<<"\nIvalid pricing code";
	 cout<<"\nDiscounted Price = "<<new_price;
	 getch();

}