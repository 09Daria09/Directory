#pragma once
#include <fstream>
#include<iostream>
using namespace std;

class Directory
{
	string name_firm;
	string owner;
	string phone;
	string address;
	string occupation;
public:
	Directory() = default;
	Directory(string name_firm, string owner, string phone, string address, string occupation);
	Directory Search_name(string name);
	Directory Search_owner(string owner);
	Directory Search_phone(string phone);
	Directory Search_occupation(string occupation);
	void Print()const;
	void Save_file();
};

