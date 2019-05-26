#include<iostream>
using namespace std;
int perimeter(int a);
int perimeter(int l,int b);
int main()
{
cout<<"Perimeter of equilaterial triangle "<<perimeter(12)<<endl;
cout<<"Perimeter of rectangle "<<perimeter(12,14);
return 0;
}
int perimeter(int a)
{
return 3*a;
}
int perimeter(int l,int b)
{
return l*b;
}
