#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string name;
	ofstream save_file;
	save_file.open("dayata_party_save_file.txt");
	
	cout << "Name: ";
	getline(cin, name);
	
	save_file << "Name: " << name << endl;
	
	save_file.close();
	
	return 0;
}
