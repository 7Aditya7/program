#include<iostream>
#include<iomanip>
using namespace std;
void fun1(int x);
void fun2(int y);
int main()
{
int n,i;
int ch;
cout<<"Enter 1 to solve fun1()\nEnter 2 to solve fun2()"<<endl;
cin>>ch;
switch(ch)
{
case 1:
{
fun1(7);
break;
}
case 2:
{
fun2(2);
break;
}
}
return 0;
}

void fun1(int x)
{
    int sq,cu,i;
     cout<<"________________________________________________\n";
    cout<<"Number\t|"<<"\tsquares\t|" <<"\tcubes "<<endl;
    cout<<"________________________________________________|\n";
    for(i=7;i<=22;i++)
  {
    sq=i*i;
    cu=i*i*i;
    cout<<i <<"\t|   " <<  sq     <<"\t\t|   " <<setw(6)<<cu    <<"\t\t|   "<<endl;
  }
    cout<<"________________________________________________|\n";
}
void fun2(int y)
{
    int div,i;
    for(i=y;i<=50;i++)
    {
    if(i/8!=0)
    {
        cout<<i<<"\n";
    }
    }
}
