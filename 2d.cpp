#include<iostream>
using namespace std;
void fun(int a[],int size);
int main()
{
int size;
int arr[]={1,5,6,2,4,15,16,19,3,7};
cout<<"Enter the size"<<endl;
cin>>size;

fun(arr,size);

return 0;
}
void fun(int a[],int size)
{
int i,max,min;
max=a[0];
min=a[0];
for(i=0;i<size;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
for(i=0;i<size;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
cout<<"Maximum number is:"<<max<<endl;
cout<<"Minimum number is:"<<min<<endl;
cout<<"NAME:ADITYA KHADKA\n"<<"ROLL NUMBER:6";
}
