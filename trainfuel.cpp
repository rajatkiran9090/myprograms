//Train fuel calculation
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class student
{
    private:
    int tno;
    char des[40];
    float dis;
    float fue;
    public:
    void feedinfo();
    void showinfo();
    void calfuel();
};
void student::feedinfo()
{
    cout<<"\n Enter Train no.: ";
    cin>>tno;
    cout<<"\n Enter Distance to travell in KM: ";
    cin>>dis;
    cout<<"\n Enter Destination: ";
    gets(des);
}
void student::calfuel()
{
    if(dis<=1500)
    {
        fue=250;
    }
    else if(dis<=3000)
    {
        fue=1000;
    }
    else
    {
        fue=2500;
    }

}
void student::showinfo()
{
     cout<<"Train Information: \n";
     cout<<"____________________\n";
     cout<<" Train no.: "<<tno;
     cout<<"\n\n Distance travelling: "<<dis;
     cout<<"\n\n Destination: "<<des;
     cout<<"\n\n Fuel Required by the Train is: "
     <<fue<<" Liters";
}
void main()
{
student s;
s.feedinfo();
s.calfuel();
s.showinfo();
getch();
}
