#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name,address;
	int age, height;
	char gender;
	bool married;
	cout << "name :" << endl;
	cin >> name;
	
	cout << "age" << endl;
	cin >> age;
	
	cout << "gender" << endl;
	cin >> gender;
	
	cout << "address" << endl;
	cin >> address;

	cout << "height" << endl;
	cin >> height;
	
	cout << "married" << endl;
	cin >> married;
	
	
	
	cout << "My name is" << name << endl;
	cout << "I am " << age << endl;
	cout << "I am a" << gender << endl;
	cout << "I live in" << address << endl;

	
	cout << "My height is" << height << endl;
	cout << "married :" << married << endl;
	
	return 0;
}
