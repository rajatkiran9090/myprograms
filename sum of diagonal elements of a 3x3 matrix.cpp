//finding the sum of diagonal elelemtns of a 3x3 matrix
#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
int a[3][3],i,j,s=0;

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
cout<<"you have entered the Matrix as :\n";
cout<<"______________________________________\n\n";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        cout<<a[i][j]<<"  ";
    }
    cout<<"\n\n";
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        {
        s+=a[i][j];
        }
    }
}
cout<<"Sum of the diagonal elements are : "<<s;
system("pause");
}
