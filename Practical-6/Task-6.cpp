#include<iostream>
using namespace std;
int main(){
string a = "Hello";
cout<<&a;
a[0]='J';
cout<<&a;
cout<<a;
return 0;
}

//In general, C strings are mutable. The C++ language has its own string class.
// It is mutable. In both C and C++, string constants (declared with the const qualifier) are immutable, 
//but you can easily “cast away” the const qualifier, so the immutability is weakly enforced
