#pragma once
#include <string>
using namespace std;

class Person
{
private:
	int age;
	int pId;
	string firstName;
	string lastName;
	string midName;
	string address;
	string phoneNumber;
	string gender; // gender: giới tính

public:
	static int id; // để ở private cũng được.

	// khai báo nguyên mẫu
	Person(); 
	Person(int, int, string, string, string, string, string, string);
	int getId();
	void setId(int);
	int getAge();
	void setAge(int);
	string getFirstName();
	void setFirstName(string);
	string getLastName();
	void setLastName(string);
	string getMidName();
	void setMidName(string);
	string getAddress();
	void setAddress(string);
	string getPhoneNumber();
	void setPhoneNumber(string);
	string getGender();
	void setGender(string);
	void showInfo();
	string fullName();

};

