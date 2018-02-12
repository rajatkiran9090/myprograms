// Reversing each word in a string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
   char s[40],s1[40];
   int i,k=0;
   cout<<"Enter any name : ";
   gets(s);
   cout<<"After reversing each words we get \n\n";
   for(i=0;s[i]!='\0';i++)
   {
     if(s[i]!=' ')
     {
        s1[k]=s[i];
        k++;  
     }
     else
     {
          while(k>0)
          {
           cout<<s1[--k];
          }
          cout<<" ";
     
     }
   }

getch();
}
