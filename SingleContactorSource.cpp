#include "SingleContactor.h"
#include <vector>
#include <iostream>

using namespace std;

SingleContactor::SingleContactor(){
	name = "";
	address = "";
	phone_number = "";
}

string SingleContactor::get_name(){
	return name;
}

void SingleContactor::set_name(){
	string contact_name;
	cin.ignore(100, '\n');
	cout << "Please enter the name of the contactor: "<< endl;
	getline(cin, contact_name);
	name = contact_name;
}
void SingleContactor::set_name(string new_name){
	name = new_name;
}

string SingleContactor :: get_number(){
	return phone_number;
}

void SingleContactor::set_number(){
	string number;
	cout << "Please enter the telephone number of the contactor: " << endl;
	getline(cin, number);
	phone_number = number;
}

void SingleContactor::set_number(string new_number){
	phone_number = new_number;
}

string SingleContactor::get_address(){
	return address;
}

void SingleContactor::set_address(){
	string contact_add;
	cout << "Please enter the address of the contactor: " << endl;
	getline(cin, contact_add);
	address = contact_add;
}

void SingleContactor::set_address(string new_add){
	address = new_add;
}

void SingleContactor :: display(){
	cout << "Contact name: " << name << endl;
	cout << "Telephone Number: " << phone_number << endl;
	cout << "Post Addresss: " << address << endl;
}

