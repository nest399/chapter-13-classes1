//	Eris Suther
//	CIS 1202 101
//	3/16/2022

#include "..\..\ErisPersonalLibrary\ErisPersonalLibrary\ErisPersonalLibrary.h"
#include "Publication.h"

void getPublicationInfo(Publication&);

int main()
{
	Publication item;

	//user inputs publication info
	getPublicationInfo(item);

	//display the title
	cout << "the title is: " << item.getTitle()<<endl;

	item.checkOut();

	//Call getStock and display the number of copies in stock
	cout << item.getStock() << " in stock" << endl;

	//Call checkIn
	item.checkIn();

	//Call getStock and display the number of copies in stock
	cout<<item.getStock()<<" in stock"<<endl;

	endProgram();
}

void getPublicationInfo(Publication &item)
{
	//Prompt for input for the information about a publication, then call the storePublication member function.
	string itemTitle;
	string itemPublisher;
	double itemPrice;
	int itemYear;
	PublicationType itemType;
	int itemStock = 0;
	int typeMenu = 0;

	cout << "Enter title: ";
	getline(cin, itemTitle);
	cout << "Enter publisher: ";
	getline(cin, itemPublisher);
	cout << "Enter price: ";
	itemPrice=validateDouble();
	cout << "Enter year: ";
	itemYear=validateInteger();
	itemType = item.itemType();
	cout << "Enter stock: ";
	itemStock = validateInteger();
	item.storePublication(itemTitle, itemPublisher, itemPrice, itemYear, itemType, itemStock);
}
