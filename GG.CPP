#include<iostream.h>
#include<conio.h>
void main (){
	clrscr();
	int totStud = 0;
	int totFemale = 0;
	int totMale = 0;
	int course ;
	char gender;
	do {
	 cout<<"\n Enter Student Details Gender(F/M), course : ";
	 cin>>gender>>course;
	 if ( course == 18500 ){
	 if ( gender == 'F')
	 totFemale = totFemale + 1;
	 if ( gender == 'M')
	 totMale = totMale + 1;
	 }
	 totStud = totFemale + totMale;
	}while( totStud < 3);
	cout<<"\n Total Male Enroll is "<<totMale;
	cout<<"\n Total Female Enroll is "<<totFemale;
	cout<<"\n Total students enroll is "<<totStud;

	getch();

}