#include<iostream>
#include<string>
using namespace std;
string readname()
{
	string name;
	cout << "please enter your name below" << endl;
	getline(cin, name);
	return name;
}

void Printname(string name)
{
	cout << "your name is " + name<<endl;
}

int main()
{
	
	Printname(readname());
}