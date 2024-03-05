#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	int totStud =0, rollNo, examScore;
	double totScore = 0, avgScore;
	do{
	cout<<"\nEnter Roll No : ";
	cin>>rollNo;
	if (rollNo == 9999){
	break;
	}
	cout<<"Enter Exam Score : ";
	cin>>examScore;
	totScore += examScore;
	totStud += 1;
	}while( rollNo != 9999);
	if (totStud != 0)
	avgScore = totScore/totStud;
	cout<<"\n The Average Score is "<<avgScore;
	getch();

}