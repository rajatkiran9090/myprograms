//Sum of row and column elements in an array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int a[10][10],m,i,j,n,sr=0,sc=0;
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

for(i=0;i<m;i++)
{     sr=0;
    for(j=0;j<n;j++)
    {
    sr+=a[i][j];
    }
    cout<<"\nSum of the elements of row "<<i+1<<"="<<sr;
}

for(i=0;i<m;i++)
{   sc=0;
    for(j=0;j<n;j++)
    {
    sc+=a[j][i];
    }
     cout<<"\nSum of the elements of Column "<<j+1<<"="<<sc;
}

getch();
}
