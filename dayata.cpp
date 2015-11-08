/*
	created: nov 3, 2015. 11:00am
	finished:
	creator: david amante
	email: davidamante17@yahoo.com
	
	future patches in readme.txt
*/
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string get_command();
void check_saved_game();
void description();
void get_name(string p, string& name);
void goodbye(string);
void level_one(string);
void level_two(string);
void level_two_and_a_half(string, bool, bool);
void level_three_determiner(string, bool, bool, bool, bool, bool);
void level_four(string);
void level_five(string);
void level_six(string);

int main()
{
	string name;
	
	description();
	
	//check_saved_game();

	get_name("Before we begin, what is your name?", name);

	//start of game
	//level_one(name);

		
	//continue coding, yo!
	level_two(name);
	return 0;
}

string get_command()
{
	string command;
	
	cout << "> ";
	getline(cin, command);
	cout << endl;
	
	if(command == "save" || command == "Save")
	{
		
	}
	return command;
}

void level_one(string name)
{
	string command;
	
	cout << endl;
	cout << "Upon stepping foot in your apartment after a long day at work, your home" << endl; 
	cout << "phone rings.";
	cout << " (Who owns a home phone anymore? What the hell?)" << endl;
	command = get_command();
	while(command != "answer" && command != "Answer" && command != "get phone" && command != "answer phone" && command != "get the phone" && command != "answer the phone")
	{
		cout << "Get the phone, dummy!" << endl;
		command = get_command();
	}
	
	if(command == "answer" || command == "Answer" || command == "get phone" || command == "answer phone" || command == "get the phone" || command == "answer the phone")
	{
		cout << "???: Dude! Party on 32nd and Elm! That cutie from your sociology class is here!! You coming??" << endl;
		command = get_command();
		
		while(command != "who is this?")
		{
			if(command == "yes" || command == "Yes")
			{
				cout << "You're gonna accept a party invitation from someone whom you don't know?!" << endl;
			}
			else if(command == "no" || command == "No")
			{
				cout << "Aw c'mon, it could be fun!" << endl;
			}
			else if(command == "who is this")
			{
				cout << "C'mon, " << name << "." << " You're asking a question, not dismissing this ??? person." << endl;
				cout << "Hint: Use a question mark, dummy." << endl;
			}
			else if(command == "why?" || command == "why" || command == "Why?" || command == "Why")
			{
				cout << "Why? " << name << "! C'mon, it's a party!" << endl;
			}
			cout << "Ask who's calling!" << endl;
			command = get_command();
		}
		
		if(command == "who is this?")
		{
			cout << "???: It's Richard! C'mon man! Work couldn't've been THAT bad!";
			getchar();
			cout << "Richard: So are you coming or not?" << endl;
			command = get_command();
			while(command != "yes" && command != "Yes" && command != "Yeah" && command != "yeah" && command != "no" && command != "No" && command != "i guess")
			{
				cout << "Simple yes/no question here, " << name << "." << endl;
				command = get_command();
			}
			if(command == "yes" || command == "Yes" || command == "Yeah" || command == "yeah")
			{
				cout << "Richard: GOOD!" << endl;
				cout << "Richard: It's still early--so you probably have an hour before we 'turn up'." << endl;
				cout << "Richard: I guess that's what this generation's culture calls it nowadays." << endl;
				cout << "Richard: Nevertheless, I better see you here tonight!" << endl;
				cout << "*end call*" << endl;
				level_two(name);
			}
			
			else if(command == "no" || command == "No")
			{
				cout << "Really, " << name << "? You chose to play a game called \"Day at a Party\"" << endl;
				cout << "and didn't go to the party?" << endl;
				cout << "Get out." << endl << endl;
				cout << "Game Over" << endl;
			}
			
			else if(command == "i guess")
			{
				cout << "Richard: Aw c'mon, pally! Chin up!";
				getchar();
				cout << "Richard: It'll be oodles of fun! Swear!";
				getchar();
				cout << "Richard: You've got an hour before I get too drunk!";
				getchar();
				cout << "*you, thinking*: Richard always prided himself on his tolerance of booze. >.>";
				level_two(name);
			}
		}	
	}
}


void level_two(string name)
{
	int minutes = 60;
	string command;
	
	bool leave = false;
	bool nap = false;
	bool shower = false;
	bool dress = false;
	bool teeth = false;
	bool dressb4shower = false;
	bool nonap = false;
	getchar();
	cout << string(30, '\n');
	
	cout << "Upon hearing the news of an uproarious shindig occurring in the near future," << endl;
	cout << "You find yourself tired, surprised, and other words expressing mood." << endl << endl;
	
	do
	{
		//shower boole combinations
		if((command == "shower" || command == "Shower") && shower == true)
		{		
			cout << "You've already showered, you germaphobe!" << endl;			
		}	
		else if((command == "shower" || command == "Shower") && shower == false && dress == true) 
		{
			cout << "Laundry day is tomorrow, " << name << "." << endl;
			cout << "You just put on your last set of clean clothes..." << endl;
			cout << "You can't shower now!" << endl;
			dressb4shower = true;
		}
		
		else if((command == "shower" || command == "Shower") && shower == false)
		{
			cout << "You're squeaky clean and consequently, nude." << endl;
			minutes -= 15;
			shower = true;
		}
		
		//get dressed boole combinations
		if(command == "get dressed" && dress == true)
		{
			cout << "It's not even THAT cold out! You don't need more clothes!" << endl;
		}
		else if(command == "get dressed" && shower == false)
		{
			cout << "You stink from today's work, but at least you're dressed!" << endl;
			minutes -= 10;
			dress = true;
		}
		else if(command == "get dressed" && shower == true)
		{
			cout << "You're dressed to the nines for this /generic holiday/ party!" << endl;
			cout << "AND you smell like newborn baby's butt. (which is a good thing)" << endl;
			minutes -= 10;
			dress = true;
		}
		
		//brush teeth boole combinations
		if(command == "brush teeth" && teeth == true)
		{
			cout << "No amount of brushing will help that aureoline mess. Sorry, " << name << "." << endl;
		}
		else if(command == "brush teeth")
		{
			cout << "You picked out all that gunk from lunch! Nice!" << endl;
			cout << "but at least your breath smells.. acceptable. (:" << endl;
			minutes -= 5;
			teeth = true;
		}
		
		//nap boole combinations
		if((command == "nap" || command == "Nap") && (dress == false && teeth == false && shower == false))
		{
		    nap = true;
			cout << "Nice.";
			getchar();
			cout << "Choice.";
			level_two_and_a_half(name, teeth, shower);
		}
		else if((command == "nap" || command == "Nap") && (dress == false && teeth == true && shower == false))
		{
		    nap = true;
			cout << "Umm.. okay? You brushed your teeth to take a nap." << endl;
			cout << "Quite the odd one you are, hmm?" << endl;
			cout << "Just know--your adventure MIGHT get real when you wake up." << endl;
			level_two_and_a_half(name, teeth, shower);
		}
		else if((command == "nap" || command == "Nap") && (dress == true && teeth == false && shower == false))
		{
			cout << "You got dressed to take a nap with the stink of the day still equipped?" << endl;
			cout << "No siree-" << name << ". That's gross." << endl;
			cout << "No napz 4 u!" << endl;
			nonap = true;
		}
		else if((command == "nap" || command == "Nap") && (dress == true && teeth == true && shower == false))
		{
			cout << "You wanna take a nap while you still wreak of work, less the bad breath?" << endl;
			cout << "Nah, " << name << "." << endl;
			cout << "You're ready for that there party." << endl;
			nonap = true;
		}
		else if((command == "nap" || command == "Nap") && (dress == true && teeth == true && shower == true))
		{
			cout << "You got all dolled up to take a nap?" << endl;
			cout << "No way, " << name << "-ay." << endl;
			cout << "You're ready for the party!" << endl;
			nonap = true;
		}
		else if((command == "nap" || command == "Nap") && (dress == true && teeth == false && shower == true))
		{
			cout << "Great " << name << ", breather-of-dragons, You refused to brush your teeth" << endl;
			cout << "but you are essentially party-ready!" << endl;
			nonap = true;
		}
		else if((command == "nap" || command == "Nap") && (dress == false && teeth == true && shower == true))
		{
		    cout << "Nah, you're too close to being ready." << endl;
		    cout << "No nap for you!" << endl;
			nonap = true;
		}
		else if((command == "nap" || command == "Nap") && (dress == false && teeth == false && shower == true))
		{
			cout << "BREH.";
			getchar();
			cout << "BRUH.";
			getchar();
			cout << "You're gonna shower and take a nap.. in the nakey?" << endl;
			cout << "Uh.";
			getchar();
			cout << "Uhhhh...";
			getchar();
			cout << "Sleep tight!";
			level_two_and_a_half(name, teeth, shower);
		}		

		//leave boole combinations
		if((command == "leave" || command == "Leave") && (dress == false && teeth == false && shower == false))
		{
			cout << "YEAH! Forget about being presentable for that cutie from sociology!" << endl;
			cout << "You're TIRED. You might as well have just taken a nap ANYWAY." << endl;
			cout << "Narrator: *audible grimmace*" << endl;
			level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
		
		else if((command == "leave" || command == "Leave") && (dress == false && teeth == true && shower == false))
		{
			cout << name << ". You brushed your teeth and that's all you" << endl;
			cout << "need to be ready for a party? Good luck, bud." << endl;
			level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
		
		else if((command == "leave" || command == "Leave") && (dress == false && teeth == false && shower == true))
		{
		    cout << "YO!";
		    getchar();
		    cout << "OKAY!";
		    getchar();
		    cout << "NAKEY " << name << " TO THE PARTY WE GO!" << endl;
		    level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
		
		else if((command == "leave" || command == "Leave") && (dress == false && teeth == true && shower == true))
		{
		    cout << "I mean Richard SAID it was gonna be a fun party..";
		    getchar();
		    cout << "Why NOT go there 'au naturel'!";
		    getchar();
			cout << "What the hell! Good luck!" << endl;
			level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
		
		else if((command == "leave" || command == "Leave") && (dress == true && teeth == false && shower == true))
		{
		    cout << "Bad breath didn't stop Bill Gates from founding Microsoft, amirite??";
		    getchar();
		    cout << "Good luck out there, you fire breathing--but clean--dragon!" << endl;
			level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
		
		else if((command == "leave" || command == "Leave") && (dress == true && teeth == true && shower == false))
		{
			cout << "Well, " << name << "." << endl;
			getchar();
			cout << "Your breath is fresh and you put on party attire," << endl;
			cout << "Who WOULDN'T approach you!" << endl;
			getchar();
			cout << "I mean..";
			getchar();
			cout << "It's not like you had the option to SHOWER or anything...";
			getchar();
			cout << "...";
			getchar();
			cout << "(:" << endl;
			level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
        else if((command == "leave" || command == "Leave") && (dress == true && teeth == false && shower == false))
        {
        	cout << "Aw c'moooon, you're not gonna brush your teeth?" << endl;
        	cout << "I mean--you're twenty.. three? Or something?" << endl;
        	getchar();
        	cout << "I thought life after 7 was when brushing your teeth" << endl;
        	cout << "was cool to do.." << endl;
        	getchar();
			cout << "Ah but nonetheless, have fun out there, champ!" << endl;
            level_three_determiner(name, dress, teeth, shower, leave, nap);   
        }
        else if((command == "leave" || command == "Leave") && (dress == true && teeth == true && shower == true))
        {
        	cout << "You!";
        	getchar();
        	cout << "A+";
        	getchar();
        	cout << "You've got it together.";
        	getchar();
        	cout << "Proud 'a you." << endl;
			level_three_determiner(name, dress, teeth, shower, leave, nap);
        }
		
		getchar();
		
		cout << "You have " << minutes << " minutes before the party starts 'turning up'." << endl;

		if(dress == false)
		{
			cout << "get dressed: 10 minutes" << endl;
		}
		
		if(teeth == false)
		{
			cout << "brush teeth: 5 minutes" << endl;
		}
		
		if(shower == false && dressb4shower == false)
		{
			cout << "shower: 15 minutes" << endl;
		}
		
		if(leave == false)
		{
			cout << "leave: 10 minutes" << endl;
		}
		
		if(nap == false && nonap == false)
		{
			cout << "nap: ??? minutes" << endl;
		}

		command = get_command();
		
		while(command != "shower" && command != "Shower" && command != "leave" && command != "Leave" && command != "get dressed" && command != "brush teeth" && command != "nap" && command != "Nap")
		{
			cout << "Try a command from the menu, " << name << "." << endl;
			command = get_command();
		}	
	}while(!leave);
	
}


void level_two_and_a_half(string name, bool teeth, bool shower)
{
	string command;
	getchar();
	cout << string(30, '\n');
	cout << "You hear a noise.";
	getchar();
	cout << "*you, thinking*: What is that??";
	getchar();
	cout << "*you*: I mean--OH MAN. THAT'S WHAT HE WAS TALKING ABOUT!";
	getchar();
	cout << "*you*: THAT'S WHAT MY MANAGER WAS TALKING ABOUT AT WORK!";
	getchar();
	cout << "*you*: If I just take it slow.. maybe it'll work.";
	getchar();
	
	if(teeth == false && shower == false)
	{
	    cout << "*ring* *ring*";
	    getchar();
	    cout << "*riiiiingggg*";
	    getchar();
	    cout << "Your phone sure does ring a lot." << endl;
	    command = get_command();
	    while(command != "answer" && command != "Answer" && command != "get phone" && command != "answer phone" && command != "get the phone" && command != "answer the phone")
	    {
	        cout << "It might be important, " << name << ".";
	        cout << "I mean, you said you'd be there an hour ago and it's who-knows-when, right now!" << endl;
	        command = get_command();
	    }
	    if(command == "answer" || command == "Answer" || command == "get phone" || command == "answer phone" || command == "get the phone" || command == "answer the phone")
	    {
	        cout << "???: " << name << "?";
	        getchar();
	        cout << "Richard (in the distance): " << name << "?! I LOVE YOOOUUUU!! WOOOO!!!";
	        getchar();
	        cout << "???: Are you there, " << name << "?" << endl;
	        command = get_command();
	        while(command != "hello?" && command != "hello" && command != "goodbye" && command != "Goodbye" && command != "bye" && command != "Bye")
	        {
	        	cout << "Say hello? Maybe that'll work?" << endl;
	        	command = get_command();
			}
	        if(command == "hello?" || command == "hello")
	        {
	            cout << "???: " << name << "! It's Q." << endl;
	            getchar();
	            cout << name << ": ...";
	            getchar();
				cout << "*you*: AH! FROM SOCIOLOGY!" << endl;
	            getchar();
	            cout << "Q: Richard said to call you in case he got too drunk." << endl;
	        }
	    	else if(command == "goodbye" || command == "Goodbye" || command == "bye" || command == "Bye")
	    	{
	    		cout << "???: But--" << endl;
	    		cout << "*end call*" << endl;
	    		getchar();
	    		cout << "Really, " << name << "?" << endl;
	    		getchar();
	    		cout << "That could have been oh.. I DON'T KNOW--SUPER IMPORTANTE??" << endl;
	    		getchar();
	    		cout << "I hope you know what you're doing." << endl;
	    		goodbye(name);
			}
		}
	}
	else if(teeth == true && shower == false)
	{
	    
	}
	else if(teeth == false && shower == true)
	{
	       
	}
}

void goodbye(string name)
{
	string command;
	
	getchar();
	cout << string(30, '\n');
	cout << "00HR 01MIN SINCE YOU HUNG UP ON ???" << endl;
	getchar();
	cout << "Y'know... I am SO disappointed in you, " << name << "." << endl;
	getchar();
	cout << "You could have just answered.." << endl;
	cout << "I mean, the person obviously knew your name from SOMEWHERE." << endl;
	cout << "It could have been important." << endl;
	getchar();
	
	cout << "Eh, but none the wiser." << endl;
	getchar();
	cout << "...";
	getchar();
	cout << "....";
	getchar();
	cout << ".....";

	getchar();
	cout << string(30, '\n');
	cout << "00HR 05MIN SINCE YOU HUNG UP ON ???" << endl;
	getchar();
	cout << "Hey." << endl;
	getchar();
	cout << "It's me again, Mr. Narrator." << endl;
	getchar();
	cout << "Y'know.. " << endl;
	cout << "I just got some interesting intel from a reliable source." << endl;
	getchar();
	cout << "Turn on your T.V." << endl;
	
}
void level_three_determiner(string name, bool dress, bool teeth, bool shower, bool leave, bool nap)
{
	getchar();
	cout << string(30, '\n');
	cout << "You are in level 3 determiner" << endl;
}

void description()
{
	cout << "Game: Day at a Party" << endl;
	cout << "Language: C++" << endl;
	cout << "Author: David Amante" << endl;
	cout << "Email: davidamante17@yahoo.com" << endl << endl;
	cout << "Description (of the game): This is a Zork type text-based game. You are a" << endl;
	cout << "tired twenty-something year old who just got home from work. You have the" << endl;
	cout << "opportunity to indulge in some fun party shenanigans." << endl;
	cout << "Are you up to the adventure?" << endl << endl;
}

void check_saved_game()
{
	string response;
	//will be developed later; 11-7-15 9:45pm
	cout << "Do you have a saved game file with us, yet?" << endl;
	cout << "It's all the rage. (:" << endl;
	cout << "> ";
	cin >> response;
	
	if(response == "yes" || response == "Yes")
	{
		cout << "cool beans." << endl;
	}
}

void get_name(string p, string& name)
{
	cout << p << endl;
	getline(cin, name);
}
