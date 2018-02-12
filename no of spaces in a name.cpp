//finding number of spaces in a name
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
char s[110],s1[110];
int i,j,c=0;
cout<<"Enter your name :  ";
gets(s);
i=strlen(s)-1;
cout<<"\n Length of your name is: "<<i;
for(j=0;s[j]!='\0';j++)
{
    if(s[j]==' ')
    {
        c++;
    }
}
cout<<"\n No. of spaces in the name is : "<<c;
cout<<"\n";
system("pause");
}
