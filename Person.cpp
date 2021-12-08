#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {	// khởi tạo mặc định.
	this->age = 0;
	this->pId = 0;
	this->firstName = "";
	this->lastName = "";
	this->midName = "";
	this->address = "";
	this->phoneNumber = "";
	this->gender = "";
}

Person::Person(int id, int age, string firstName, string lastName, string midName,
	string address, string phoneNumber, string gender) // ?? id hay pId
{ 
	// gọi hàm tạo
	setId(id);
	setAge(age);
	setFirstName(firstName);
	setLastName(lastName);			// tại sao phải gọi nó thêm làm gì?
	setMidName(midName);
	setAddress(address);
	setPhoneNumber(phoneNumber);
	setGender(gender);
}

int Person::id = 100; // do dùng static

void Person::setAge(int age) {
	this->age = (age >= 0) ? age : 0;
}

void Person::setId(int id) {
	this->pId = (id >= 100) ? id : Person::id++;
}

void Person::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
}

void Person::setMidName(string midName) {
	this->midName = midName;
}

void Person::setAddress(string address) {
	this->address = address;
}

void Person::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Person::setGender(string gender) {
	this->gender = gender;
}


int Person::getAge() {
	return this->age;
}

int Person::getId() {
	return this->pId;
}

string Person::getAddress() {
	return this->address;
}

string Person::getFirstName() {
	return this->firstName;
}

string Person::getLastName() {
	return this->lastName;
}

string Person::getMidName() {
	return this->midName;
}

string Person::getPhoneNumber() {
	return this->phoneNumber;
}

string Person::getGender() {
	return this->gender;
}

void Person::showInfo() {
	cout << "==============================================\n";
	cout << "ID: " << getId() << "\n" // dùng getId() hoặc pId đều đc.
		<< "First Name: " << getFirstName() << endl
		<< "Mid Name: " << getMidName() << endl
		<< "Last Name: " << getLastName() << endl
		<< "Gender: " << getGender() << endl
		<< "Age: " << getAge() << " years old." << endl
		<< "Address: " << getAddress() << endl
		<< "Phone Number: " << getPhoneNumber() << endl;
	cout << "==============================================\n";
}

string Person::fullName() {
	return getFirstName() + " " + getMidName() + " " + getLastName();
}