#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
char s[40],s1[40];
int k=0,i;
cout<<"Enter any string";
cin.getline(s,40);
strcat(s," ");
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=32)
        {
                s1[k]=s[i];
                k++;
        }
        else
        {
                while(k>=0)
                {
                   cout<<s1[--k];
                }
                cout<<" ";
        }
    
    }
system("pause");
}
