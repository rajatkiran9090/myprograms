//swapping the array elements using a user defined functionn
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a[10],m;
int i,j,n;
cout<<"\nEnter the number of elements of the array : ";
cin>>n;
void swap(int [],int,int);
cout<<"\nEnter array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<"\n Before swapping the array elements are :\n"; 
   for(i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     i=0;
 swap(a,i,n);
   cout<<"\n After swapping the array elements are :\n"<<a[0]<<"  "<<a[n-1];
    cout<<endl;
    for(j=0;j<n;j++)
     {
         cout<<a[j]<<" ";
     }
 getch();
}
 void swap(int a[],int i,int n)
 {
   int j;
   int t=0;
    t=a[i];
  a[i]=a[n-1];
  a[n-1]=t;
cout<<"\n After swapping the array elements are :\n"<<a[0]<<"  "<<a[n-1];
    cout<<endl;
 }
