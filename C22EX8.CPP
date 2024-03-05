#include<iostream.h>
#include<conio.h>
void main ()
{
	clrscr();
	int n;
	cout<<"Enter times : ";
	cin>>n;
	double a = 1, c ;
	cout<<"0"<<" = "<<a;
	for (int i = 1 ;i <= n; i++){
	 c = i * a ;
	 cout<<"\n"<<i<<" = "<<c;
	 a = c;
	}
	getch();

}