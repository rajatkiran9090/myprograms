#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s1[10],c;
    int i,j,k,l;
    cout<<"\n\nEnter the first string:  ";
    gets(s);
    cout<<"\n\nEnter the second string:  ";
    gets(s1);
    for(l=0;s1[l]!='\0';l++)
    {
    
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s1[0]==s[i])
        {
             for(j=i,k=0;s1[k]!='\0';j++,k++)
             {
                if(s1[k]!=s[j])
                {
                   c='n';
                  break;
                }
                else
                {
                   c='y';
                }
                   
             }
             
        }
        if(k==l)
             {
               break;
             }
    }    
    
    if(c=='y')
    {
        cout<<"\n\nThe second string "<<s1 <<" is present inside the first string "<<s<<"\n\n";
    }
    else
    {
         cout<<"\n\nThe second string "<<s1 <<" is not present inside the first string "<<s<<"\n\n";
    }
    system("pause");
}
