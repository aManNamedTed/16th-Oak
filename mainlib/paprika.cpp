/*
	The Life of a Programmer
	created: 10/31/15 10:44am
	finished: 
	author: david amante
	email: davidamante17@yahoo.com
	company: contraption*
		*thoroughly tested applications
		
	Appendage Log:
		[] not-a-command function
		[] action function
		[] at work function
		[] not showered response
		[] not teeth brushed response
		[] not dressed response
		[]
		[]
*/

/*
#include <iostream>
#include <string>
using namespace std;

string get_command();
void command_response(string, int&);
void not_a_command(string, int&);
void location(int&);

const int skill_set = 2;

int main()
{
	int position = 0;
	location(position);
	command_response(get_command(), position);	
	return 0;
}

void location(int& position)
{
	int timeleft;
	switch(position)
	{
		case 0:	
			timeleft = 30;
			bool shower, brush, dress;
			
			cout << "Suddenly, you wake up in your room. You have to be at work in 30 minutes." << endl;
			cout << "Time left before work: " << timeleft << " minutes" << endl << endl;
			
			if(shower == false)
			{
				cout << "shower: 15 minutes" << endl;
			}
			
			if(brush == false)
			{
				cout << "brush teeth: 5 minutes" << endl;
			}
			
			if(dress == false)
			{
				cout << "get dressed: 10 minutes" << endl;
			}
			
			command_response(get_command(), position);
			cout << endl;
			break;
	}	
}

string get_command()
{
	string command;
	
	cout << ">>> ";
	getline(cin, command);
	
	return command;
}

void command_response(string command, int& position)
{
	bool yes;
	
	if(command == "shower" && position == 0 && yes == false)
	{
		cout << "You're squeaky clean and consequently naked." << endl;
		
	}
	
	else
	{
		not_a_command(command, position);
	}
	
	location(position);
}

void not_a_command(string command, int& position)
{
	int count = 0;
	switch(count)
	{
		case 0:
			cout << "That is not a command. Try again." << endl;
			break;
	}
	
	count++;
	command_response(get_command(), position);
}

*/
