//Checking a string is paliondrome or not without using strrev

#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
char s[40],s1[40]="",t;
int i=0,j,l,k;
cout<<"Enter any name :\n\n ";
gets(s);
l=strlen(s)-1;
j=strlen(s);
for(k=0;k<j;k++)
{
    s1[k]=s[k];
}
 

    while(i<l)
    {
        t=s[i];
        s[i]=s[l];
        s[l]=t;
        i++;
        l--;
    }
  cout<<"\n\nYou have entered : \n\n"<<endl;
  puts(s1);
    cout<<"\n\nAfter reversing it we get : \n\n"<<endl;
    puts(s);
    for(i=0;i<j;i++)
    {
        if(s[i]==s1[i])
        {
           t='y';
        }
        else
        {
           t='n';
           break;
        }
    }
    if(t=='y')
    {
    cout<<"\n\nThe Name entered by you is a palindrome :\n\n";
    }
    else
    {
        cout<<"\n\nThe Name entered by you is not a palindrome :\n\n";    
    }
   
system("pause");
}
