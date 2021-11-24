#include<iostream>
using namespace std;
int main(){
int arr[] = {10,20,30};

cout << *arr<<endl;

cout << arr<<endl;
//error
//arr++;
//cout << *arr;
cout<<*(arr+1);
return 0;
}
