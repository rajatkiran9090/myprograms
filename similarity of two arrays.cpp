//finding the similarity of elelemtns of two 3x3 array

#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
int a[3][3],b[3][3],i,j;
char s;
cout<<"Enter Elements of the First Matrix :\n";
cout<<"______________________________________\n\n";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
    cout<<"\n";
}
cout<<"Enter Elements of the Second Matrix :\n";
cout<<"______________________________________\n\n";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cin>>b[i][j];
    }
    cout<<"\n";
}
cout<<"you have entered the first Matrix as :\n";
cout<<"______________________________________\n\n";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<a[i][j]<<"  ";
    }
    cout<<"\n\n";
}
cout<<"you have entered the second Matrix as :\n";
cout<<"______________________________________\n\n";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<b[i][j]<<"  ";
    }
    cout<<"\n\n";
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
       if(a[i][j]!=b[i][j])
       {
       s='n';
       break;
       }
       else
       {
       s='y';
       }
    }
 }
 if(s=='y')
 {
 cout<<"Both the above matrices are similar\n\n";
 }
 else
 {
 cout<<"Both the above matrices are not similar\n\n";
 }

system("pause");
}
