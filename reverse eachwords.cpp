//Reverse each word in a string without Strrev
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
int i,j;
char s[40],s1[40];
cout<<"Enter any Name : ";
gets(s);
strcat(s," ");
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
           s1[j]=s[i];
           j++;
        }
        else
        {
           while(j>=0)
           {
             cout<<s1[--j];
           }
           cout<<" ";
        }
        
    }
    getch();
}
