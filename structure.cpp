#include<iostream>
using namespace std;

struct str
{
	int age = 21;
	float salary;
	string name;
}str1;

int main()
{
	
	while ( str1.age <= 65)
	{
		cout <<"Enter name \n";
		cin >>str1.name;
		cout <<"Your name is : " <<str1.name <<endl;
		cout <<"Enter age \n";
		cin >>str1.age;
		cout <<"Your age is : " <<str1.age <<endl;
		cout <<"Enter salary \n";
		cin >>str1.salary;
		cout <<"Your Salary is : " <<str1.salary <<endl;
	}
	
	if (str1.age > 65)
		cout << "Enjoy your retirment";
		
	return 0;
}