/*
// using reverse()
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a string\n";
	getline(cin,str);
	reverse(str.begin(), str.end());
        cout <<"Reverse of the string:-  "<<str;
	return 0;
}
*/


// without using reverse function
#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
for (int i=str.length()-1; i>=0; i--)
	cout << str[i];
}

int main()
{
	string s;
	cout<<"Enter a string\n";
	getline(cin,s);
	cout<<"Reverse of the string:-  "<<reverse(s);
	return 0;
}

