#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	float radius,diameter,circumference,area,pi=3.1419;
	cout<<"\nEnter Radius : ";
	cin>>radius;
	diameter = 2 * radius;
	circumference = 2 * pi * radius ;
	area = pi * radius * radius ;
	cout<<"\nDiameter : "<<diameter;
	cout<<"\nCircumferemce : "<<circumference;
	cout<<"\nArea : "<<area;
	getch();

}