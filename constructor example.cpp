//Train constructor
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class student
{
    private:
    int rno;
    float per;
    public:
    student()
    {
    rno=0;
    per=0;
    }
    student(int r,float p)
    {
    rno=r;
    per=p;
    }
    void disp()
    {
        cout<<"\nRoll no. of the student is : "<<rno;
        cout<<"\nPercentage of the student is : "<<per;
    }
    
};
void main()
{
 student s(10,75);
 s.disp();
 getch();
}
