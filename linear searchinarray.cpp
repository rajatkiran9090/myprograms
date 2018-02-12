//Linear Search
#include<iostream.h>
//#include<stdlib.h>
#include<conio.h>
void main()
{
int a[40],n,i,j,p;
char ls;
cout<<"Enter the total no. of elements: ";
cin>>n;
cout<<"Enter Elements\n ";
for(i=0;i<n;i++)
{
cout<<"Element No.: "<<i+1<<" ";
cin>>a[i];
}
cout<<"Enter the element to be searched in the array: ";
cin>>j;
for(i=0;i<n;i++)
{
    if(a[i]==j)
    {
        p=i+1;
        ls='y';
        break;
    }
    else
    {
        ls='n';
    }
}
    if(ls=='y')
    {
      cout<<"\n Search successful Item found at location :"<<p;
    }
    else
    {
        cout<<"\n Search unsuccessful Item cant found ";
    }
    getch();
//system("pause");

}
