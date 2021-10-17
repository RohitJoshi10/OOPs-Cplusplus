#include <iostream>

using namespace std;

void check(string s1, string s2)
{
	
	int x = s1.compare(s2);

	if (x != 0) {
		cout << s1
			<< " is not equal to "
			<< s2 << endl;
		if (x > 0)
			cout << s1
				<< " is greater than "
				<< s2 << endl;
		else
			cout << s2
				<< " is greater than "
				<< s1 << endl;
	}
	else
		cout << s1 << " is equal to " << s2 << endl;
}


int main()
{
	string s1,s2;
	cout<<"Enter first string:- ";
	getline(cin,s1);
	cout<<"Enter second string:- ";
	getline(cin,s2);
	check(s1, s2);
	return 0;
}
