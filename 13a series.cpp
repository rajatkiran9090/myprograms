//x-x2/2!+x3/3!-x4/4!.....  
#include<iostream.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int i,f=1,y;
double x;
char ch;
    for(i=1;i<=6;i++)
    {    
        if(i%2==0)
        {
        ch='+';
        }
        else
        {
        ch='-';
        }
        x=pow(i,i);
        f=f*i;
        cout<<ch<<" "<<x<<"/"<<f<<" ";
    }

system("pause");
}
