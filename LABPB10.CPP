#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	char grade;
	int exam_score, stud_no;
	cout<<"\nEnter Exam score and Student No : ";
	cin>>exam_score>>stud_no;
	if (exam_score >89)
	grade = 'A';
	else if (exam_score >79)
	grade = 'B' ;
	else if (exam_score >69)
	grade = 'C';
	else if (exam_score >59)
	grade = 'D' ;
	else if (exam_score < 60)
	grade = 'F';
	cout<<"\n Student No = "<<stud_no;
	cout<<"\n Grade      = "<<grade;
	getch();

}