#include "PhoneBook.h"
#include <iostream>
using namespace std;

PhoneBook::PhoneBook(){
	
}

void PhoneBook::add_new(){
	SingleContactor new_contactor;
	new_contactor.set_name();
	new_contactor.set_number();
	new_contactor.set_address();
	contactors.push_back(new_contactor);
}

void PhoneBook::add_new(string new_name, string new_number, string new_add){
	SingleContactor new_contactor;
	new_contactor.set_name(new_name);
	new_contactor.set_number(new_number);
	new_contactor.set_address(new_add);
	contactors.push_back(new_contactor);
}

void PhoneBook::delete_contact(){
	string name_delete;
	cout << "Delete one contactor(enter the name) : " << endl;
	cin >> name_delete;
	for (int i = 0; i < (contactors.size()); i++){
		int index = i;
		if (contactors.at(index).get_name() == name_delete){
			contactors.erase(contactors.begin()+index);
		}
	}
}

void PhoneBook::display(){
	for(int i = 0; i < (contactors.size()); i++){
	contactors.at(i).display();
	cout << endl;
	}
}