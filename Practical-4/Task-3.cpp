#include<iostream>
using namespace std;
namespace first{
    void saysomething()
    {
        cout<<"Hello\n";
    }
}

namespace second{
    void saysomething()
    {
        cout<<"World\n";
    }
}

int main()
{
    saysomething();
    return 0;
}

