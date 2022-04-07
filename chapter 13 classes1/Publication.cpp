#include "Publication.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Store the parameters in the Publication member variables.
void Publication::storePublication(string itemTitle, string itemPublisher, double itemPrice, int itemYear, PublicationType itemType, int itemStock)
{
	title = itemTitle;
	publisher = itemPublisher;
	price = itemPrice;
	year = itemYear;
	type = itemType;
	stock = itemStock;
}

//Display the contents of the Publication member variables
void Publication::displayInfo()
{
	cout << "The title is:\t" << title<<endl;
	cout << stock <<" in stock"<< endl;

}

//Subtract 1 from stock, testing that the stock is not zero.
void Publication::checkOut()
{
	stock--;
}

//Add 1 to the stock.
void Publication::checkIn()
{
	stock++;
}

//user enters item type
PublicationType Publication::itemType()
{
	int typeMenu = 0;
	PublicationType temp;
	cout << "1: book\n2: magazine\n3: newspaper\n4: audio\n5: video\nEnter media form: ";
	while (!(cin >> typeMenu) || cin.fail() || (typeMenu < 1) || (typeMenu > 5))
	{
		cout << "whoops try again" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}
	temp=static_cast<PublicationType>(typeMenu);
	return(temp);
}
