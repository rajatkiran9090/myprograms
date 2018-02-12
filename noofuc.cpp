#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s[30];
int i,l=0,u=0;
cout<<"\n Enter Any Name :  ";
gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>'A' && s[i]<'Z')
        {
        u++;
        }
    }
cout<<"\n\n The no. of upper case characters inthe string are : "<<u;
cout<<"\n";
system("pause");

}
