#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	int cakeThickness,cakeDiameter,totCake = 0;
	int totThickness = 0, totDiameter = 0;
	int miniThickness , maxThickness=0,miniDiameter,maxDiameter=0;
	double avgThickness , avgDiameter;
	cout<<"\nEnter Cake Thickness (mm) : ";
	cin>>cakeThickness;
	cout<<"Enter Cake Diameter  (cm) : ";
	cin>>cakeDiameter;
	cout<<"\n-------------------------------------";
	miniThickness = cakeThickness;
	miniDiameter  = cakeDiameter;
	while( cakeThickness != 99 && cakeDiameter != 99){
	totThickness += cakeThickness;
	totDiameter  += cakeDiameter;
	totCake += 1;
	if (miniThickness > cakeThickness)
		miniThickness = cakeThickness;
	if (maxThickness < cakeThickness)
		maxThickness = cakeThickness;
	if (miniDiameter > cakeDiameter)
		miniDiameter = cakeDiameter;
	if (maxDiameter < cakeDiameter)
		maxDiameter = cakeDiameter;
	cout<<"\nEnter Cake Thickness (mm) : ";
	cin>>cakeThickness;
	cout<<"Enter Cake Diameter  (cm) : ";
	cin>>cakeDiameter;
	cout<<"\n-------------------------------------";
     }
	avgThickness = totThickness/totCake;
	avgDiameter  = totDiameter/totCake;
	cout<<"\nManimun Thickness is "<<miniThickness;
	cout<<"\nMaximun Thickness is "<<maxThickness;
	cout<<"\nManimun Diameter  is "<<miniDiameter;
	cout<<"\nMaximun Diameter  is "<<maxDiameter;
	cout<<"\nAverage Thickness is "<<avgThickness;
	cout<<"\nAverage Diameter  is "<<avgDiameter;
	getch();
}