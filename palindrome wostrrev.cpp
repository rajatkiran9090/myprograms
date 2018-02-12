//Checking a string is palindrome or not without using Strrev
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k;
char s[40],p;
cout<<"Enter any string";
gets(s);
for(j=0;s[j]!='\0';j++)
{}
k=j;
for(i=0,j=j-1;i<k/2;i++,j--)
{
    if(s[i]!=s[j])
    {
        p='n';
    }
}
    if(p!='n')
    {
        cout<<"Entered string is a Palindrome";
    }
    else
    {
        cout<<"Entered string is not a Palindrome";
    }

getch ();
}
