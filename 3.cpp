//taking floating print numbers,storing them in array and displaying total and average of those numbers
#include<iostream>
using namespace std;
int main()
{
int i,n;
float *arr,total,average;
cout<<"How many numberes do you want to enter?"<<endl;
cin>>n;
arr=new float[n];//dynamic allocation
cout<<"Now enter the floating point `umbers"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
total+=arr[i];
}
average=total/n;
cout<<"Total="<<total<<endl;
cout<<"average"<<average<<endl;
delete arr;
return 0;//dynamic deallocation
}
