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

using namespace first;
using namespace second;
int main()
{
    saysomething();
    return 0;
}
