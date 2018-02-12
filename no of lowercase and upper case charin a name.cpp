//finding number of lowercase and uppercase characters in a name
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main()
{
char s[50],s1[50];
int i,j,k;
int lc=0;
int uc=0;int n=0;
cout<<"Enter your name : ";
cin.getline(s,50);
cout<<"\n\n The total length of the name is : "<<strlen(s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]>='A' && s[i]<='Z')
    {
        uc=uc+1;
    }
 }
 cout<<"\n\n No of Uppercase characters in the name is : "<<uc;
 
 for(j=0;s[j]!='\0';j++)
 {
    if(s[j]>='a'&&s[j]<='z')
    {
        lc=lc+1;
    }
 }
cout<<"\n\n No of Lowercase characters in the name is : "<<lc;
for(k=0;s[k]!='\0';k++)
{
    if(s[k]>=48&&s[k]<=57)
    {
        n++;
    }
}
cout<<"\n\n The no. of digits in the name is : "<<n;
cout<<"\n";
system("pause");
}
