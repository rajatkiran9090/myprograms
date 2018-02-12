//1 -4 7 -10.....-40 
#include<iostream.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int i,y;
double x;
char ch;
 for(i=-2;i<40;)
 {
   i=i+3;
   if(i%2==0)
   {
     ch='-';
   }
  
   cout<<ch<<i<<" ";
 }

system("pause");
}

