//capitalize each word of a string
/*fgets(string,size,stdin); In this example, string is the name of a char array, 
a string variable; size is the amount of text to input plus one, 
which should be the same size as the char array;
and stdin is the name of the standard input device, as defined in the stdio.h header file.*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int i;
char s[10];
cout<<"Enter any name : ";
//fgets(s,30,stdin);//fgets(string,size,stdin)
cin.getline(s,20);
    s[0]=toupper(s[0]);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
          s[i+1]=toupper(s[i+1]);
        }
    }
cout<<"\n\nNewly updated name is : "<<s;

getch();
}
