#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct area
{
    int l;
    double b;
}ar;
void main()
{
    area a;
    void findarea(area);
    cout<<"\nEnter the length of the rectanlge : ";
    cin>>a.l;
    cout<<"\nEnter the breadth:                  ";
    cin>>a.b;
    findarea(a);
    system("pause");
}
void findarea(area a)
{
    double x;
    x=a.l*a.b;
    cout<<"\nArea of the rectangle is : "<<x;
}
