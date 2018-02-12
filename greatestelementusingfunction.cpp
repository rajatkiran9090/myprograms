//Greatest among the array elements using a user defined function
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a[10],i,n,m;
cout<<"Enter the number of elements of the matrix : ";
cin>>n;
int gst(int [],int);
cout<<"Enter array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     m=gst(a,n);
    cout<<"The greatest element of the array is : "<<m;
    getch();
}
int gst(int a[],int n)
{
int m,i;
m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
          m=a[i];
        }
    }
return m;
}
