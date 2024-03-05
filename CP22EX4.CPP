#include<iostream.h>
#include<conio.h>
void main (){
	clrscr ();
	int i ;
	int sum = 0 ;
	for(i=1;i<=199;i += 2)
	{
	sum += i;
	cout<<i<<"\t";
	}
	cout<<"\nThe sum is "<<sum;
	getch();


}