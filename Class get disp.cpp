//Class of student
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class student
{
private:
char nm[40];
int r;char s;
char p[15];
public:
void getdata();
void disp();
};
void student::getdata()
{
cout<<"\n Enter Name of the Student: ";
gets(nm);
cout<<"\n Phone number: ";
gets(p);
cout<<"\n Enter Rollno: ";
cin>>r;
cout<<"\n Section: ";
cin>>s;

}
void student::disp()
{
    cout<<"\n\n Students Informations Entered by you are: ";
    cout<<"\n______________________________________________\n";
    cout<<"\n\n Name of the Student: "<<nm;
    cout<<"\n\n Enter Rollno: "<<r;
    cout<<"\n\n Section: "<<s;
    cout<<"\n\n Phone number: "<<p;
}
void main()
{
    student s;
    s.getdata();
    s.disp();
    getch();
}
