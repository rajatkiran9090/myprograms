//Linear search in array

#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
	int a[5];char s;
	int i,j,p;
	cout<<"Enter Array elements\n";
	for(i=0;i<5;i++)
	{
	    cin>>a[i];
	}
	cout<<"Enter Element to be searched\n";
	cin>>j;
		for(i=0;i<5;i++)
	{
	    if(a[i]==j)
	    {
	        s='y';
	        p=i;
            break;
	    }
	    else
	    {
	     s='n';
	    }
	}
	if(s=='y')
	{
	    cout<<"The number is found at index number "<<p+1<<" of the array\n\n";
	}
	else
	{
	    cout<<"The number is not found\n\n";
	}
	system("pause");
}
