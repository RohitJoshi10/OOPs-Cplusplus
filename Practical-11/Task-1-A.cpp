#include<iostream>
using namespace std;
class Parent
{
    public:
    void DisplayParent()
    {
        cout<<"Parent class method"<<endl;
    }
};

class Child:public Parent
{
    public:
    void DislpayChild()
    {
       DisplayParent();
    }
};

int main()
{
    Child obj;
    obj.DislpayChild();
    return 0;
}
