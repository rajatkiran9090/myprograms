//creating a structure of an employee 
#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct addr
{
    int hno;
    char c[20];
}ad;
struct emp
{
    char nm[30];
    char des[20];
    int ec;
    int sal;
    addr ad;
}e;
void main()
{   
    cout<<"Enter The Employee Details :\n";
    cout<<"_________________________________\n\n";
    cout<<" Employee Name:   ";
    gets(e.nm);
    cout<<"\n Designation:   ";
    gets(e.des);
    cout<<"\n Employee Code: ";
    cin>>e.ec;
    cout<<"\n\nAddress:    \n";
    cout<<"___________\n";
    cout<<"\n City:          ";
    gets(e.ad.c);
    cout<<"\n House No.:     ";
    cin>>e.ad.hno;
    cout<<"\n Salary:        ";
    cin>>e.sal;
    
    cout<<"\n Full Detail of the Employee : \n";
    cout<<"___________________________________\n\n";
      cout<<" Employee Name:     "<<e.nm;
      cout<<"\n\n Designation:   "<<e.des;
      cout<<"\n\n Employee Code: "<<e.ec;
      cout<<"\n\nAddress: \n";
      cout<<"___________\n";
      cout<<"\n\n City:          "<<e.ad.c;
      cout<<"\n\n House No.:     "<<e.ad.hno;
      cout<<"\n\n Salary:        "<<e.sal;
      cout<<"\n\n";
      system("pause");
}
