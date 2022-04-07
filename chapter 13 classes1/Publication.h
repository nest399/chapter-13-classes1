#ifndef Publication_C
#define Publication_C
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

enum class PublicationType { BOOK, MAGAZINE, NEWSPAPER, AUDIO, VIDEO };

class Publication
{
//member variables
private:
	string title;			//string to hold the publication name
	string publisher;		//string to hold the publisher's name
	float price;			//float to hold the price
	int year;				//integer to hold the year of publication
	PublicationType type;	//PublicationType enum to hold the kind of publication
	int stock;				//integer to hold the number of copies on hand

//member functions
public:
	//Store the parameters in the Publication member variables.
	void storePublication(string itemTitle, string itemPublisher, double itemPrice, int itemYear, PublicationType itemType, int itemStock);

	//Display the contents of the Publication member variables
	void displayInfo();

	//Subtract 1 from stock, testing that the stock is not zero.
	void checkOut();

	//Add 1 to the stock.
	void checkIn();

	//Return the value in the title member variable.
	string getTitle()
	{
		return(title);
	}

	//Return the value in the stock member variable.
	int getStock()
	{
		return(stock);
	}

	PublicationType itemType();
};

#endif