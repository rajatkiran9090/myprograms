//swapping the adjacent array elements in a one dimensional array
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,t;
 cout<<"\nEnter the number of elements in the array : ";
 cin>>n;
 cout<<"\nEnter array elements :\n";
 for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 cout<<"\n\n Before swapping the array elements are :\n\n ";   
 for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
 cout<<"\n\n After swapping the array elements are :\n\n ";   
 for(i=0;i<n;i+=2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
 for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    getch();
}
