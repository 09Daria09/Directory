#include "Directory.h"

Directory::Directory(string name_firm, string owner, string phone, string address, string occupation)
{
	this->name_firm = name_firm;
	this->owner = owner;
	this->phone = phone;
	this->address = address;
	this->occupation = occupation;
}

Directory Directory::Search_name(string name)
{
	Directory temp;
	ifstream r("Person.txt");
	do
	{
		r >> temp.name_firm>>temp.owner>>temp.phone>>temp.address>>temp.occupation;
		if (name == temp.name_firm)
		{
			temp.Print();
			return temp;
		}
	} while (!r.eof());
	r.close();
}

Directory Directory::Search_owner(string owner)
{
	Directory temp;
	ifstream r("Person.txt");
	do
	{
		r >> temp.name_firm >> temp.owner >> temp.phone >> temp.address >> temp.occupation;
		if (owner == temp.owner)
		{
			temp.Print();
			return temp;
		}
	} while (!r.eof());
	r.close();
}

Directory Directory::Search_phone(string phone)
{
	Directory temp;
	ifstream r("Person.txt");
	do
	{
		r >> temp.name_firm >> temp.owner >> temp.phone >> temp.address >> temp.occupation;
		if (phone == temp.owner)
		{
			temp.Print();
			return temp;
		}
	} while (!r.eof());
	r.close();
}

Directory Directory::Search_occupation(string occupation)
{
	Directory temp;
	ifstream r("Person.txt");
	do
	{
		r >> temp.name_firm >> temp.owner >> temp.phone >> temp.address >> temp.occupation;
		if(occupation == temp.owner)
		{
			temp.Print();
			return temp;
		}
	} while (!r.eof());
	r.close();
}

void Directory::Print() const
{
	cout << "Firm name : " << name_firm << endl;
	cout << "Owner : " << owner << endl;
	cout << "Phone : " << phone << endl;
	cout << "Address : " << address << endl;
	cout << "Occupation : " << occupation << endl;
}

void Directory::Save_file()
{
	ofstream save("Person.txt", ios::app);
	save <<endl<< name_firm << endl << owner << endl << phone << endl << address << endl << occupation;
	save.close();
}
