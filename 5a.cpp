

#include<iostream>
using namespace std;
float findAmount(float p,float t,float r)
{
float si;
si=(p*t*r)/10;
return(p+si);
}
int main()
{
float p,t,r,a;
cout<<"Enter value of p,t,r:\t";
cin>>p>>t>>r;
cout<<"Amount="<<findAmount(p,t,r);
return 0;
}
