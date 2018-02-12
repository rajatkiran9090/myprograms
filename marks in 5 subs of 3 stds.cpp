// Two dimensional array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
   int a[100][10];
   int i,j,s,n,m;
   double av,av1[100];char g[100];
   cout<<"Enter The no of students : ";
   cin>>n;
   cout<<"Enter The total subjects : ";
   cin>>m;
   
cout<<"Enter the marks of students : ";
    for(i=0;i<n;i++)
    { 
        av=0,s=0;
        cout<<"\n\nMarks for student no. :"<<i+1;
        cout<<"\n___________________________\n";
        for(j=0;j<m;j++)
        {
        cout<<"\nMarks in sub : "<<j+1<<" ";
        cin>>a[i][j];
        s=s+a[i][j];
        }
        av=s/m;
        av1[i]=av;
                if(av>=90.0)
                {
                  g[i]='a';
                }
                else if (av>=80.0)
                {
                  g[i]='b';
                }
                else if (av>=70.0)
                {
                  g[i]='c';
                }
                else if (av>=60.0)
                {
                  g[i]='d';
                }
                else if (av>=50.0)
                {
                  g[i]='e';
                }
                else
                {
                  g[i]='f';
                }
    }
     for(i=0;i<n;i++)
    {  cout<<"\n\nDetails of student no. : "<<i+1;
       cout<<"\n___________________________\n";
       cout<<"\n\nAverage score of the student : "<<av1[i];
       cout<<"\n\nGrade of the student : "<<g[i];
    }
getch();


}
