#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b,int c);
float sum(float a,int b);
float sum(int a,float b);
int main()
{
cout<<"1.sum "<<sum(4,6)<<endl;
cout<<"2.sum "<<sum(12,4,65)<<endl;
cout<<"3.sum "<<sum(1.3f,2)<<endl;
cout<<"4.sum "<<sum(23,43.12f)<<endl;
}
int sum(int a,int b)
{
return a+b;
}
int sum(int a,int b,int c)
{
return a+b+c;
}
float sum(float a,int b)
{
return a+b;
}
float sum(int a,float b)
{
return a+b;
}


