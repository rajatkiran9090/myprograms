//Sum of both diagonals
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int a[10][10],m,i,j,n,s1=0,s2=0;
cout<<"\nEnter no of rows and columns of array: ";
cin>>m>>n;
cout<<"\nEnter the array elements: ";
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
    cin>>a[i][j];
    }
}
cout<<"You have entered the matrix as :";
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
    cout<<a[i][j]<<" ";
    }
    cout<<"\n";
}

for(i=0;i<m;i++)
{
    s1+=a[i][i];
    s2+=a[m-i-1][i];
}
cout<<"\nSum of main diagonal elements: "<<s1;
cout<<"\nSum of other diagonal elements: "<<s2;
getch();
}
