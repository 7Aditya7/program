#include<iostream>
#define PI 3.14
using namespace std;
float area(int r);
int area(int l,int b);
int main()
{

cout<<"Area of circle is: "<<area(12)<<endl;
cout<<"Area of rectangle is: "<<area(12,15)<<endl;
return 0;
}
float area(int r)
{
return PI*r*r;
}
int area(int l,int b)
{
return l*b;
}
