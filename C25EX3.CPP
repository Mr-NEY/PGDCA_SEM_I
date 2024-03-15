#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	long int hour=0,minute=0,second;
	cout<<"\nEnter Second (1 - 86400) : ";
	cin>>second;
	while( second >= 3600){
	hour ++;
	second -= 3600;
	}
	while(second >= 60){
	minute ++;
	second -= 60;
	}
	if (hour>12){
	hour -=12;
	cout<<"\n"<<hour<<":"<<minute<<":"<<second<<" pm";
	}  else
	cout<<"\n"<<hour<<":"<<minute<<":"<<second<<" am";
	getch();


}