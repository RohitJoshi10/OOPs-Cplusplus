#include <iostream>
using namespace std;

int main()
{

    string s;
    int i,size;
    int flag = 0;
    
    cout << "Enter a string"<<endl;
    getline(cin,s);
    
    size = s.length();
    
    for(i=0;i < size ;i++){
        if(s[i] != s[size-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        cout <<s << " is not a palindrome" << endl; 
    }    
    else {
        cout <<s << " is a palindrome" << endl; 
    }
    
    return 0;
}
