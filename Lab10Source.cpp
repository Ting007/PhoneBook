/*
Name: Ting Wang
Date: Nov 12 2014
Program: Polymorphism in Object Oriented.
Purpose: Implement a phone book class that stored the contact information using container vector.
Preconditions: PhoneBook with a bunch of contactors
Postconditions: Choose the program and manipulate the contactor in the PhoneBook as described in the program
*/

#include "PhoneBook.h"
#include "SingleContactor.h"
#include <iostream>
using namespace std;
int menu();

/*
creat a object book_contact
add a bunch of contactors to the book_contact
call the function menu display the menu on the console
input the choice for the function
finish the program choosen in the menu: add new contact; remove contactors, display all the contactors, end the program
return 0 to make sure the program is working
*/
int main(){
	PhoneBook book_contact;
	book_contact.add_new("Mike", "8002223333", "505 rose street");
	book_contact.add_new("John", "8003332222", "510 rose street");
	book_contact.add_new("Tim", "8883331111", "100 Euclid rd");
	book_contact.add_new("Mary", "8593236666", "100 washington Ave");
	int program;
	program = menu();
	
	do{
		switch (program){
		case 1: book_contact.add_new(); break;
		case 2: book_contact.delete_contact(); break;
		case 3: book_contact.display(); break;
		case 4: return 0;
		}
		program = menu();
	} while (program < 5 && program > 0);
	system("pause");
	return 0;
}

/*
menu function 
display all the program on the console and ask the user the make a choice
input: the user choose one of the program or end the program .
if the input failed, rerun the program
return the number of the choice.
*/

int menu(){
	bool flag = true;
	int option = 0;
	while(flag) {
	cout << "Please choose from the following options: " << endl;
	cout << "1. Add a new contact." << endl;
	cout << "2. Delete a contact." << endl;
	cout << "3. Show the whole phone book content" << endl;
	cout << "4: to end the program." << endl;
	cin >> option;
	if (option < 5 && option > 0){
		flag = false;
	}
	else{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Invalid input" << endl;
		
	}
	} 
	return option;
}