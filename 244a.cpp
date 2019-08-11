#include<iostream>
using namespace std;
class A {
public:
int i;
};
class B: public virtual A
{
public:
    int j;
};
class C: public virtual A
{
public:
    int k;
};
class D: public B,public C
{
public:
    int sum;
};
int main()
{
    D obj;
    obj.i=10;
    obj.j=20;
    obj.k=30;
    obj.sum=obj.i+obj.j+obj.k;
    cout<<"Value of i is "<<obj.i<<endl;
    cout<<"Value of j is "<<obj.j<<endl;
    cout<<"Value of k is "<<obj.k<<endl;
    cout<<"Value of sum is "<<obj.sum<<endl;
    cout<<endl<<"ADITYA KHADKA"<<endl<<"6";
}
