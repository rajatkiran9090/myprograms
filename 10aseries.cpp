#include<iostream.h>
#include<stdlib.h>
void main()
{
int i,j=2;
int s=0;
char ch;
    for(i=1;i<5;i++)
    {
        if((i*2+s)%2==0)
        {
         ch='+';
        }
        else
        {
         ch='-';
        }
        cout<<ch<<i*2+s<<"/"<<j*4+1<<" ";
        s++;j++;
    }    
system("pause");
}
