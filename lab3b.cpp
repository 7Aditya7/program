
//lab 3:passint arguments to function
//(a)Program to demonstrate pass by value.
#include<iostream>
using namespace std;
void decrease(int &b)
{
    b=b-2;

}
int main()
{
    int x=20;
    cout<<"Value of x before calling decrease()"<<endl;
    cout<<x<<endl;
    decrease(x);
    cout<<"Value of x after calling decrease() is:"<<endl;
    cout<<x;
    return 0;

}
