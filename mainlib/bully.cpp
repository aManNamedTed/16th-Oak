#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "David";
	int playerhealth = 100;
	int enemyhealth = 100;
	bool playerwin = false;
	bool enemywin = false;
	string command;
	
	cout << "The bully picks a fight with you!" << endl;
	
	while(playerhealth > 0 && enemyhealth > 0)
	{
		cout << name << "'s HP: " << playerhealth << "\tBully's HP: " << enemyhealth << endl;
		cout << "punch: deal 5 damage" << endl;
		cout << "kick: deal 7 damage" << endl;
		cout << "run away: claim shame" << endl;
		getline(cin, command);
		
		if(command == "punch")
		{
			cout << "you punch the bully" << endl;
			enemyhealth -= 5;
		}
		else if(command == "kick")
		{
			cout << "you kick the bully" << endl;
			enemyhealth -= 7;
		}
		else if(command == "run away")
		{
			cout << "you claim shame" << endl;
			playerhealth -= 100;
		}
		if(playerhealth < 1)
		{
			enemywin = true;
		}
		else if(enemyhealth < 1)
		{
			playerwin = true;
		}
		
	}
	if(enemywin == true)
	{
		cout << "Bully wins!" << endl;
	}
	else if(playerwin == true)
	{
		cout << name << " wins!" << endl;
	}
	
	return 0;
}
