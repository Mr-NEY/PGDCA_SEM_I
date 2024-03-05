#include<iostream.h>
#include<conio.h>
void main ()
{
	clrscr();
	int n ;
	cout<<"Enter times : ";
	cin>>n;
	for ( int i = 0 ; i < n ; i++){
	for (int j = 0 ; j < n - i ; j++){
	 cout<<" ";
	}
	for ( int k = 0 ; k <= i ; k++){
	cout<<"* ";
	}
		cout<<"\n" ;
	}

	getch();
}