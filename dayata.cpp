/*
	created: nov 3, 2015 11:00am
	finished:

	description: A text-based game about a day at a party.
	
	appendage log:
		__________________________________________________11-3-14_INITIAL_IDEA____
		[x] level one 
			finished: nov 3, 2015 12:15pm
		[x] level two
			finished: nov 3, 2015 7:15pm
		__________________________________________________11-7-15_VISIT_TO_SB_____
		[x] "answer||Answer" only command for answering the phone at any time
				finished: nov 7, 2015 4:45pm
		[x] "why||Why" || "why?||Why?" response to richard saying, 'hey party?"
				finished: nov 7, 2015 4:58pm
		[] <upper case> command response 
		[] SAVE FUNCTION
		[] check leave conditions for accuracy and relevance
		[] level 2.5: goodbye response to Q, Richard gets arrested and you 
					  could have prevented it.
		[] R-Rated "fap" option for Jonathan
		__________________________________________________________________________
		[] level two and a half
		[] level three determiner
		[] level three 
		[] level four
		[] level five
		[] level six
		[] level seven
		[] level eight
		[] level nine
		
	author: david amante
	email: davidamante17@yahoo.com
*/

#include <iostream>
#include <string>

using namespace std;

string get_command();
void description();
void get_name(string p, string& name);
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
	get_name("Before we begin--what is your name?", name);

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
				cout << "(press any key)";
				getchar();
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
				getchar();
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
			getchar();
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
		    cout << "GOOD LUCK, DUDE!!" << endl;
		    level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
		
		else if((command == "leave" || command == "Leave") && (dress == false && teeth == true && shower == true))
		{
		    cout << "I mean Richard SAID it was gonna be a fun party..";
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
			cout << "(:" << endl;
			level_three_determiner(name, dress, teeth, shower, leave, nap);
		}
        else if((command == "leave" || command == "Leave") && (dress == true && teeth == false && shower == false))
        {
        	cout << "Aw c'moooon, you're not gonna brush your teeth?" << endl;
        	cout << "I mean--you're twenty..three? Or something" << endl;
        	getchar();
        	cout << "I thought life after 7 was when brushing your teeth" << endl;
        	cout << "was cool to do.." << endl;
        	cout << "Ah but nonetheless, have fun out there, champ!" << endl;
            level_three_determiner(name, dress, teeth, shower, leave, nap);   
        }
        else if((command == "leave" || command == "Leave") && (dress == true && teeth == true && shower == true))
        {
        	cout << "You!";
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
	        while(command != "hello?" && command != "hello")
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
	    }
	}
	else if(teeth == true && shower == false)
	{
	    
	}
	else if(teeth == false && shower == true)
	{
	       
	}
}

void level_three_determiner(string name, bool dress, bool teeth, bool shower, bool leave, bool nap)
{
	getchar();
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

void get_name(string p, string& name)
{
	cout << p << endl;
	getline(cin, name);
}
