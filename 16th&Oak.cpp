#include <windows.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//musical note functions
//C, C#/Db
void c0(double); void c1(double); void c2(double); void c3(double); void c4(double); void c5(double); void c6(double); void c7(double); void c8(double); 
void cs0(double); void cs1(double); void cs2(double); void cs3(double); void cs4(double); void cs5(double); void cs6(double); void cs7(double); void cs8(double); 
//D, D#/Eb
void d0(double); void d1(double); void d2(double); void d3(double); void d4(double); void d5(double); void d6(double); void d7(double); void ds8(double); 
void ds0(double); void ds1(double); void ds2(double); void ds3(double); void ds4(double); void ds5(double); void ds6(double); void ds7(double); void ds8(double); 
//E
void e0(double); void e1(double); void e2(double); void e3(double); void e4(double); void e5(double); void e6(double); void e7(double); void e8(double); 
//F, F#/Gb
void f0(double); void f1(double); void f2(double); void f3(double); void f4(double); void f5(double); void f6(double); void f7(double); void f8(double); 
void fs0(double); void fs1(double); void fs2(double); void fs3(double); void fs4(double); void fs5(double); void fs6(double); void fs7(double); void fs8(double); 
//G, G#/Ab
void g0(double); void g1(double); void g2(double); void g3(double); void g4(double); void g5(double); void g6(double); void g7(double); void g8(double); 
void gs0(double); void gs1(double); void gs2(double); void gs3(double); void gs4(double); void gs5(double); void gs6(double); void gs7(double); void gs8(double); 
//A, A#/Bb
void a0(double); void a1(double); void a2(double); void a3(double); void a4(double); void a5(double); void a6(double); void a7(double); void a8(double); 
void as0(double); void as1(double); void as2(double); void as3(double); void as4(double); void as5(double); void as6(double); void as7(double); void as8(double); 
//B
void b0(double); void b1(double); void b2(double); void b3(double); void b4(double); void b5(double); void b6(double); void b7(double); void b8(double);


//game functions
void description(); //prints description of game/creator before start of game
void tutorial(string &, bool &); //prints tutorial screen, gets name of player
void mainmenu(string, bool&); //main menu returns a string that points to which story to play
void my_story(string); //the main story, using the player's name
void my_level_zero(string); //level zero of main story
void my_level_one(string); //level one of main story
void my_level_two(string); //level two of main story
void my_level_three(string); //level three of main story
void my_level_four(string); //level four of main story
void ruby_story(string);  //Ruby's story, also uses player's name
void seb_story(string); //Seb's story, also uses player's name
void credits(bool &, string); //prints credits
void hacker_script(); //runs the hacker script
string program_list(int num); //program list for hacker script
string package_list(int num); //package list for hacker script
string material_list(int num); //material list for hacker scripts
string betas(int); //holds the names of the beta testers

//text manipulation functions
void wipe(); //clears text from standard sized terminal
void current_date();
void checkS(string, bool&); //checks if name ends in an 's'
void getcom(string &); //gets command from user
void yesorno(string &); //checks for yes/no commands
void checkcom(string &, string); //checks for correct command input
void checkcom(string &, string, string); //2 commands
void checkcom(string &, string, string, string); //3 commands
void checkcom(string &, string, string, string, string); //4 commands
void checkcom(string &, string, string, string, string, string); //5 commands
void checkloc(string &, string); //checks for correct location input
void checkloc(string &, string, string); //2 locations
void checkloc(string &, string, string, string); //3 locations
void checkloc(string &, string, string, string, string); //4 locations
void checkloc(string &, string, string, string, string, string); //5 locations
void checkloc(string &, string, string, string, string, string, string); //6 locations

//global variables
bool s, met_ruby, met_seb;
const int NAMES = 5;

/////////////////////////////////////////////////////////////////////////game functions
int main()
{
	string name;
	bool done = false;
	
	//GAME START
	while(!done)
	{
		description();
		tutorial(name, s);
		mainmenu(name, done);
	}
	
	//GAME END
	credits(done, name);
	return 0;
}

void description()
{
	cout << string(7, '\n');
	cout << " \t============================================================" << endl;
	cout << " \t   #   ####  TTT H H     &&&         OOOO    AAA   KK   KK  " << endl;
 	cout << " \t ###  ######  T  HHH    && &&       OOOOOO  AAAAA  KK  KK   " << endl;
	cout << " \t  ##  ##      T  H H    && &&  &&   OO  OO AA   AA KK KK    " << endl;
	cout << " \t  ##  #####              &&&   &&   OO  OO AA   AA KKKKK    " << endl;
	cout << " \t  ##  ##  ##           &&   &&&&    OO  OO AAAAAAA KK  KK   " << endl;
	cout << " \t  ##  ######           &&    &&     OOOOOO AA   AA KK   KK  " << endl;
	cout << " \t ####  ####             &&&&&  &&    OOOO  AA   AA KK    KK " << endl;
	cout << " \t============================================================" << endl;
	cout << endl;
	cout << "  Upon receiving a call from a mysterious being," << endl; 
	cout << "  \tyou are invited to a nondescript party. As the" << endl;
	cout << "  \t\tnight progresses, your world is flipped upside" << endl;
	cout << "  \t\t\tdown after meeting the mastermind behind it all." << endl << endl;
	cout << "  \t\t    Can you handle this epic adventure?" << endl;
	cout << "   \n\t\t\t       [Press Enter]" << endl;
	getchar();
}

void tutorial(string &name, bool &s)
{
	wipe();
	string response;
	
	//cout << "123456789012345678901234567890123456789012345678901234567890123456789012345" << endl;
	cout << "\t\t\t Welcome to the tutorial!" << endl;
	cout << "\t    This is to help get you situated before you begin." << endl << endl;
	cout << "(1/6)---------------------------------------------------------------------" << endl;
	cout << "When you see a blinking cursor at the bottom left, press the enter key." << endl;
	getchar();
	cout << "Perfect!" << endl;
	getchar();
	
	cout << "(2/6)---------------------------------------------------------------------" << endl;
	cout << "When you see '>', and a blinking cursor, you will have to enter a command," << endl;
	cout << "then press the enter key. Commands are displayed inside the symbols, <>." << endl << endl;
	cout << "Do you understand?" << endl;
	cout << "<yes> / <no>" << endl;
	getcom(response);
	yesorno(response);
	if(response == "yes" || response == "Yes")
	{
		cout << "Sick!" << endl;
	}
	else if(response == "no" || response == "No")
	{
		cout << "Lies! You're doing fine!" << endl;
	}
	getchar();
	
	cout << "(3/6)---------------------------------------------------------------------" << endl;
	cout << "At times, there will be locations you must travel to. To do this, type" << endl;
	cout << "'go to' and the location. Locations are always found within brackets[]." << endl;
	cout << "You must be careful; locations are case sensitive!" << endl;
	cout << "For this example, type 'go to next level'." << endl << endl;
	cout << "Try going to the [next level]!" << endl;
	getcom(response);
	checkloc(response, "go to next level");
	if(response == "go to next level")
	{
		cout << "Nice job, uh.." << endl;
	}
	getchar();
	
	cout << "(4/6)---------------------------------------------------------------------" << endl;
	cout << "... what's your name?" << endl << endl;
	cout << "Name: ";
	getline(cin, name);
	checkS(name, s);
	
	cout << endl << name << "? Cute." << endl;
	getchar();
	
	cout << "(5/6)---------------------------------------------------------------------" << endl;
	cout << name << ", do you want special screen settings for" << endl;
	cout << "the best viewing experience?" << endl;
	cout << "<yes> / <no>" << endl;
	getcom(response);
	yesorno(response);
	
	if(response == "yes" || response == "Yes")
	{
		cout << "For the best experience:" << endl << endl;
		
		cout << "\t1. Right click the top of this window." << endl;
		cout << "\t     [It looks like this]--> (C:\\Users\\[...]\\16th&Oak.exe)" << endl << endl;
		cout << "\t2. Click on properties." << endl;
		cout << "\t3. Click on the 'Font' tab." << endl;
		cout << "\t4. Set the font to Consolas." << endl;
		cout << "\t5. Set the font size of your choosing." << endl;
		cout << "\t6. Click on the 'Layout' tab and set these values:" << endl << endl;
		cout << "\t7. Screen Buffer Size: " << endl;
		cout << "\t\t Width:  75" << endl;
		cout << "\t\t Height: 300" << endl << endl;
		cout << "\t8. Window Size" << endl;
		cout << "\t\t Width:  75" << endl;
		cout << "\t\t Height: 32" << endl << endl;	
		cout << "\t9. Click 'OK'" << endl;
	}
	else if(response == "no" || response == "No")
	{
		cout << "No worries!" << endl;
	}
	getchar();
	
	cout << "(6/6)---------------------------------------------------------------------" << endl;
	cout << "Finally, " << name << ", this game plays the occasional" << endl;
	cout << "'beep' and 'boop', so adjust your speaker settings accordingly." << endl << endl;
	cout << "Please be courteous of others!" << endl;
	
	getchar();
	
	cout << "Beep! ";
	c6(600); //beep
	cout << "Boop!" << endl;
	c4(600); //boop
	
	cout << endl << "Have fun!!" << endl;
	getchar();
}

void mainmenu(string name, bool &finished)
{
	wipe();
	bool done;
	string command;
	string their_story;
	
	//checking for s as the last letter of name for correct possessive noun
	checkS(name, s);
	do
	{
		wipe();
		
		cout << "\t\t\t   Main Menu" << endl;
		cout << "\t\t\t---------------" << endl;
		if(s == true)
		{
			cout << "\t\t\t[" << name << "' Story]" << endl;
			their_story = "go to " + name + "' Story";
		}
		else
		{
			cout << "\t\t\t[" << name << "'s Story]" << endl;
			their_story = "go to " + name + "'s Story";
		}
		
		if(met_ruby == false)
		{
			cout << "\t\t\t   [Locked!]" << endl;
		}
		else
		{
			cout << "\t\t\t [Ruby's Story]" << endl;
		}
		
		if(met_seb == false)
		{
			cout << "\t\t\t   [Locked!]" << endl;
		}
		else
		{
			cout << "\t\t\t  [Seb's Story]" << endl;
		}
		cout << "\t\t\t   [Credits]" << endl;
		
		getcom(command);
		checkloc(command, their_story, "go to Ruby's Story", "go to Seb's Story", "go to Locked!", "go to Credits");
		
		//pick your story
		if(command == their_story)
		{
			my_story(name); //'their_story' clashed with function name, 'my_story'; had to differentiate
		}
		else if(command == "go to Ruby's Story" && met_ruby == true)
		{
			ruby_story(name);
		}
		else if(command == "go to Seb's Story" && met_seb == true)
		{
			seb_story(name);
		}
		else if(command == "go to Credits")
		{
			done = true;
			finished = true;
		}
		else
		{	//for those who try to be cheeky. I might let players who've already played get to access these later.
			//maybe another menu for people who have already beaten the game. post_menu() maybe?
			cout << "This story is locked!";
			getchar();
			cout << "Nice try though.";
			getchar();
		}
	}while(!done);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////MY STORY FUNCTIONS
void my_story(string name)
{
	my_level_zero(name);
	my_level_one(name);
	my_level_two(name);
	my_level_three(name);
	my_level_four(name);
}

void my_level_zero(string name)
{
	wipe();
	
	cout << "\t\t\tIt's ";
	current_date();
	cout << "." << endl;
	
	cout << endl << "The train bell wakes you as you realize you've reached your stop." << endl;
	cout << "You leave the train and begin to walk back to your apartment complex." << endl;
    getchar();
    
    cout << "\t\tcasual" << endl;
	c3(350);
	e3(350);
	g3(350);
	
	cout << "\t\t    walking" << endl;
	c4(350);
	e4(350);
	g4(350);
	
	cout << "\t\t\t transition" << endl;
	c5(350);
	e5(350);
	g5(350);
	
	cout << "\t\t\t\t music" << endl;
	c6(450);
    sleep(.5);
    
	cout << endl << "Approaching your apartment complex, you notice a strange man outside." << endl;
    cout << "As you get closer, the man notices you and stands in front of the door." << endl;
	cout << "He's so strange. Torn shirt. Ragged jeans. No shoes. Homeless, maybe?" << endl;
	getchar();
	cout << "He rushes in front of you." << endl;
	cout << "Strange Man: Stand still." << endl;
	cout << "Strange Man: Scanning..." << endl;
	getchar();
	
	//scanning script
	cout << "Searching for characteristics..."<< endl;
	for(int i = 0; i < 2; i++)
	{
		cout << "checking.." << endl;
		sleep(1);
		cout << "verifying..." << endl;
		sleep(1.4);
	}
	
	if(name == "David Amante")
	{
		cout << "Match confirmed." << endl;
		getchar();
		cout << "Strange Man: Apologies, sir. It's you, from the past. It's 3:09AM PST on" << endl;
		cout << "Strange Man: December 12th, 2015. You got this crazy dumb idea to try to" << endl;
		cout << "Strange Man: release this game in thirteen days. I mean, it's on GitHub," << endl;
		cout << "Strange Man: the edits are there. The archiving. Dude, you're nuts for" << endl;
		cout << "Strange Man: deciding to finish this game in 13 days. I mean, disregarding" << endl;
		cout << "Strange Man: the face that you have that hash table project due in 8 days" << endl;
		cout << "Strange Man: and a Calculus I in 2 days, oh and the CIS in-class final is" << endl;
		cout << "Strange Man: on the 17th, that final you should be studying for.. Well I" << endl;
		cout << "Strange Man: mean, priorities, right? Go you. Or well, go me? It's late" << endl;
		cout << "Strange Man: and you/I/we're tired. Good luck finishing this." << endl;
		cout << "Strange Man: Thanks me. Or you. Us. This is weird. Go on in." << endl;
		cout << "Strange Man: Have fun. Be safe." << endl;
		cout << "Strange Man: \t-David Amante" << endl;
		cout << "\t December 24th, 2015, 8:20PM, on the night train w/ Max & Dad." << endl;
		cout << "\t December 29th, 2015, 2:45AM, you finished completely." << endl;
		cout << "\t                              now for finishing touches." << endl;
		getchar();
		cout << "Strange Man: After you!" << endl;
		getchar();
	}
	else
	{
		cout << "No match." << endl;
		getchar();
		cout << "Holding a finger to his earpiece, he says," << endl;
		cout << "Strange Man: 01111001 01101111 01110101";
		getchar();
		cout << "Strange Man: 01100001 01110010 01100101";
		getchar();
		cout << "Strange Man: 01101110 01101111 01110100";
		getchar();
		cout << "Strange Man: 01101000 01101001 01101101";
		getchar();
		
		cout << "Strange Man: My apologies.";
		getchar();
		cout << "Strange Man: Wrong person.";
		getchar();
		cout << "Strange Man: Please, after you." << endl << endl;
		sleep(1);
		cout << "The man gestures for you to enter." << endl;
	}
	getchar();
}

void my_level_one(string name)
{
	string command;
	wipe();
	
	cout << "Upon stepping foot in your apartment after a long day at work," << endl;
	cout << "your home phone rings." << endl << endl;
	
	cout << "<Answer> the phone?" << endl;
	getcom(command);
	checkcom(command, "Answer", "answer");
	
	if(command == "Answer" || command == "answer")
	{
		cout << "???: Dude! Party on 16th and Oak! That cutie from your Sociology class" << endl;
		cout << "???: is here! You coming??" << endl << endl;
		cout << "<who is this?>" << endl;
		getcom(command);
		checkcom(command, "who is this?", "Who is this?");
		
		if(command == "Who is this?" || command == "who is this?")
		{
			cout << "???: It's Richard! Your best bud! DUDE. Work couldn't've been THAT bad." << endl;
			getchar();
			cout << "Richard: So are you coming or not?" << endl;
			cout << "<yes>" << endl;
			getcom(command);
			checkcom(command, "yes", "Yes");
			if(command == "yes" || command == "Yes")
			{
				cout << "Richard: GOOD! It's still early--you probably have an hour before things" << endl;
				cout << "Richard: really get out of hand! Nevertheless, I better see you here!" << endl;
				cout << "Richard: I have a plan to introduce you two!" << endl;
				getchar();
				
				cout << "you: but--" << endl;
				getchar();
				cout << "*click*" << endl << endl;
				
				cout << "you: ...";
				getchar();
				cout << "you: Shit." << endl;
				getchar();		
			}
		}
	}
}

//my_level_two(name); //you need to edit level two to include exposition of future events.
void my_level_two(string name)
{
	bool shower = false;
	bool dress = false;
	bool brush = false; 
	bool leave = false;
	string command;
	
	wipe();
 
	cout << "Upon hearing the news of an uproarious shindig	occurring in the near" << endl;
	cout << "future, you find yourself tired, surprised, and other words expressing" << endl;
	cout << "mood." << endl;
	getchar();
	
	cout << "But! Before you leave, you must complete the following tasks:" << endl;
	getchar();
	
	while(leave == false)
	{ 
		cout << "Tasks:" << endl;
		if(shower == false)
		{
			cout << "<shower>" << endl;
		}
		
		if(dress == false && shower == true)
		{
			cout << "<get dressed>" << endl;
		}
		
		if(brush == false)
		{
			cout << "<brush teeth>" << endl;
		}
	
		cout << endl;
		getcom(command);
		checkcom(command, "shower", "get dressed", "brush teeth");
		
		//shower
		if(command == "shower" && shower == false)
		{
			cout << "As you finish your shower, the local news comes on." << endl;
			getchar();
			cout << "Channel Four News: Breaking News!" << endl;
			cout << "Channel Four News: Local teenager, Myrtle Wexington, has developed" << endl;
			cout << "Channel Four News: a new technique to merge artificial limbs to" << endl;
			cout << "Channel Four News: the body." << endl;
			shower = true;	
		}
		else if(command == "shower" && shower == true)
		{
			cout << "You already showered." << endl;
		}
		
		//get dressed
		if(command == "get dressed" && shower == false)
		{
			cout << "You should shower first!" << endl;
		}
		else if(command == "get dressed" && shower == true)
		{
			cout << "You dress to the nines!" << endl;
			dress = true;
		}
	
		//brush teeth
		if(command == "brush teeth" && brush == false)
		{
			cout << "You pick out the rest of your lunch from earlier today." << endl;
			brush = true;
		}
		else if(command == "brush teeth" && brush == true)
		{
			cout << "No amount of brushing will help that aureoline mess." << endl;
		}
		if(shower == true && brush == true && dress == true)
		{
			leave = true;
		}
		getchar();
	}
	cout << "You're all ready for the party!" << endl;
	cout << "Ready to <leave>?" << endl;
	getcom(command);
	checkcom(command, "Leave", "leave");
	cout << "You grab your keys and leave your apartment." << endl;
	getchar();
}

//my_level_three(name); //i think this is done. 
void my_level_three(string name)
{
	wipe();
	string command;
	bool done = false;
	bool myrtle = false;
	bool liz = false;
	bool ron = false;
	bool leave = false;
	bool stairs = false;
	bool door = false;
	bool room = false;
	bool music = false;
	bool people = false;
	bool guard = false;
	bool seb = false;
	bool ruby = false;

	cout << "Upon arriving at 16th & Oak, you see a beautiful two story house. Redwood" << endl;
	cout << "porch on the right side of the house. Garage/basement combo on the left." << endl;
	cout << "A flagpole stands tall to the left of the garage. A flag bearing bright" << endl;
	cout << "yellow smiles at you from above." << endl;
	getchar();
	cout << "You begin approaching the front porch as a familiar face rushes hastily" << endl;
	cout << "out of the front door. You begin up the stairs as she hurries down them." << endl;
	cout << "Without missing a beat, she starts," << endl;
	getchar();
	cout << "???: Hey " << name << "! You haven't seen <Ron> out here, have you?" << endl << endl;
	
	getcom(command);
	checkcom(command, "Ron");
	cout << "Shaking your head no, she nods and shouts from across the street," << endl << endl;
	cout << "???: Well if you see him, be sure to let me know, okay??" << endl << endl;
	cout << "She hurries off to the liquor store on the corner." << endl;
	getchar();
	cout << "*you*: Oh what's her NAME? I remember we had World History in high" << endl;
	cout << "*you*: school, but ugh, I can't remember her name for the life of" << endl;
	cout << "*you*: me." << endl;
	getchar();
	cout << "*you*: Oh, and Ron? I also remember him from high school. He was" << endl;
	cout << "*you*: exceptional at hyper-realistic art. I'll be sure to keep" << endl;
	cout << "*you*: an eye out for him." << endl;
	getchar();	
	cout << "You turn around to open the door, as--*CRASH*--a raucous noise booms" << endl;
	cout << "from inside the garage. You open the front door and continue inside." << endl;
	getchar();
	
	while(!done)
	{
		cout << "You are in the hallway by the front door. There is a set of [stairs], a" << endl;
		cout << "[door] to the left, a [room] to the right, and [music] coming from the" << endl;
		cout << "end of the hallway." << endl;
		
		getcom(command);
		checkloc(command, "go to stairs", "go to door", "go to room", "go to music");
		
		//go upstairs before you meet liz
		if(command == "go to stairs" && liz == false)
		{
			cout << "Upon turning the corner of the stairs, a large man in a suit stops" << endl;
			cout << "you in your tracks." << endl;
			getchar();
			cout << "Guard: Name?" << endl;
			getcom(command);
			checkcom(command, name);
			cout << "The guard checks your name on his clipboard." << endl;
			getchar();
			cout << "Guard: You're not on the list." << endl;
			getchar();
			cout << "The guard turns you around and sends you back down the stairs." << endl;
			getchar();
			cout << "*you*: If only there was some way I could get past this guard." << endl;
			cout << "You return to where you were." << endl;
			guard = true;
			getchar();
		}
		
		//go upstairs after you meet liz
		else if(command == "go to stairs" && liz == true)
		{
			leave = false;
			while(!leave)
			{
				cout << "Arriving at the second floor, you see a [boy] sitting on the couch" << endl;
				cout << "staring at a screen, controller in hand. There is a large mahogany" << endl;
				cout << "bookshelf next to the couch. You notice four [puppies] in a small" << endl;
				cout << "fenced-off area. To the right is a collection of sports [trophies]." << endl;
				cout << "Behind you is a closed [door]. To the left are the stairs that" << endl;
				cout << "lead you back down to the [first floor]." << endl;
				getcom(command);
				checkloc(command, "go to boy", "go to puppies", "go to trophies", "go to door", "go to first floor");
				
				//during meeting the boy, Seb
				if(command == "go to boy" && seb == false)
				{
					met_seb = true;
					seb = true;
					
					cout << "As you approach the boy, he gets up in a fit of anger and throws his" << endl;
					cout << "controller across the room. The controller smashes into the trophy" << endl;
					cout << "shelf, toppling a large golden football trophy to the floor." << endl;
					getchar();
					cout << "???: GEORGE!! WHY DID YOU FLANK, GEORGE?! WHY. WHY GEORGE, WHY?!" << endl;
					cout << "???: I TOLD YOU I NEEDED COVER FIRE!!11!" << endl;
					getchar();
					cout << "The boy shouts into his headset furiously, not noticing you." << endl;
					cout << "<get his attention>" << endl;
					getcom(command);
					checkcom(command, "get his attention");
					cout << "You clear your throat loudly." << endl;
					getchar();
					cout << "???: I gotta go, George. We'll try that again in a few." << endl << endl;
					cout << "The boy takes off his headset and tosses it on the couch." << endl;
					cout << "He goes to retrieve his controller from across the room." << endl;
					getchar();
					cout << "???: Can I help you?" << endl;
					cout << "<Seb?>" << endl;
					getcom(command);
					checkcom(command, "Seb?");
					cout << "you: Are you Seb?" << endl;
					getchar();
					cout << "Seb: What's it to you?" << endl;
					cout << "<Q>" << endl;
					getcom(command);
					checkcom(command, "Q");
					cout << "you: Q wanted me to make sure you were okay." << endl;
					getchar();
					cout << "Seb: Oh yeah? Well tell Q I'M perfectly fine. GEORGE is the one that" << endl;
					cout << "Seb: SUCKS at this game." << endl;
					getchar();
					cout << "Seb: Oh yeah, and while you're at it, could you pick that trophy up?" << endl;
					cout << "Seb: I'd really appreciate it." << endl;
					getchar();
					cout << "Seb places his headset back on his head, and waves a hand for you to go." << endl;
					getchar();
					cout << "You return to the middle of the room." << endl;
					getchar();
				}
				
				//after you talked to Seb
				else if(command == "go to boy" && seb == true)
				{
					cout << "Seb shouts into his mic as you approach. Maybe you shouldn't bother him." << endl;
					getchar();
				}
				
				//pet the puppies
				if(command == "go to puppies")
				{
					cout << "There are three border collie puppies and one West Highland Terrier." << endl;
					cout << "The three border collies bear collars with the names, 'Myoh,'" << endl;
					cout << "'Robin,' and 'Kermit.' The westie's collar bears the name, 'Ruoy.'" << endl;
					getchar();
					cout << "Kermit the dog; how clever." << endl;
					getchar();
					cout << "<Pet> the puppies?" << endl;
					getcom(command);
					checkcom(command, "Pet", "pet");
					cout << "The puppies playfully bite your hand, welcoming the attention." << endl;
					getchar();
					cout << "You return to the middle of the room." << endl;
					getchar();
				}
				
				//go to trophies
				if(command == "go to trophies")
				{
					cout << "In front of you are two shelves lined with gold figurines of people with" << endl;
					cout << "various sports uniforms on." << endl;
					getchar();
					
					//trophies after talking to seb
					if(seb == true)
					{
						met_ruby = true;
						ruby = true;
						
						cout << "There is now a [trophy] on the floor due to Seb's tantrum." << endl;
						getcom(command);
						checkloc(command, "go to trophy");
						cout << "The trophy doesn't look broken.. just chipped.";
						getchar();
						cout << "So yes, I guess it is in-fact broken." << endl;
						cout << "<Fix> it?" << endl;
						getcom(command);
						checkcom(command, "Fix", "fix");
						cout << "You place the trophy back on its base as a flutter catches your eye." << endl;
						cout << "You look to your left and see a stream of smoke drift off into the" << endl;
						cout << "atmosphere outside of a [window]." << endl;
						getcom(command);
						checkloc(command, "go to window");
						cout << "The window is just big enough for you to get through." << endl;
						cout << "<Climb through>?" << endl;
						getcom(command);
						checkcom(command, "Climb through", "climb through");
						cout << "You climb through the window as cigarette smoke fills the air. On" << endl;
						cout << "the secret balcony, you see a [woman] with fiery hair and her easel." << endl;
						getcom(command);
						checkloc(command, "go to woman");
						cout << "You notice she's painting the night's sky. A cigarette smolders" << endl;
						cout << "quietly in a bunny-shaped ashtray next to her. Behind her is a" << endl;
						cout << "single framed artwork. You can make out the silhouette of a middle" << endl;
						cout << "finger against a red background. Her headphones are keeping her" << endl;
						cout << "focused on her work. She hasn't noticed you." << endl;
						cout << "Get her <attention>?" << endl;
						getcom(command);
						checkcom(command, "attention", "Attention");
						cout << "You tap the woman's shoulder." << endl;
						getchar();
						cout << "She shakes her head and continues painting." << endl;
						getchar();
						cout << "???: Seb, I'm not gonna vouch for you because you threw another tantrum." << endl;
						cout << "Get her <ATTENTION>?" << endl;
						getcom(command);
						checkcom(command, "ATTENTION", "Attention", "attention");
						cout << "you: Hey!" << endl;
						getchar();
						cout << "The woman jumps from her chair and turns to you mid-jump." << endl;
						cout << "She swipes her headphones from her head and looks at you, alarmed." << endl;
						getchar();
						cout << "???: Hey yourself! What are you doing on <my balcony?>! How did you know!?" << endl;
						getcom(command);
						checkcom(command, "my balcony?", "My balcony?");
						cout << "you: Your balcony?!" << endl;
						cout << "you: Well if you wanted 'your balcony' all to yourself, you would have" << endl;
						cout << "you: thought to put something over the window so you could smoke in peace!" << endl;
						getchar();
						cout << "???: Damn." << endl;
						getchar();
						cout << "???: I knew I shouldn't have smoked tonight. Oh well." << endl;
						cout << "???: What's your name?" << endl;
						getcom(command);
						checkcom(command, name);
						cout << "you: " << name << ". And yours?" << endl;
						getchar();
						cout << "???: Ruby." << endl;
						getchar();
						cout << "Ruby: I'm Seb's sister. He likes to come over to Heather's and play on their" << endl;
						cout << "Ruby: big screen. I don't understand why he plays video games. He's so smart." << endl;
						cout << "Ruby: Dude, he made a flying BIKE for the science fair last year. He's fifteen." << endl;
						cout << "Ruby: Shit, at my age, I was trying to maintain my sanity during high school." << endl;
						getchar();
						cout << "Ruby's cell phone rings." << endl;
						cout << "She stands up to get her phone out of her pocket. A metallic clang erupts from" << endl;
						cout << "the backyard. You rush to look over the railing." << endl;
						getchar();
						cout << "Before being able to look, Ruby grabs your arm, shaking her head." << endl;
						getchar();
						cout << "<did you hear that?>" << endl;
						getcom(command);
						checkcom(command, "did you hear that?", "Did you hear that?");
						cout << "Ruby: I'm gonna take this. Go back downstairs and don't tell anyone about" << endl;
						cout << "Ruby: this place, <got it>?" << endl;
						getcom(command);
						checkcom(command, "got it");
						cout << "You nod hesitantly." << endl;
						getchar();
						cout << "Ruby pushes you toward the window, stopping you just short of it. Taking her" << endl;
						cout << "phone from her ear, she hushes you and gestures for you to climb back through" << endl;
						cout << "the window." << endl;
						getchar();
						cout << "As you reach the other side, Ruby locks the window behind you." << endl;
						getchar();
						cout << "You turn around to feel a gust of wind as you notice the laundry door slam." << endl;
						cout << "You hear a whirring noise for a second, then," << endl;
						getchar();
						cout << "*BANG*" << endl;
						getchar();
						cout << "Seb is no longer where he was." << endl;
						getchar();
						cout << "You hear Ruby shout," << endl;
						cout << "Ruby: WHAT?!" << endl;
						getchar();
						cout << "That metal clang from before breaches your ears." << endl;
						getchar();
						cout << "Then,";
						getchar();
						cout << "   silence." << endl;
					}
					cout << "You return to where you were." << endl;
					done = true;
					leave = true;
					getchar();
				}
				if(command == "go to door")
				{
					leave = false;
					while(!leave)
					{
						cout << "You enter a small room with a single light. To the [left], there is another" << endl;
						cout << "closed door. In front of you is a small cabinet with [pictures] on it. To" << endl;
						cout << "the [right] of you is another closed door. The door behind you leads back" << endl;
						cout << "to the [second floor]." << endl;
						getcom(command);
						checkloc(command, "go to left", "go to right", "go to pictures", "go to second floor");
					
						//seb's symbol
						if(command == "go to left")
						{
							cout << "You open the door to the left and find yourself in a laundry room." << endl;
							cout << "Standard washer/dryer combo. There's a [backpack] hanging on the wall." << endl;
							getcom(command);
							checkloc(command, "go to backpack");
							cout << "The backpack is made of a thick gray material. There's a vermillion" << endl;
							cout << "colored symbol on it." << endl;
							getchar();
							
							//SEB'S SYMBOL
							cout << "|#|=====|#|" << endl;
							cout << " ||/]|[\\|| " << endl;
							cout << " ||\\]|[/|| " << endl;
							cout << "|#|=====|#|" << endl;
							getchar();
							cout << "You leave the laundry room." << endl;
							getchar();
						}
						
						if(command == "go to pictures")
						{
							cout << "There are three pictures on the cabinet." << endl;
							getchar();
							cout << "The one on the left is of Myrtle, smile full of braces, holding up a" << endl;
							cout << "blue ribbon. A woman stands beside her holding up a paper with a" << endl;
							cout << "chemical structure on it. In the background is a banner," << endl;
							cout << "\t\tFrosh Science Fair" << endl;
							getchar();
							cout << "In the middle is a picture of a man in a white lab coat, grinning happily" << endl;
							cout << "next to a man with a cane." << endl;
							getchar();
							cout << "On the right is a picture of Liz, Heather, and Myrtle grinning from ear" << endl;
							cout << "to ear. The captions reads," << endl;
							getchar();
							cout << "\tDecember 25th, 2015 -- Happy Holidays from the Wexington family!" << endl;
							getchar();
							cout << "You return to the middle of the hallway." << endl;
							getchar();
						}
						
						if(command == "go to right")
						{
							cout << "Laughter comes from behind the door. It sounds like there's multiple people" << endl;
							cout << "in there.. Maybe.." << endl;
							getchar();
							cout << "Yeah, maybe it's best not to go in there." << endl;
							getchar();
							cout << "You return to the middle of the hallway." << endl;
						}
						
						if(command == "go to second floor")
						{
							leave = true;
							cout << "You return to the second floor." << endl;
							getchar();
						}
					}
				}
			}
		}
		
		//go to door to garage
		if(command == "go to door" && myrtle == false)
		{
			cout << "It's locked. You go back to where you were." << endl;
			getchar();
		}
		
		//door to garage before you meet the guard
		else if(command == "go to door" && myrtle == true && guard == false)
		{
			cout << "As you're about to put the key in the lock, you hear a cry" << endl;
			cout << "come from upstairs." << endl;
			getchar();
			cout << "You return to where you were." << endl;
		}
		
		//door to garage after you meet the guard
		else if(command == "go to door" && myrtle == true && guard == true)
		{
			leave = false;
			while(!leave)
			{
				cout << "Using the garage key, the door clicks open." << endl;
				getchar();
				
				cout << "You step into a dimly lit stairwell. There is a lit sign above" << endl;
				cout << "the door at the end of the hall. It bears the message, '[garage]'" << endl;
				cout << "The door back to the [front door] is right behind you." << endl;
				getcom(command);
				checkloc(command, "go to garage", "go to front door");
				
				//go back to front door
				if(command == "go to front door")
				{
					cout << "You leave the stairwell." << endl;
					leave = true;
					getchar();
				}
				
				//go to garage
				else if(command == "go to garage")
				{
					leave = false;
					while(!leave)
					{
						cout << "You descend the staircase and open the door to the garage. You see two" << endl;
						cout << "[cars] to the right of you, a [door] to the left, and some large maple" << endl;
						cout << "[shelves] behind you. There are two [people] sitting in lawn chairs" << endl;
						cout << "looking into a room separated by glass. One is laying on the other." << endl;
						
						getcom(command);
						checkloc(command, "go to cars", "go to door", "go to shelves", "go to people");
						
						//garage -- go to cars
						if(command == "go to cars")
						{
							cout << "There are two cars, side by side. A midnight blue Maserati Granturismo" << endl;
							cout << "MC Stradale. It's absolutely stunning.";
							getchar();
							cout << "Keeping it company is an onyx black Rolls Royce Wraith with gray" << endl;
							cout << "trim. It's so shiny. Almost.. abnormally shiny? Too shiny." << endl;
							cout << "It's weird. Hmm." << endl;
							getchar();
							
							cout << "<investigate>?" << endl;
							getcom(command);
							checkcom(command, "investigate");
							{
								cout << "You circle both cars twice.";
								getchar();
								cout << "No license plates.";
								getchar();
								cout << "Odd." << endl;
								getchar();
							}
							cout << "You return to where you were." << endl;
							getchar();
						}
						
						//garage -- go to liz's door
						if(command == "go to door" && people == false)
						{
							cout << "There is a red light on right above the doorway. Underneath it reads," << endl;
							cout << "\"Do not disturb\"" << endl;
							cout << "Maybe it's best not to go in there." << endl;
							getchar();
							cout << "You return to where you were." << endl;
							getchar();
						}
						
						//garage -- shelves
						if(command == "go to shelves")
						{
							cout << "Before you are two large maple bookshelves. One side filled with" << endl;
							cout << "house and art paint, and painting books, while the other side is" << endl;
							cout << "filled with hand and power tools." << endl << endl;
							cout << "Looks like your everyday workbench." << endl;
							getchar();
							cout << "You turn back around." << endl;
							getchar();
						}
		
						//garage -- Q and Richard
						if(command == "go to people" && liz == false)
						{
							cout << "You approach the two. The boy's messy black hair rests on the" << endl;
							cout << "shoulder of his friend. Thick curly hair runs down the back of" << endl;
							cout << "the lawn chair. Seems familiar." << endl;
							getchar();
							cout << "You're not quite sure where you've seen this before, but you" << endl;
							cout << "gather the courage to say <hello>." << endl;
							getcom(command);
							checkcom(command, "hello", "hello?", "Hello", "Hello?");
							if(command == "hello" || command == "hello?")
							{
								cout << "The person turns towards you carefully, not to wake the snoring boy" << endl;
								getchar();
								cout << "??? (whispering): " << name << "? Shh! He's sleeping." << endl;
								cout << "you (whispering): Whoa. Is that... Richard?" << endl;
								cout << "???: Of course. He asked me to nanny for him in case he got" << endl;
								cout << "???: too drunk. He also said you'd be coming to the party" << endl;
								cout << "???: around this time, too." << endl;
								getchar();
								cout << "???: You remember me, right? Q? From sociology?" << endl;
								cout << "Q: <Richard> was telling me about you, y'know," << endl;
								cout << "Q: until he blacked out." << endl;
								
								getcom(command);
								checkcom(command, "Richard");
							
								cout << "you: Oh, well is he doing okay?" << endl;
								getchar();
								
								cout << "Q: Yeah! He's fine. He just drank too much too quickly." << endl;
								cout << "Q: Here, <sit>. You can help us watch Liz practice." << endl;
								
								getcom(command);
								checkcom(command, "sit", "Sit");
								
								cout << "You pull up the remaining green-and-white lawn chair and sit next" << endl;
								cout << "to Richard. He snores quietly on Q's shoulder." << endl;
								getchar();
								cout << "You know <Liz>, right?" << endl;
								
								getcom(command);
								checkcom(command, "Liz");
								
								cout << "Q: Oh! Well she's absolutely obsessed with boxing. Heather and Myrtle's" << endl;
								cout << "Q: parents took her in when her parents passed. Tragic accident. Actually," << endl;
								cout << "Q: it's what--";
								current_date();
								cout << "--today?";
								getchar();
								cout << "Q: Their deathday is tomorrow. Liz got their deathday tattooed on the" << endl;
								cout << "Q: inside of her wrist. She says it calms her when she gets upset. She" << endl;
								cout << "Q: cherishes the fact that they are always watching over her. It's around" << endl;
								cout << "Q: this time that she gets super motivated to practice harder than ever." << endl;
								getchar();
								cout << "Q: I mean, look at her; she's amazing." << endl;
								getchar();
								
								cout << "Soft orchestral music emanated from behind the glass. Liz flowed" << endl;
								cout << "gracefully around the ring, like water, dancing in a stream." << endl;
								getchar();
								cout << "Q: Do you how <her parents passed?>" << endl;
								getcom(command);
								checkcom(command, "her parents passed?", "Her parents passed?");
								
								cout << "Q: Yeah. Well one day her father had picked her up from second grade" << endl;
								cout << "Q: because her mother was enduring <chemotherapy>." << endl;
								getcom(command);
								checkcom(command, "chemotherapy", "Chemotherapy");
								cout << "Q: She was diagnosed about a week prior." << endl;
								getchar();
								cout << "Q: Nonetheless, she really loved her father. He was the one who would" << endl;
								cout << "Q: look after her when her mother was at work. He always supported her" << endl;
								cout << "Q: and always emphasized the importance of elegance and beauty." << endl;
								getchar();
								cout << "Q: I remember him too; he was a nice man." << endl;
								cout << "<so?>" << endl;
								getcom(command);
								checkcom(command, "so?", "So?");
								cout << "Q: Oh right. Sad story telling. My bad." << endl;
								getchar();
								cout << "Q: So, on the way to the hospital, a strange man in a suit approached" << endl;
								cout << "Q: her father. Her father was the professor of dance at the local" << endl;
								cout << "Q: community college, so she figured it was no big deal. She said she" << endl;
								cout << "Q: thought she had seen this man before, but wasn't quite sure." << endl;
								cout << "Q: 'Something was off,' she would say." << endl;
								getchar();
								cout << "Q: Her father told her to give him and the strange man time to talk." << endl;
								getchar();
								cout << "you: ..." << endl;
								getchar();
								cout << "Q: Next thing she knew, her father was on the floor, gasping for air." << endl;
								cout << "Q: The odd thing however, is that there was no blood. He was clean." << endl;
								cout << "Q: She doesn't remember anything after that.. just being in the" << endl;
								cout << "Q: hospital with her parents laying next to each other." << endl;
								cout << "Q: She remembers her father grasping her hand with what strength" << endl;
								cout << "Q: he had left, and said," << endl;
								getchar();
								cout << "Q: 'Be graceful, love.'" << endl;
								getchar();
								cout << "Q: and he was gone." << endl;
								getchar();
								cout << "you: ..." << endl;
								getchar();
								cout << "<reflect>" << endl;
								getcom(command);
								checkcom(command, "reflect", "Reflect");
								cout << "*you*: Wow. That happened to her in second grade? She must've been" << endl;
								cout << "*you*: what, seven? Eight? That's.. messed up." << endl;
								getchar();
								cout << "*you*: I hope she doesn't let it get to her too much." << endl;
								getchar();
								cout << "Completely oblivious to the world, you slowly realize a figure is" << endl;
								cout << "slowly getting closer to your face." << endl;
								cout << "Look?" << endl;
								cout << "<yes> / <no>" << endl;
								getcom(command);
								yesorno(command);
								if(command == "yes")
								{
									cout << "Slowly turning your head," << endl;
									getchar();
								}
								else if(command == "no")
								{
									cout << "Without moving your head," << endl;
									getchar();
								}
								cout << "???: BOO!" << endl;
								getchar();
								cout << "Startled, you fall from lawn chair onto the concrete floor." << endl;
								getchar();
								cout << "???: Hi stranger! Q! Who's this attractive, yet jumpy human being?" << endl;
								cout << "Q (whispering): Liz! Keep your voice down! can't you see Richard" << endl;
								cout << "Q: is sleeping?" << endl;
								getchar();
								cout << "Liz: Oh.. My bad." << endl;
								getchar();
								cout << "Liz (whispering): Q! Who's this attractive, yet jumpy human being?" << endl;
								cout << "Q: This is " << name << ". We have Sociology together. " << name << " and Richard" << endl;
								cout << "Q: are best buds." << endl;
								getchar();
								cout << "Liz: Really?! But Richie is on YOUR shoulder, hmm?" << endl;
								getchar();
								cout << "Q: !!?" << endl;
								cout << "Q: What! Noo, it's not like that!!" << endl;
								getchar();
								cout << "Q swiftly sits up, waking Richard." << endl;
								getchar();
								
								//drunken text script needs creation
								
								cout << "Richard (groggily): " << name << "? iS thAt " << name << "?" << endl;
								cout << "Richard: yOU mAde iT! meEt Q--" << endl;
								getchar();
								cout << "Richard vomits onto the floor beside your feet." << endl;
								getchar();
								cout << "Richard: hhnngghh." << endl;
								getchar();
								cout << "Liz (laughing): " << name << ", hun, if there's anything you" << endl;
								cout << "need, just let me know." << endl;
								cout << "<reflect>" << endl;
								getcom(command);
								checkcom(command, "reflect", "Reflect");
								cout << "*you*: Maybe I could ask her about the <guard> upstairs?" << endl;
								getcom(command);
								checkcom(command, "guard", "Guard");
								cout << "You describe the large man in a suit taking names at the top" << endl;
								cout << "of the stairs." << endl;
								getchar();
								cout << "Liz: Wait, what?" << endl;
								cout << "Liz: What did you say he was wearing? <A suit>?" << endl;
								getcom(command);
								checkcom(command, "A suit", "a suit");
								cout << "Liz: ..." << endl;
								getchar();
								cout << "Liz's mood changes tremendously." << endl;
								cout << "She's quiet..." << endl;
								cout << "Almost, happy?" << endl;
								getchar();
								
								cout << "You notice her eyes start to glisten as she turns her back" << endl;
								cout << "to you. She starts unravelling her hand-wraps." << endl;
								getchar();
								cout << "As Liz begins to walk away, the final wrap slides off of her" << endl;
								cout << "thumb, and falls to the floor." << endl;
								getchar();
								
								cout << "B" << endl;
								sleep(1);
								cout << "E" << endl;
								sleep(1);
								cout << " " << endl;
								sleep(1);
								cout << "G" << endl;
								sleep(1);
								cout << "R" << endl;
								sleep(1);
								cout << "A" << endl;
								sleep(1);
								cout << "C" << endl;
								sleep(1);
								cout << "E" << endl;
								sleep(1);
								cout << "F" << endl;
								sleep(1);
								cout << "U" << endl;
								sleep(1);
								cout << "L" << endl;
								sleep(1);
								
								cout << endl << "Cascades down from her elbow to her wrist in Amatic letters." << endl;
								getchar();
								cout << "A few seconds later you hear shouts from the first floor. A door" << endl;
								cout << "opens, and you hear a sound like a sack of potatoes being dragged" << endl;
								cout << "across the floor." << endl;
								getchar();
								cout << "Moments later, footsteps enter the house. The front door closes," << endl;
								cout << "and the garage door opens and shuts." << endl;
								getchar();
								cout << "Without saying a word, Liz picks up her hand-wraps, and enters" << endl;
								cout << "the ring. The door firmly shuts." << endl;
								cout << "The 'Do Not Disturb' sign illuminates a deep red." << endl;
								getchar();
								liz = true;
								cout << "Q: Umm..." << endl;
								getchar();
								cout << "Q: It's probably safe to say upstairs is open now." << endl;
								getchar();
								cout << "you: Yeah." << endl;
								getchar();
								cout << "Q: I'll be here with Richard. While you're up there, if you could" << endl;
								cout << "Q: make sure Seb is <okay>, I'd appreciate it." << endl;
								getcom(command);
								checkcom(command, "okay", "Okay");
								cout << "Q: Sounds good. We'll be here--" << endl;
								cout << "Richard throws up in the lawn chair you were sitting in." << endl;
								getchar();
								cout << "You return to where you were." << endl;
								getchar();
							}
						}
						
						//garage -- Q and Richard after you've already talked to them
						else if(command == "go to people" && liz == true)
						{
							cout << "Richard bursts from his seat and dry heaves on the floor." << endl;
							cout << "Maybe it's best not to disturb them." << endl;
							getchar();
							cout << "You return to where you were." << endl;
							getchar();
						}
					}
				}
			}
		}
		
		//myrtle's room before you've talked to her
		if(command == "go to room" && ron == false)
		{
			cout << "You knock on the door." << endl;
			getchar();
			cout << "???: Go away." << endl;
			getchar();
			cout << "You turn around and go back to where you were." << endl;
			getchar();	
		}
		
		//myrtle's room after you've talked to her
		else if(command == "go to room" && ron == true && myrtle == true)
		{
			cout << "Myrtle: I'm busy!!" << endl;
			getchar();
			cout << "You head back to where you were." << endl;
			getchar();
		}
		
		//myrtle's room during talking to her
		else if(command == "go to room" && ron == true)
		{
			cout << "You knock on the door." << endl;
			getchar();
			cout << ". ";
			sleep(.5);
			cout << ". ";
			sleep(.5);
			cout << "." << endl;
			sleep(.5);
			
			cout << "The door cracks open and a head peeks out at you." << endl;
			getchar();
			cout << "<hello?>" << endl;
			getcom(command);
			checkcom(command, "hello?", "Hello?", "hello", "Hello");
			if(command == "hello?")
			{
				cout << "you: Uh.. Hi?" << endl;
				getchar();
				
				cout << "???: " << name << "?! Oh my!";
				getchar();
				cout << "???: Hi!" << endl;
				getchar();
				cout << "The girl grabs your wrist and pulls you into the room, slamming the door" << endl;
				cout << "behind you." << endl;
				getchar();
				cout << "???: " << name << "! I'm so glad to see you! This dumb party my sister" << endl;
				cout << "???: threw is SO lame." << endl;
				getchar();
				cout << "you: uh..?" << endl;
				getchar();
				cout << "She notices your confusion." << endl;
				getchar();
				cout << "???: I'm uh.. We had--" << endl;
				getchar();
				cout << "???: organic chemistry.";
				getchar();
				cout << "???: I was your private tutor." << endl;
				getchar();
				cout << "<wait, what?>" << endl;
				getcom(command);
				checkcom(command, "wait, what?", "Wait, what?");
				
				if(command == "wait, what?")
				{
					cout << "You realize who the familiar face from earlier was. Heather! The teacher's" << endl;
					cout << "aide from World History. Her and her sister come from an absolutely ICONIC" << endl;
					cout << "family. Father is the head of Oncology at the local hospital, while their" << endl;
					cout << "mother is a data analyst for the nation's biggest tech company. Heather" << endl;
					cout << "is known for being the ONLY student in county history to score a 5 on the" << endl;
					cout << "AP World History exam. While Myrtle was..." << endl;
					getchar();
					cout << "*flashback*" << endl;
					cout << "Channel Four News: Local teen, Myrtle Wexington, has discovered a method" << endl;
					cout << "Channel Four News: to instantaneously merge artificial limbs to the body!" << endl;
					cout << "                                                          *end flashback*" << endl;
					getchar();
					cout << "In a fit of excitement, you shout," << endl;
					getchar();
					cout << "you: Myrtle!!" << endl;
					cout << "you: You were on the news half an hour ago!" << endl;
					cout << "you: You discovered a method--" << endl;
					getchar();
					cout << "Myrtle: Yeah. I know. \"to instantaneously merge artificial limbs..\"" << endl;
					cout << "Myrtle: Blah blah blah." << endl;
					getchar();
					cout << "<confusion>" << endl;
					getcom(command);
					checkcom(command, "confusion", "Confusion");
					
					if(command == "confusion")
					{
						cout << "You express your confusion in the form of a sideways look." << endl;
						getchar();
						cout << "Myrtle: Literally everyone at the party has been raving to me about how" << endl;
						cout << "Myrtle: 'amazing' I am. It's not really that amazing. Professor Charles" << endl;
						cout << "Myrtle: Treuse made the most ELEMENTARY. MISTAKE." << endl;
						getchar();
						cout << "Myrtle: When he was modeling 5-alpha dihydroprogesterone, he forgot the" << endl;
						cout << "Myrtle: last, most significant carbon. The thirtieth carbon. I mean can" << endl;
						cout << "Myrtle: you believe that?! 'Renowned' Professor Charles Treuse, head of" << endl;
						cout << "Myrtle: the chemistry department for SEVENTEEN YEARS, screws up the" << endl;
						cout << "Myrtle: final carbon on f!#@ing 5-alpha dihydroprogesterone. This middle" << endl;
						cout << "Myrtle: school error of his pressed fatal calculations into the processor," << endl;
						cout << "Myrtle: leading to faulty results." << endl;
						getchar();
						cout << "Myrtle: So I fix it for him, the nitwit, and it just so happens that when" << endl;
						cout << "Myrtle: that thirtieth carbon interacts with the arterial graft of a" << endl;
						cout << "Myrtle: semi-artificial limb, the body accepts and merges the" << endl;
						cout << "Myrtle: semi-artificial limb to the body near-instantaneously." << endl;
						cout << "Myrtle: Cool whatever." << endl;
						getchar();
						cout << "Myrtle: If you think about it, he would have made the discovery had he" << endl;
						cout << "Myrtle: just modeled the chemical structure correctly. I make one" << endl;
						cout << "Myrtle: correction, and all of a sudden, I'm the great chemist. He's" << endl;
						cout << "Myrtle: the one who has done the research. I just fixed one little error" << endl;
						cout << "Myrtle: for him." << endl;
						getchar();
						cout << "you: *in awe*" << endl;
						getchar();
						cout << "Myrtle: Um.. yeah." << endl;
						getchar();
						cout << "Myrtle: OH! " << name << "! Richard told me that when you showed up," << endl;
						cout << "Myrtle: to let you know that he'd be in the garage." << endl;
						getchar();
						cout << "You have gained the garage key!" << endl;
						myrtle = true; //garage key acquired
						getchar();
						cout << "Myrtle: It's through the door in the hallway. Heather likes to lock it" << endl;
						cout << "Myrtle: during parties so no one bothers Liz." << endl;
						getchar();
						
						//expletive in morse code
						
						cout << "Myrtle: Like my new ringtone?! It's a word that holds 'deer' to my heart." << endl;
						cout << "Myrtle: HA!! Get it?? Deer. Because 'deer' reminds me of 'moose,' and" << endl;
						cout << "Myrtle: 'moose' and 'morse' are just one letter away from each other. And" << endl;
						cout << "Myrtle: you know what they're differing??" << endl;
						getchar();
						cout << "<r?>" << endl;
						
						getcom(command);
						checkcom(command, "r?", "R?");
						if(command == "r?")
						{
							cout << "you: An 'R'?" << endl;
							getchar();
							cout << "Myrtle: And do you know what an 'R' represents in the chemistry world?!" << endl;
							getchar();
							cout << "<no?>" << endl;
						} 
						
						getcom(command);
						checkcom(command, "no?", "No?", "the gas constant?", "the gas constant.", "the gas constant");
						if(command == "no?")
						{
							cout << "Myrtle: The GAS CONSTANT made famous by French chemist, Henri Victor" << endl;
							cout << "Myrtle: Regnault! Haha! Clever, right? Anyway! I really have to take" << endl;
							cout << "Myrtle: this. Make sure Richard is alright for me, okay? He seemed" << endl;
							cout << "Myrtle: pretty tipsy last I saw'm." << endl;
						}
						else if(command == "the gas constant?" || command == "the gas constant." || command == "the gas constant")
						{
							cout << "Myrtle: The GAS--" << endl;
							getchar();
							cout << "Myrtle: Oh?" << endl;
							getchar();
							cout << "Myrtle: Well yeah! That's right!" << endl;
							getchar();
							cout << "Myrtle: Anyway, I really should take this. Make sure Richard is alright" << endl;
							cout << "Myrtle: for me, okay? He seemed pretty tipsy last I saw him." << endl;
						}
						getchar();
						
						cout << "<okay>" << endl;
						getcom(command);
						checkcom(command, "okay");
						
						if(command == "okay")
						{
							cout << "You reassure her that you will take good care of Richard when you find him." << endl;
							cout << "You head back to the hallway." << endl;
							getchar();
						}
					}
				}
			}
		}

		//hallway deeper into the house
		if(command == "go to music")
		{
			leave = false;
			while(!leave)
			{
				cout << "Arriving in the heart of the party, you see a [beer pong] table, a" << endl;
				cout << "a [kitchen] area, a large group of people gathered around a [T.V]," << endl;
				cout << "and a [room] toward your right. The [front door] is right behind you." << endl;
				
				getcom(command);
				checkloc(command, "go to beer pong", "go to kitchen", "go to T.V", "go to room", "go to front door");
				
				//should put some kind of chance game here
				if(command == "go to beer pong")
				{
					cout << "As you approach the table, a ping pong ball flies across the table," << endl;
					cout << "sinking into a solo cup. A collective cheer erupts from the spectators" << endl;
					cout << "as the losing team downs their drink in unison." << endl;
					getchar();
					cout << "Boy: Hey! No randoms.";
					getchar();
					cout << "You retreat back to the music." << endl;
					getchar();
				}
				
				//should put some kind of action quest here, like getting water and bringing it to ron
				if(command == "go to kitchen")
				{
					cout << "Upon sneaking past the beer pong crowd, you arrive at an almost" << endl;
					cout << "industrial-sized kitchen. Marble countertops with sapphire trim," << endl;
					cout << "and two refrigerators. To your right is an inconspicuous table" << endl;
					cout << "of three. Each person has their left fist outreached, and a glass" << endl;
					cout << "of water in their right." << endl;
					getchar();
					cout << "Girl: Hey! Welcome to our designate driver table. We like to keep" << endl;
					cout << "Girl: drinking games fun without the drinking!" << endl;
					getchar();
					cout << "Girl: Unfortunately, we're up to capacity for the rest of the night." << endl;
					cout << "Girl: Three players only!" << endl;
					getchar();

					cout << "You retreat back to the music." << endl;
					getchar();
				}
				
				//another action thing
				if(command == "go to T.V")
				{
					cout << "Sports Anchor: The thirty, the twenty, the ten!" << endl;
					cout << "Sports Anchor: Touchdown, Anteaters!" << endl << endl;
					cout << "College Kids: (collective cheering)" << endl;
					getchar();
					cout << "It seems they are busy. You retreat back to the music." << endl;
					getchar();
				}
				
				//before, after, during ron
				if(command == "go to room")
				{
					cout << "Upon reaching the room, you terrible noises coming from inside." << endl;
					getchar();
					cout << "???: *heaving*" << endl;
					getchar();
					cout << "???: *whimpering*" << endl;
					getchar();
					cout << "???: *more heaving*" << endl;
					getchar();
					cout << "<comfort>" << endl;
					getcom(command);
					checkcom(command, "comfort");
				
					cout << "you: You alright in there?" << endl;
					getchar();
					cout << "???: *indestinguishable*" << endl;
					getchar();
					cout << "you: Hello?";
					getchar();
					cout << "???: *dry heaves*";
					getchar();
					cout << "???: Get.";
					getchar();
					cout << "???: Heather." << endl;
					cout << "???: *even more heaving*" << endl;
					getchar();
					cout << "You slowly back away from the door, back to the music." << endl;
					getchar();
					ron = true;
				}
				
				//leave the hallway
				if(command == "go to front door")
				{
					cout << "You return to the front door." << endl;
					getchar();
					leave = true;
				}
			}
		}
	}
	getchar();
}

void my_level_four(string name)
{
	string command;
	bool done = false;
	bool leave = false;
	wipe();
	
	while(!done)
	{
		bool laundry = false;
		bool bedroom = false;
		bool pictures = false;
		cout << "Back in the middle of the second story, Seb is gone. The [puppies] and" << endl;
		cout << "[trophies] are still here. Behind you, the same [door] is still there." << endl;
		cout << "Something feels... off." << endl;
		getcom(command);
		checkloc(command, "go to puppies", "go to trophies", "go to door");
		
		//puppies
		if(command == "go to puppies")
		{
			cout << "All of the puppies are still here." << endl;
			cout << "<Pet> the puppies?" << endl;
			getcom(command);
			checkcom(command, "Pet");
			cout << "The puppies cower in the back of the pen. One barks quietly at you." << endl;
			getchar();
			cout << "*you*: That's odd. They were friendly a minute ago." << endl;
			getchar();
			cout << "You return to where you were." << endl;
			getchar();
		}
		
		//trophies
		if(command == "go to trophies")
		{
			cout << "The same trophies are still here. The one you picked up--it's" << endl;
			cout << "base is glowing faintly." << endl;
			getchar();
			cout << "You return to where you were." << endl;
			getchar();
		}
		
		if(command == "go to door")
		{
			leave = false;
			while(!leave)
			{
				cout << "The door opens. To the [left] is the laundry room door. To the" << endl;
				cout << "[right] is the locked door from before. In front of you are" << endl;
				cout << "three [pictures] on a cabinet." << endl;
				getcom(command);
				checkloc(command, "go to left", "go to right", "go to pictures");
				
				//laundry room v2
				if(command == "go to left")
				{
					laundry = true;
					cout << "You find yourself in the laundry room. Standard washer/dryer combo." << endl;
					cout << "The [backpack] is missing." << endl;
					getcom(command);
					checkcom(command, "go to backpack");
					cout << "*you*: Hmm.. Seb is missing. So is the backpack.";
					getchar();
					cout << "*you*: This is kind of creepy." << endl;
					getchar();
					cout << "You leave the laundry room and return to the hallway." << endl;
					getchar();
				}
				
				//hacker script bedroom
				if(command == "go to right")
				{
					bedroom = true;
					cout << "The door creaks open. Your hand flicks on the light switch." << endl;
					getchar();
					cout << "There is a bed in the corner of the room, and a glowing [computer]" << endl;
					cout << "screen to the right of you." << endl;
					getcom(command);
					checkloc(command, "go to computer");
					
					cout << "The computer is black with white text. It shows;" << endl;
					getchar();
					
					wipe();
					hacker_script();
					
					cout << "*you*: It looks like something is being installed." << endl;
					getchar();
					cout << "You exit the room." << endl;
					getchar();
				}
				
				//photos v2
				if(command == "go to pictures")
				{
					pictures = true;
					cout << "The same three pictures are still on the cabinet." << endl;
					getchar();
					cout << "Myrtle, winning an award at a science fair with who is assumed" << endl;
					cout << "to be her mother." << endl;
					getchar();
					cout << "A man in a white lab coat grinning next to a man with a cane," << endl;
					getchar();
					cout << "and finally, the picture of--" << endl;
					cout << "the frame." << endl;
					getchar();
					cout << "The picture." << endl;
					getchar();
					cout << "It's gone." << endl;
					getchar();
					cout << "You return to where you were." << endl;
					getchar();
				}
				
				if(laundry == true && bedroom == true && pictures == true)
				{
					leave = true;
				}
			}
			cout << "A noise rings out from the [first floor]." << endl;
			getcom(command);
			checkloc(command, "go to first floor");
			cout << "You arrive at the base of the stairs to feel the bass of the music rattle" << endl;
			cout << "your bones. It's as if nobody heard that." << endl;
			getchar();
			cout << "The front door slams open and Heather bursts in.";
			getchar();
			cout << "Heather: Look! I'll call you back!";
			getchar();
			cout << "Heather puts her phone away and looks up." << endl;
			getchar();
			cout << "Heather: " << name << "! Hey! You haven't seen <Ron> have you??" << endl;
			getcom(command);
			checkcom(command, "Ron");
			cout << "You begin telling Heather of the voice	from inside the bathroom. The" << endl;
			cout << "terrible heaves you heard from behind the door, and the slurred message," << endl;
			getchar();
			cout << "*flashback*" << endl;
			cout << "???: Get."; 
			getchar();
			cout << "???: Heather." << endl;
			cout << "*end flashback*" << endl;
			getchar();
			cout << "Yup, that's GOTTA be him." << endl;
			cout << "Heather hurries off to the [bathroom]." << endl;
			getcom(command);
			checkloc(command, "go to bathroom");
			cout << "You follow her, passing the college kids as they scream at the T.V." << endl;
			getchar();
			cout << "Heather bangs furiously on the door." << endl << endl;
			cout << "Heather: RON! You in there?!" << endl;
			getchar();
			cout << "Heather continues banging on the door." << endl;
			cout << "Heather: RON! Open up!" << endl;
			getchar();
			cout << "The door clicks and Heather bursts in." << endl;
			getchar();
			cout << "Heather: RON!! Ron. Are you okay?!" << endl;
			cout << "Ron (drunken text): yeah, I just thought I could handle." << endl; //drunken
			cout << "Heather: Oh dear, I'm just glad you're conscious.";
			getchar();
			cout << "Heather: Remember last time at that frat party? Could've been a lot worse." << endl;
			cout << "Ron: That's true." << endl; //drunken text
			cout << "Heather: C'mon, " << name << ". Help me get him upstairs." << endl;
			cout << "Heather: My mom could probably help." << endl;
			cout << "Heather: <Get his arm>." << endl;
			getcom(command);
			checkcom(command, "Get his arm");
			cout << "You grab Ron's arm and help him to his feet.";
			getchar();
			cout << "You notice a symbol on Ron's shoes." << endl;
			getchar();
			//symbol from backpack
			cout << "|#|=====|#|" << endl;
			cout << " ||/]|[\\|| " << endl;
			cout << " ||\\]|[/|| " << endl;
			cout << "|#|=====|#|" << endl;
			getchar();
			cout << "What is that from?!" << endl;
			cout << "<reflect>" << endl;
			getcom(command);
			checkcom(command, "reflect");
			cout << "*you*: THE BACKPACK!" << endl;
			getchar();
			cout << "Ron: Heh, you like'm? Seb made'm for me. They're--" << endl; //drunken
			cout << "Heather: Red! Yeah. See? Ron, your <shoes> are red." << endl;
			getcom(command);
			checkcom(command, "shoes");
			cout << "*you*: What the hell are they hiding?!" << endl;
			getchar();
			cout << "You arrive at the top of the stairs with Ron and Heather." << endl;
			cout << "Heather hurries into the hallway where the pictures are." << endl;
			cout << "A slight shifting noise is made from inside the hallway." << endl;
			getchar();
			cout << "The large mahogany bookshelf moves slightly." << endl << endl;
			cout << "Heather: C'mon " << name << ", <follow> me." << endl;
			getcom(command);
			checkcom(command, "follow");
			cout << "You pick up Ron and assist him towards the bookshelf." << endl << endl;
			cout << "Heather: My parents like privacy.";
			getchar();
			cout << "Heather: A <lot> of it." << endl;
			getcom(command);
			checkcom(command, "lot");
			cout << "*you*: Gross?" << endl;
			getchar();
			cout << "The bookshelf shifts to the left, revealing a room." << endl << endl;
			cout << "Heather: Hey Ma! Need some help over here." << endl;
			cout << "???: I'll b-b-be right ou-out!" << endl;
			getchar();
			cout << "*you*: What the hell? Why is Heather's mom home during a house party?" << endl;
			cout << "*you*: Isn't that kind of weird? What parents let their kids throw a" << endl;
			cout << "*you*: massive house party in their house WHILE they're home?!" << endl;
			getchar();
			cout << "Heather: Put Ron on the [bed] over there." << endl;
			getcom(command);
			checkloc(command, "go to bed");
			cout << "You help Ron over to the queen-sized bed on the far side of the room." << endl;
			cout << "The bed frame is composed of bookshelves. There are tons of thick" << endl;
			cout << "textbooks lining the bed frame. Organic chemistry, world history," << endl;
			cout << "data analytics and set theory, the list goes on." << endl;
			getchar();
			cout << "A stout woman with horn-rimmed glasses and violet pajamas appears." << endl;
			getchar();
			cout << "???: Hi h-h-honey! What's u-up?" << endl;
			cout << "Heather: Ron drank a bit too--" << endl;
			cout << "???: Heather! How rude of you not to introduce me to your friend!";
			getchar();
			cout << "Heather (mockingly): Mom, " << name << ". " << name << ", Mom." << endl;
			cout << "Heather: 'Mom' prefers <Willow> though. As that is her name." << endl;
			cout << "Willow: Thank y-you, dear." << endl;
			getcom(command);
			checkcom(command, "Willow");
			cout << "you: Nice to meet--";
			getchar();
			cout << "Heather: Mom! Ron? Dangerously drunk? Hello?" << endl;
			cout << "Willow: It's n-n-nice to meet y-you too, " << name << "." << endl;
			getchar();
			cout << "Willow shoots a glance at Heather as she leaves the room." << endl;
			getchar();
			cout << "Sorry, " << name << ". I'm just worried about Ron." << endl;
			getchar();
			cout << "Willow returns to the room with a large syringe filled with some kind of" << endl;
			cout << "orange liquid. She has a disinfectant wipe in her off hand." << endl;
			getchar();
			cout << "Heather: Don't worry, I've tried it; it works." << endl << endl;
			cout << "Heather pulls her shirt up a bit, revealing a tiny tidbit of a scar on the" << endl;
			cout << "upper right side of her stomach." << endl;
			getchar();
			cout << "Willow: See, you inj-j-ject the sobering agent directly in-into the liver;" << endl;
			cout << "Willow: w-w-works within s-seconds." << endl << endl;
			cout << "Willow lifts up Ron's shirt and wipes a swatch underneath his rib-cage." << endl << endl;
			cout << "Willow: I'm working on a p-p-patent f-for it currently, but--" << endl;
			cout << "Willow jabs the syringe into Ron's abdomen. Ron grunts in pain." << endl;
			cout << "Willow: those f-fair people at Medi C-C-Co. say it's 't-too dangerous'" << endl;
			cout << "Willow: and whatnot." << endl;
			getchar();
			cout << "Willow: Sure, I'm not e-e-exactly in pharmaceutic-c-cals, but I know" << endl;
			cout << "Willow: enough ab-b-bout chemistry to know what's 'dangerous.'" << endl;
			getchar();
			cout << "Willow leaves the room with the syringe and disinfectant wipe as Heather" << endl;
			cout << "grabs a textbook." << endl << endl;
        	cout << "Heather (whispering): My mom has a stutter. You know it. She knows it." << endl;
			cout << "Heather: Don't <mention it>." << endl;
			getcom(command);
			checkcom(command, "mention it");
			cout << "You nod." << endl;
			getchar();
			cout << "Ron awakens violently, as if from a bad dream." << endl << endl;
			cout << "Ron: Hey! Wha-- What?! I CAN'T SEE!! EVERYTHING'S DARK!!" << endl;
			cout << "Willow (from the other room): It wears off in a minute, Ron!" << endl;
			cout << "Ron: Ms. Wexington?!" << endl << endl;
			cout << "Heather throws the textbook at Ron." << endl << endl;
			cout << "Ron: OW! WHAT THE HELL?!" << endl;
			getchar();
			cout << "Heather: You poop! You passed out in the bathroom with the door LOCKED." << endl;
			cout << "Heather: AGAIN." << endl;
			getchar();
			cout << "Ron: Heather? Look, I'm sorry! I didn't want you to see me like that" << endl;
			cout << "Ron: because... um.." << endl << endl;
			cout << "Ron slowly feels his way to the edge of the bed and sits up." << endl << endl;
			cout << "Heather: Because you messed up?!" << endl;
			cout << "Ron: Because I messed up." << endl;
			getchar();
			cout << "Heather: Yeah well... I'm happy you're okay." << endl;
			cout << "Ron: Babe.";
			getchar();
			cout << "Heather: Yes?";
			getchar();
			cout << "Ron: I still can't see." << endl;
			getchar();
			cout << "Heather walks up to him, carressing his face, while looking into his eyes." << endl << endl;
			cout << "Ron: Oh uh... I still can't--" << endl;
			cout << "Heather: Shh." << endl;
			cout << "Ron: I uh--" << endl << endl;
			cout << "Heather kisses Ron." << endl;
			getchar();
			cout << "Ron opens his eyes as wide as he can, straining to see." << endl;
			cout << "Willow enters the room." << endl << endl;
			cout << "Ron: Oh hey Ms. W!";
			getchar();
        	cout << "Willow: G-good e-evening, Ron." << endl;
        	cout << "Willow: Um, Heather dear, h-have you heard from Ru-b-by late-l-ly?" << endl;
        	cout << "Willow: I h-heard Seb take off alr-r-rea-ready." << endl;
        	getchar();
        	cout << "Ron: HEATHER!" << endl;
        	getchar();
        	cout << "Disembodied Voice: WARNING. WARNING.";
        	getchar();
        	cout << "Disembodied Voice: Three foreign vectors in air space:" << endl;
			cout << "Disembodied Voice: Four. Nine. Three. Zero." << endl;
			cout << "Disembodied Voice: Location: J-76" << endl;
			getchar();
			cout << "Heather: Uhhh.." << endl;
			getchar();
			cout << "Willow: HEA-TH-THER S-SADIE WEXINGTON!!" << endl;
			getchar();
		}
		done = true;
	}
}

void hacker_script()
{
	sleep(1);
	//can put anything relevant to the story herevvv
	cout << "Updating..." << endl;
	
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
	cout << "Done installing documentation for diaper, spoon, pocket-2.2, stale-toast-testing, macro_gainz8, lipbalm after 13 seconds" << endl;
	
	sleep(1);
	
	cout << "Updating tube_socks" << endl;
	for(int i = 10; i < 13; i++)
	{
		sleep(1);
		cout << "Fetching: " << material_list(i) << "-4." << i << " ";
		sleep(.7);
		cout << "(100%)" << endl;
		sleep(.45);
		cout << "Parsing documentation for " << material_list(i) << "-4." << i+8 << endl;
	}
	sleep(1);
	
	cout << "Levels updated: level_three level_four level_five partypack fight-mechanic pillow-fight cooties3" << endl;
	sleep(2);
	cout << endl;
}

//to make this shorter later, just superimpose the three lists and set i or num seperately in-game
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////RUBY STORY FUNCTIONS
void ruby_story(string name)
{
	wipe();
	cout << "Ruby's Story will become available by February 4th, 2016!" << endl;
	getchar();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////SEB STORY FUNCTIONS
void seb_story(string name)
{
	wipe();
	cout << "Seb's Story will become available by March 3rd, 2016!" << endl;
	getchar();
}

////////////////////////////////////////////////////////////////////////////////////////////////////BETA TESTER & CREDITS FUNCTIONS
string betas(int count)
{
	string name;
	
	switch(count)
	{
		case 1: 
			name = " Nichole Hotrum\t November 07, 2015";
			break;
		case 2:
			name = " Ellen Barabasz\t November 21, 2015";
			break;
		case 3:
			name = " Danielle Gutierrez\t November 26, 2015";
			break;
		case 4:
			name = " Anass Malabeh\t December 5, 2015";
			break;
		case 5:
			name = " Beta Tester\t\t Month 0, 201X";
			break;
		case 6:
			name = " Beta Tester\t\t Month 0, 201X";
			break;
		case 7:
			name = " Beta Tester\t\t Month 0, 201X";
			break;
		case 8:
			name = " Beta Tester\t\t Month 0, 201X";
			break;
		case 9:
			name = " Beta Tester\t\t Month 0, 201X";
			break;
		case 10:
			name = " Beta Tester\t Month 0, 201X";
			break;				
	}
	return name;
}

void credits(bool &done, string name)
{
	cout << "This has been, '16th & Oak.'" << endl;
	getchar();
	cout << "\tStory by: David Amante" << endl;
	cout << "\tSound by: David Amante" << endl;
	cout << "\tLanguage: C++" << endl;
	cout << "\tCreated: November 3rd, 2015" << endl;
	cout << "\tFinished: December 29th, 2015" << endl;
	cout << "\tEmail: davidamante17@yahoo.com" << endl;
	getchar();
	cout << "Special thanks to all the great people who beta-tested this game!" << endl << endl;
	cout << "\t x: Name\t\t Date-of-first-play " << endl << endl;
	for(int i = 1; i < NAMES; i++)
	{
		cout << "\t " << i << ":" << betas(i) << endl;
	}
	getchar();
	cout << "Last but not least, a special thanks to you, " << name << "." << endl;
	cout << "For taking time out of your day to play this silly game." << endl;
	getchar();
	
	cout << "\t\t\t The End!" << endl;
	done = true;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////text manipulation functions
void wipe()
{
	cout << string(30, '\n');
}

void getcom(string &command)
{
	cout << "> ";
	getline(cin, command);
	cout << endl;
}

void yesorno(string &command)
{
	while(command != "yes" && command != "no")
	{
		cout << "Invalid command. Type in the word or phrase inside the <>." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1)
{
	while(command != option1)
	{
		cout << "Invalid command. Type in the word or phrase inside the <>." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2)
{
	while(command != option1 && command != option2)
	{
		cout << "Invalid command. Type in the word or phrase inside the <>." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2, string option3)
{
	while(command != option1 && command != option2 && command != option3)
	{
		cout << "Invalid command. Type in the word or phrase inside the <>." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2, string option3, string option4)
{
	while(command != option1 && command != option2 && command != option3 && command != option4)
	{
		cout << "Invalid command. Type in the word or phrase inside the <>." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2, string option3, string option4, string option5)
{
	while(command != option1 && command != option2 && command != option3 && command != option4 && command != option5)
	{
		cout << "Invalid command. Type in the word or phrase inside the <>." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location)
{
	while(command != location)
	{
		cout << "Invalid location. Try 'go to' and the word within the [brackets]." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2)
{
	while(command != location1 && command != location2)
	{
		cout << "Invalid location. Try 'go to' and the word within the [brackets]." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2, string location3)
{
	while(command != location1 && command != location2 && command != location3)
	{
		cout << "Invalid location. Try 'go to' and the word within the [brackets]." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2, string location3, string location4)
{
	while(command != location1 && command != location2 && command != location3 && command != location4)
	{
		cout << "Invalid location. Try 'go to' and the word within the [brackets]." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2, string location3, string location4, string location5)
{
	while(command != location1 && command != location2 && command != location3 && command != location4 && command != location5)
	{
		cout << "Invalid location. Try 'go to' and the word within the [brackets]." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2, string location3, string location4, string location5, string location6)
{
	while(command != location1 && command != location2 && command != location3 && command != location4 && command != location5 && command != location6)
	{
		cout << "Invalid location. Try 'go to' and the word within the [brackets]." << endl;
		getcom(command);
	}
}
void checkS(string name, bool &s)
{
	for(int i = 0; i < name.size(); i++)
	{
		if((name[i] == 's' || name[i] == 'S') && i == (name.size()-1))
		{
			s = true;
		}
		else
		{
			s = false;
		}
	}
}

void current_date()
{
	time_t t = time(0);
	struct tm * now = localtime(&t);
	
	switch(now->tm_mon+1)
	{
		case 1:
			cout << "January ";
			break;
		case 2:
			cout << "February ";
			break;
		case 3:
			cout << "March ";
			break;
		case 4:
			cout << "April ";
			break;
		case 5:
			cout << "May ";
			break;
		case 6:
			cout << "June ";
			break;
		case 7:
			cout << "July ";
			break;
		case 8:
			cout << "August ";
			break;
		case 9:
			cout << "September ";
			break;
		case 10:
			cout << "October ";
			break;
		case 11:
			cout << "November ";
			break;
		case 12:
			cout << "December ";
			break;
	}
	
	switch(now->tm_mday)
	{
		case 1:
			cout << "1st, ";
			break;
		case 2:
			cout << "2nd, ";
			break;
		case 3:
			cout << "3rd, ";
			break;
		case 4:
			cout << "4th, ";
			break;
		case 5:
			cout << "5th, ";
			break;
		case 6:
			cout << "6th, ";
			break;
		case 7:
			cout << "7th, ";
			break;
		case 8:
			cout << "8th, ";
			break;
		case 9:
			cout << "9th, ";
			break;
		case 10:
			cout << "10th, ";
			break;
		case 11:
			cout << "11th, ";
			break;
		case 12:
			cout << "12th, ";
			break;
		case 13:
			cout << "13th, ";
			break;
		case 14:
			cout << "14th, ";
			break;
		case 15:
			cout << "15th, ";
			break;
		case 16:
			cout << "16th, ";
			break;
		case 17:
			cout << "17th, ";
			break;
		case 18:
			cout << "18th, ";
			break;
		case 19:
			cout << "19th, ";
			break;
		case 20:
			cout << "20th, ";
			break;
		case 21:
			cout << "21st, ";
			break;
		case 22:
			cout << "22nd, ";
			break;
		case 23:
			cout << "23rd, ";
			break;
		case 24:
			cout << "24th, ";
			break;
		case 25:
			cout << "25th, ";
			break;
		case 26:
			cout << "26th, ";
			break;
		case 27:
			cout << "27th, ";
			break;
		case 28:
			cout << "28th, ";
			break;
		case 29:
			cout << "29th, ";
			break;
		case 30:
			cout << "30th, ";
			break;
		case 31:
			cout << "31st, ";
			break;
	}
	
	switch(now->tm_year + 1900)
	{
		case 2015:
			cout << "2015";
			break;
		case 2016:
			cout << "2016";
			break;
		case 2017:
			cout << "2017";
			break;
		case 2018:
			cout << "2018";
			break;
		case 2019:
			cout << "2019";
			break;
		case 2020:
			cout << "2020";
			break;
		case 2021:
			cout << "2021";
			break;
		case 2022:
			cout << "2022";
			break;
		case 2023:
			cout << "2023";
			break;
		case 2024:
			cout << "2024";
			break;
		default:
			cout << "and some time later...";
			break;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////musical note functions
//C
void c0(double length)  
{
	Beep(16.35, length);
}
void c1(double length)
{
	Beep(32.70, length);
}
void c2(double length)
{
	Beep(65.41, length);
}
void c3(double length)
{
	Beep(130.81, length);
}
void c4(double length)
{
	Beep(261.63, length);
}
void c5(double length)
{
	Beep(523.25, length);
}
void c6(double length)
{
	Beep(1046.50, length);
}
void c7(double length)
{
	Beep(2093.00, length);
}
void c8(double length)
{
	Beep(4186.01, length);
}

//C#/Db
void cs0(double length)  
{
	Beep(17.32, length);
}
void cs1(double length)
{
	Beep(34.65, length);
}
void cs2(double length)
{
	Beep(69.30, length);
}
void cs3(double length)
{
	Beep(138.59, length);
}
void cs4(double length)
{
	Beep(277.18, length);
}
void cs5(double length)
{
	Beep(554.37, length);
}
void cs6(double length)
{
	Beep(1108.73, length);
}
void cs7(double length)
{
	Beep(2217.46, length);
}
void cs8(double length)
{
	Beep(4434.92, length);
}

//D
void d0(double length)  
{
	Beep(18.35, length);
}
void d1(double length)
{
	Beep(36.71, length);
}
void d2(double length)
{
	Beep(73.42, length);
}
void d3(double length)
{
	Beep(146.83, length);
}
void d4(double length)
{
	Beep(293.66, length);
}
void d5(double length)
{
	Beep(587.33, length);
}
void d6(double length)
{
	Beep(1174.66, length);
}
void d7(double length)
{
	Beep(2349.32, length);
}
void d8(double length)
{
	Beep(4698.63, length);
}

//D#/Eb
void ds0(double length)  
{
	Beep(19.45, length);
}
void ds1(double length)
{
	Beep(38.89, length);
}
void ds2(double length)
{
	Beep(77.78, length);
}
void ds3(double length)
{
	Beep(155.56, length);
}
void ds4(double length)
{
	Beep(311.13, length);
}
void ds5(double length)
{
	Beep(622.25, length);
}
void ds6(double length)
{
	Beep(1244.51, length);
}
void ds7(double length)
{
	Beep(2489.02, length);
}
void ds8(double length)
{
	Beep(4978.03, length);
}

//E
void e0(double length)  
{
	Beep(20.60, length);
}
void e1(double length)
{
	Beep(41.20, length);
}
void e2(double length)
{
	Beep(82.41, length);
}
void e3(double length)
{
	Beep(164.81, length);
}
void e4(double length)
{
	Beep(329.63, length);
}
void e5(double length)
{
	Beep(659.25, length);
}
void e6(double length)
{
	Beep(1318.51, length);
}
void e7(double length)
{
	Beep(2637.02, length);
}
void e8(double length)
{
	Beep(5274.04, length);
}

//F
void f0(double length)  
{
	Beep(21.83, length);
}
void f1(double length)
{
	Beep(43.65, length);
}
void f2(double length)
{
	Beep(78.31, length);
}
void f3(double length)
{
	Beep(174.61, length);
}
void f4(double length)
{
	Beep(349.23, length);
}
void f5(double length)
{
	Beep(698.46, length);
}
void f6(double length)
{
	Beep(1396.91, length);
}
void f7(double length)
{
	Beep(2793.83, length);
}
void f8(double length)
{
	Beep(5587.65, length);
}

//F#/Gb
void fs0(double length)  
{
	Beep(23.12, length);
}
void fs1(double length)
{
	Beep(46.25, length);
}
void fs2(double length)
{
	Beep(92.50, length);
}
void fs3(double length)
{
	Beep(185.00, length);
}
void fs4(double length)
{
	Beep(369.99, length);
}
void fs5(double length)
{
	Beep(739.99, length);
}
void fs6(double length)
{
	Beep(1479.98, length);
}
void fs7(double length)
{
	Beep(2959.96, length);
}
void fs8(double length)
{
	Beep(5919.91, length);
}

//G
void g0(double length)  
{
	Beep(24.50, length);
}
void g1(double length)
{
	Beep(49.00, length);
}
void g2(double length)
{
	Beep(98.00, length);
}
void g3(double length)
{
	Beep(196.00, length);
}
void g4(double length)
{
	Beep(392.00, length);
}
void g5(double length)
{
	Beep(783.99, length);
}
void g6(double length)
{
	Beep(1567.98, length);
}
void g7(double length)
{
	Beep(3135.96, length);
}
void g8(double length)
{
	Beep(6271.93, length);
}

//G#/Ab
void gs0(double length)  
{
	Beep(25.96, length);
}
void gs1(double length)
{
	Beep(51.91, length);
}
void gs2(double length)
{
	Beep(103.83, length);
}
void gs3(double length)
{
	Beep(207.65, length);
}
void gs4(double length)
{
	Beep(415.30, length);
}
void gs5(double length)
{
	Beep(830.61, length);
}
void gs6(double length)
{
	Beep(1661.22, length);
}
void gs7(double length)
{
	Beep(3322.44, length);
}
void gs8(double length)
{
	Beep(6644.88, length);
}

//A
void a0(double length)  
{
	Beep(27.50, length);
}
void a1(double length)
{
	Beep(55.00, length);
}
void a2(double length)
{
	Beep(110.00, length);
}
void a3(double length)
{
	Beep(220.00, length);
}
void a4(double length)
{
	Beep(440.00, length);
}
void a5(double length)
{
	Beep(880.00, length);
}
void a6(double length)
{
	Beep(1760.00, length);
}
void a7(double length)
{
	Beep(3520.00, length);
}
void a8(double length)
{
	Beep(7040.00, length);
}

//A#/Bb
void as0(double length)  
{
	Beep(29.14, length);
}
void as1(double length)
{
	Beep(58.27, length);
}
void as2(double length)
{
	Beep(116.54, length);
}
void as3(double length)
{
	Beep(233.08, length);
}
void as4(double length)
{
	Beep(466.16, length);
}
void as5(double length)
{
	Beep(932.33, length);
}
void as6(double length)
{
	Beep(1864.66, length);
}
void as7(double length)
{
	Beep(3729.31, length);
}
void as8(double length)
{
	Beep(7458.62, length);
}

//B
void b0(double length)  
{
	Beep(30.87, length);
}
void b1(double length)
{
	Beep(61.74, length);
}
void b2(double length)
{
	Beep(123.47, length);
}
void b3(double length)
{
	Beep(246.94, length);
}
void b4(double length)
{
	Beep(493.88, length);
}
void b5(double length)
{
	Beep(987.77, length);
}
void b6(double length)
{
	Beep(1975.53, length);
}
void b7(double length)
{
	Beep(3951.07, length);
}
void b8(double length)
{
	Beep(7902.13, length);
}
