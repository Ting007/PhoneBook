#ifndef SingleContactor_h
#define SingleContactor_h
#include <string>
using namespace std;

/*
single contactor class used to store the information for each contactors in the phonebook
each single contactor has name, phone number, address
each single contactor can change name, phone number, address and print out their information
*/
class SingleContactor
{
public:
	/*
	constructor used to set up all the private member in the class
	set name, phonenumber, address as the empty string initially
	*/
	SingleContactor();
	/*
	accessor
	return the name of the single contactor
	*/
	string get_name();
	/*
	mutator 
	ask the user to input the name of the contactor
	set the name of the contactor to the input
	*/
	void set_name();
	/*
	mutator
	input: string the name of the contactor
	return: set the name of the contactor to the string argument
	*/
	void set_name(string);
	/*
	accessor
	return the name of the contactor
	*/
	string get_number();
	/*
	mutator
	ask the user to input the phone number of the contactor
	set the phone number to that contactor in the phone book
	*/
	void set_number();
	/*
	mutator
	input:  the phone number of the contactor
	set the phone number to that contactor in the phone book
	*/
	void set_number(string);
	/*
	accsssor
	return the address of that single contactor
	*/
	string get_address();
	/*
	mutator
	ask the user to input the address of the contactor
	set the address to that contactor in the phone book
	*/
	void set_address();
	/*
	mutator
	input: the address of the contactor
	set the address to that contactor in the phone book
	*/
	void set_address(string);
	/*
	display the name, phone number, address of that single contactor
	*/
	void display();
private:
	/*
	The name of the contactor
	*/
	string name;
	/*
	The phone number of the contactor
	*/
	string phone_number;
	/*
	the address of that contactor
	*/
	string address;
};

#endif