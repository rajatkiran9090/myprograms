//Reversing a string

#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void main()
{
char s[40];
int i=0,j,k;
cout<<"Enter a name :\n";
gets(s);
j=strlen(s)-1;
while(i<j)
{
k=s[i];
s[i]=s[j];
s[j]=k;
i++;
j--;
}
puts(s);
system("pause");
}
