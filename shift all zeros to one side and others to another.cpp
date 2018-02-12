//Delete the occurance of a particular no from array 
//and fill it by 0 and then rearrange them
#include<iostream.h>
//#include<stdlib.h>
#include<conio.h>
void main()
{
int a[40],b[40],s,i,j=0,f;
cout<<"\nEnter the total no. of elements in the array : ";
cin>>s;
cout<<"\nEnter the array elements\n";
    for(i=0;i<s;i++)
    {
        cout<<"\nElement no.:"<<i+1<<": ";
        cin>>a[i];
    }
cout<<"\nYou have entered the elements as : \n\n";
       for(i=0;i<s;i++)
    {
           cout<<a[i]<<" ";
    }
cout<<"\n\nEnter the element to be deleted from the array:  ";
cin>>f;
cout<<"\nAfter replacing "<<f<<" by 0 we get\n \n";
    for(i=0;i<s;i++)
    {
         if(a[i]==f)  
         {
          a[i]=0;
         }
    }
    for(i=0;i<s;i++)
    {
           cout<<a[i]<<" ";
    }
  
    for(i=0;i<s;i++)
    {
           if(a[i]==0)
           {
             b[j]=a[i];
             j++;
           }
    }
       for(i=0;i<s;i++)
    {
           if(a[i]!=0)
           {
             b[j]=a[i];
             j++;
           }
    }
cout<<"\n\nAfter rearranging elements we get\n\n";
      for(i=0;i<s;i++)
    {
           cout<<b[i]<<" ";
    }
    
 getch();       
}
