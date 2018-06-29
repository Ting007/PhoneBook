#ifndef PhoneBook_h
#define PhoneBook_h
#include <string>
#include <vector>
#include "SingleContactor.h"
using namespace std;

/*
A class called PhoneBook containing all the single contactor from class SingleContactor
save the single contactor in a vector contactors
the PhoneBook can add new contactor by input or by calling a function with argument, remove a contact and display all the contactors in the phonebook
*/
class PhoneBook: public SingleContactor{
public:
	/*
	constructor to generate a empty vector of contactors in the phonebook
	*/
	PhoneBook();
	/*
	add new contactor
	the program will ask the user to input the name, phone number and address of the contactor
	the program will add the contactors to the vector contactors of phonebook
	*/
	void add_new();
	/*
	add new contactors by input the argument of the function
	the program will take input the name, phone number and address of the contactor as argument
	the program will add the contactors to the vector contactors of phonebook
	*/
	void add_new(string, string, string);
	/*
	remove on of the contact.
	input: the program will ask the user for the name of the contactor
	output: the vector contactors of phonebook after removing the contact
	*/
	void delete_contact();
	/*
	display all the contactors in the phonebook
	output: each single contactor in the phonebook will be print out on the console
	*/
	void display();
private:
	/*
	a vectore to save all the contactors in the phonebook
	*/
	vector<SingleContactor> contactors;
};
#endif