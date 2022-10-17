#include"Directory.h"
using namespace std;


int main()
{
	Directory obj("Dushno", "Dasha", "+380984572432", "Koning_23", "Shower");
	obj.Save_file();
	Directory obj2("Coold", "Artem", "+3809578567", "Luna_4", "Ace");
	obj2.Save_file();
	obj.Search_name("Coold");
}