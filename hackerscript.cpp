#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

string program_list(int num);
string package_list(int num);
string material_list(int num);

int main()
{
	sleep(1);
	cout << "Updating storymode" << endl;
	
	for(int i = 4; i < 10; i++)
	{
		sleep(1);
		cout << "Fetching: " << package_list(i) << "-1.7." << i << " ";
		sleep(1);
		cout << "(100%)" << endl;
		sleep(.8);
		cout << "Successfully installed " << package_list(i) << endl;
		sleep(.3);
		cout << "Installing mi documentation for storymode-2.4." << (i + 3) << endl;
		cout << "Parsing documentation for " << program_list(i) << endl;
		sleep(.5);
		
	}
	cout << "Done installing documentation for diaper, spoon, pocket-2.2, stale-toast-testing, macro_gainz3, lipbalm after 13 seconds" << endl;
	
	sleep(1);
	
	cout << "Updating tube_socks" << endl;
	for(int i = 10; i < 13; i++)
	{
		sleep(1.3);
		cout << "Fetching: " << material_list(i) << "-4." << i << " ";
		sleep(.7);
		cout << "(100%)" << endl;
		sleep(.3);
		cout << "Parsing documentation for " << material_list(i) << "-4." << i+8 << endl;
	}
	sleep(2);
	
	cout << "Levels updated: partypack" << endl;
	cout << "Enjoy the next section of the story!" << endl;
	//put prompt here
	return 0;
}

string package_list(int num)
{
	string pak;
	
	switch(num)
	{
		case 4:
			pak = "diaper";
			break;
		case 5:
			pak = "spoon";
			break;
		case 6:
			pak = "pocket";
			break;
		case 7:
			pak = "stale-toast-testing";
			break;
		case 8:
			pak = "macro_gainz3";
			break;
		case 9:
			pak = "lipbalm";
			break;
	}
	return pak;
}

string material_list(int num)
{
	string ial;
	
	switch(num)
	{
		case 10:
			ial = "wool";
			break;
		case 11:
			ial = "cotton";
			break;
		case 12:
			ial = "polyester";
			break;
	}
	return ial;
}
string program_list(int num)
{
	string doc;
	
	switch(num)
	{
		case 4:
			doc = "d.cpp";
			break;
		case 5:
			doc = "the_gem_knight.rb";
			break;
		case 6:
			doc = "kith.lsp";
			break;
		case 7:
			doc = "ekans.py";
			break;
		case 8:
			doc = "veranda.java";
			break;
		case 9:
			doc = "Q_necklace.pl";
			break;
	}
	
	return doc;
}
