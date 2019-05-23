#include<iostream>
using namespace std;
inline void cube(int a);
int main()
{
    int number;
cout<<"Enter the number"<<endl;
cin>>number;
cube(number);
return 0;
}
inline void cube(int a)
{
    int cube;
    cout<<"The cube of the nunber is::"<<a*a*a<<endl;
}
