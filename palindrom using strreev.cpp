//Palindrome program -reversing a string using strrev()
#include<iostream.h>
//#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
char s1[40],s[40];
int i=0,j,k;
cout<<"Enter a name :\n\n";
gets(s);
strcpy(s1,s);
strrev(s);
    if(strcmp(s,s1)==0)
    {
    cout<<"\nThe entered string is a palindrome\n\n";
    }
    else
    {
    cout<<"\nThe entered string is Not a palindrome\n\n";
    }
getch();
//system("pause");
}
