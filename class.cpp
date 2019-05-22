#include<iostream>
using namespace std;
class test
{
private:
    int data;
public:
    void pri(int d)
    {
data=d;
    }
    void out()
    {
        cout<<data;
    }

};
int main()
{
    test obj;
    obj.pri(25);
    obj.out();

    return 0;
}
