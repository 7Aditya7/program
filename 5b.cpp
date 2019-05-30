#include<iostream>
using namespace std;
int &min(int &x,int &y)
{
    if(x<y)
        return x;
    else
        return y;
}
int main()
{
    int a,b;
    cout<<"Enter two number:\t"<<endl;
    cin>>a>>b;
    min(a,b)=2;
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;
}

