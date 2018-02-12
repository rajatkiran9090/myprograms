//Delete the occurance of a particular no from array 
//and fill it by null
#include<iostream.h>
//#include<stdlib.h>
#include<conio.h>
void main()
{
int a[40],b[40],s,i,j,f;
cout<<"Enter the total no. of elements in the array";
cin>>s;
cout<<"Enter the array elements";
    for(i=0;i<s;i++)
    {
        cout<<"Element no.:"<<i+1<<": ";
        cin>>a[i];
    }
cout<<"Enter the element to be deleted from the array: ";
cin>>f;
    for(i=0;i<s;i++)
    {
         if(a[i]==f)  
         {
         (char)a[i]=(char)32;
         }
    }
    for(i=0;i<s;i++)
    {
        if(a[i]==(char)32)
        {
           cout<<(char)a[i]<<" ";
        }
        else
        {
           cout<<a[i]<<" ";
        }
    }
 getch();       
}
