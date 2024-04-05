#include<iostream>
#include<string>
using namespace std;
main()
{
	string s1("12345");
	string s2("abcde");
	s1.insert(4,s2);
	cout<<s1;
	s1.erase(0,5);
	cout<<"\n"<<s1;
	s2.replace(1,3,s1);
	s2.append(s1,2,3);
}
