#include<iostream.h>
#include<conio.h>
void main ()
{
	clrscr();
	int n = 5;
	for ( int i = 0 ; i <= n ; i++){
	for (int j = n ; j < n+i  ; j++){
	 cout<<" ";
	}
	for ( int k = 0 ; k < n-i ; k++){
	cout<<"*";
	}
		cout<<"\n" ;
	}

	getch();
}