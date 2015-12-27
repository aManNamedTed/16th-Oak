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
void mainmenu(string); //main menu returns a string that points to which story to play
void my_story(string); //the main story, using the player's name
void my_level_zero(string); //level zero of main story
void my_level_one(string); //level one of main story
void my_level_two(string); //level two of main story
void my_level_three(string); //level three of main story
void ruby_story(string);  //Ruby's story, also uses player's name
void seb_story(string); //Seb's story, also uses player's name
void credits(bool &); //prints credits

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
//global variables
bool s, met_ruby, met_seb;

/////////////////////////////////////////////////////////////////////////game functions
int main()
{
	string name;
	string story;
	bool done = false;
	
	//GAME START
	do
	{	
		//description();
		//tutorial(name, s);
		//mainmenu(name);
		
		name = "Poop";
		//my_level_two(name); you need to edit level two to include exposition of future events.
		my_level_three(name);
		//credits(done);
	}while(!done);
	
	return 0;
}

void description()
{
	cout << " \t============================================================" << endl;
	cout << " \t   #   ####  TTT H H     &&&         OOOO    AAA   KK   KK " << endl;
 	cout << " \t ###  ######  T  HHH    && &&       OOOOOO  AAAAA  KK  KK  " << endl;
	cout << " \t  ##  ##      T  H H    && &&  &&   OO  OO AA   AA KK KK   " << endl;
	cout << " \t  ##  #####              &&&   &&   OO  OO AA   AA KKKKK   " << endl;
	cout << " \t  ##  ##  ##           &&   &&&&    OO  OO AAAAAAA KK  KK  " << endl;
	cout << " \t  ##  ######           &&    &&     OOOOOO AA   AA KK   KK " << endl;
	cout << " \t ####  ####             &&&&&  &&    OOOO  AA   AA KK    KK" << endl;
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
	cout << name << ", do you want the best possible gaming experience?" << endl;////////////////////#################rephrase this
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
	cout << "Finally, " << name << ", this game plays the occasional 'beep' and 'boop'," << endl;
	cout << "so adjust your speaker settings accordingly." << endl << endl;
	cout << "Please be courteous of others!" << endl;
	
	getchar();
	
	cout << "Beep! ";
	c6(600); //beep
	cout << "Boop!" << endl;
	c4(600); //boop
	
	cout << endl << "Have fun!!" << endl;
	getchar();
}

void mainmenu(string name)
{
	wipe();
	bool done;
	string command;
	string their_story;
	
	//checking for s as the last letter of name for correct possessive noun
	checkS(name, s);
	do
	{
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
			cout << "\t\t\t[Ruby's Story]" << endl;
		}
		
		if(met_seb == false)
		{
			cout << "\t\t\t   [Locked!]" << endl;
		}
		else
		{
			cout << "\t\t\t[Seb's Story]" << endl;
		}
		
		getcom(command);
		checkloc(command, their_story, "go to Ruby's Story", "go to Seb's Story");
		if(command == their_story)
		{
			my_story(name); //'their_story' clashed with function name, 'my_story'; had to differentiate
		}
		if(command == "go to Ruby's Story")
		{
			ruby_story(name);
		}
		if(command == "go to Seb's Story")
		{
			seb_story(name);
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
}

void my_level_zero(string name)
{
	wipe();
	
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
	cout << "Strange Man: Stand still.";
	getchar();
	cout << "Strange Man: Scanning..." << endl;
	getchar();
	
	//mock hacking script variant
	
	if(name == "David Amante")
	{
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
		cout << "\t\t December 24th, 2015, 8:20PM on the night train w/ Max & Dad." << endl;
	}
	else
	{
		cout << "Holding a finger to his earpiece, he says," << endl;
		cout << "Strange Man: 01111001 01101111 01110101" << endl;
		getchar();
		cout << "Strange Man: 01100001 01110010 01100101" << endl;
		getchar();
		cout << "Strange Man: 01101110 01101111 01110100" << endl;
		getchar();
		cout << "Strange Man: 01101000 01101001 01101101" << endl;
		getchar();
		
		cout << "Strange Man: My apologies." << endl;
		sleep(1.2);
		cout << "Strange Man: Wrong person." << endl;
		getchar();
		cout << "Strange Man: Please, after you." << endl << endl;
		sleep(1.2);
		cout << "The man gestures for you to enter." << endl;
	}
	getchar();
}

void my_level_one(string name)
{
	string command;
	
	cout << "Upon stepping foot in your apartment after a long day at work," << endl;
	cout << "your home phone rings." << endl << endl;
	
	cout << "Answer the phone?" << endl;
	cout << "<yes>" << endl;
	getcom(command);
	checkcom(command, "yes", "Yes");
	
	if(command == "yes" || command == "Yes")
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
				sleep(1);
				cout << "*click*" << endl;
				
				cout << "you: . ";
				sleep(1);
				cout << ". ";
				sleep(1);
				cout << ".";
				sleep(1);
				
				cout << "you: Shit." << endl;
				getchar();		
			}
		}
	}
}

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
	checkcom(command, "leave");
	if(command == "leave")
	{
		cout << "You grab your keys and leave your apartment." << endl;
	}
	getchar();
}

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
	if(command == "Ron")
	{
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
	}	
	
	while(!done)
	{
		cout << "You are in the hallway by the front door. There is a set of [stairs], a" << endl;
		cout << "[door] to the left, a [room] to the right, and [music] coming from the" << endl;
		cout << "end of the hallway." << endl;
		
		getcom(command);
		checkloc(command, "go to stairs", "go to door", "go to room", "go to music");
		if(command == "go to stairs" && liz == false)
		{
			cout << "Upon turning the corner of the stairs, a large man in a suit stops" << endl;
			cout << "you in your tracks." << endl;
			getchar();
			cout << "Guard: <Name>?" << endl;
			getcom(command);
			checkcom(command, "Name");
			cout << "Stating your name, the guard checks his list." << endl;
			getchar();
			cout << "Guard: Sorry, " << name << ". You're not on the list." << endl;
			cout << "The guard turns you around and sends you back down the stairs." << endl;
			getchar();
			cout << "*you*: If only there was some way I could get past this guard." << endl;
			cout << "You return to where you were." << endl;
			guard = true;
			getchar();
		}
		//go to door to garage
		if(command == "go to door" && myrtle == false)
		{
			cout << "It's locked. You go back to where you were." << endl;
			getchar();
		}
		else if(command == "go to door" && myrtle == true && guard == false)
		{
			cout << "As you're about to put the key in the lock, you hear a cry" << endl;
			cout << "come from upstairs." << endl;
			getchar();
			cout << "You return to where you were." << endl;
		}
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
				if(command == "go to front door")
				{
					cout << "You leave the stairwell." << endl;
					leave = true;
					getchar();
				}
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
						
						if(command == "go to door" && people == false)
						{
							cout << "There is a red light on right above the doorway. Underneath it reads," << endl;
							cout << "\"Do not disturb\"" << endl;
							cout << "Maybe it's best not to go in there." << endl;
							getchar();
							cout << "You return to where you were." << endl;
							getchar();
						}
						
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
		
						if(command == "go to people" && liz == false)
						{
							cout << "You approach the two. The boy's messy black hair rests on the" << endl;
							cout << "shoulder of his friend. Thick curly hair runs down the back of" << endl;
							cout << "the lawn chair. Seems familiar." << endl;
							getchar();
							cout << "You're not quite sure where you've seen this before, but you" << endl;
							cout << "gather the courage to say <hello>." << endl;
							getcom(command);
							checkcom(command, "hello", "hello?");
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
								checkcom(command, "sit");
								
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
								checkcom(command, "her parents passed?");
								
								cout << "Q: Yeah. Well one day her father had picked her up from second grade" << endl;
								cout << "Q: because her mother was enduring <chemotherapy>." << endl;
								getcom(command);
								checkcom(command, "chemotherapy");
								cout << "Q: She was diagnosed about a week prior." << endl;
								getchar();
								cout << "Q: Nonetheless, she really loved her father. He was the one who would" << endl;
								cout << "Q: look after her when her mother was at work. He always supported her" << endl;
								cout << "Q: and always emphasized the importance of elegance and beauty." << endl;
								getchar();
								cout << "Q: I remember him too; he was a nice man." << endl;
								cout << "<so??" << endl;
								getcom(command);
								checkcom(command, "so?");
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
								cout << "Q:	Next thing she knew, her father was on the floor, gasping for air." << endl;
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
								checkcom(command, "reflect");
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
								cout << "Q: This is " << name << ". We have Sociology together." << name << endl;
								cout << "Q: and Richard are best buds." << endl;
								getchar();
								cout << "Liz: Really?! But Richie is on YOUR shoulder, hmm?" << endl;
								getchar();
								cout << "Q: !!?" << endl;
								cout << "Q: What! Noo, it's not like that!!" << endl;
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
								checkcom(command, "reflect");
								cout << "*you*: Maybe I could ask her about the <guard> upstairs?" << endl;
								getcom(command);
								checkcom(command, "guard");
								cout << "You describe the large man in a suit taking names at the top" << endl;
								cout << "of the stairs." << endl;
								getchar();
								cout << "Liz: Wait, what?" << endl;
								cout << "Liz: What did you say he was wearing? <A suit>?" << endl;
								getcom(command);
								checkcom(command, "A suit");
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
								sleep(.5);
								cout << "E" << endl;
								sleep(.5);
								cout << " " << endl;
								sleep(.5);
								cout << "G" << endl;
								sleep(.5);
								cout << "R" << endl;
								sleep(.5);
								cout << "A" << endl;
								sleep(.5);
								cout << "C" << endl;
								sleep(.5);
								cout << "E" << endl;
								sleep(.5);
								cout << "F" << endl;
								sleep(.5);
								cout << "U" << endl;
								sleep(.5);
								cout << "L" << endl;
								sleep(.5);
								
								cout << "Cascades down from her elbow to her wrist in Amatic letters." << endl;
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
								cout << "\tDo Not Disturb" << endl;
								cout << "Illuminates a deep red." << endl;
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
								checkcom(command, "okay");
								cout << "Q: Sounds good. We'll be here--" << endl;
								cout << "Richard throws up in the lawn chair you were sitting in." << endl;
								getchar();
								cout << "You return to where you were." << endl;
								getchar();
							}
						}
						
						else if(command == "go to people" && liz == true)
						{
							cout << "Richard gets up from his seat and dry heaves over the floor" << endl;
							cout << "Maybe it's best not to disturb them." << endl;
							getchar();
							cout << "You return to where you were." << endl;
							getchar();
						}
					}
				}
			}
		}
		
		//myrtle's room
		if(command == "go to room" && ron == false)
		{
			cout << "You knock on the door." << endl;
			getchar();
			cout << "???: Go away." << endl;
			getchar();
			cout << "You turn around and go back to where you were." << endl;
			getchar();	
		}
		else if(command == "go to room" && ron == true && myrtle == true)
		{
			cout << "Myrtle: I'm busy!!" << endl;
			getchar();
			cout << "You head back to where you were." << endl;
			getchar();
		}
		else if(command == "go to room" && ron == true)
		{
			cout << "You knock on the door." << endl;
			getchar();
			cout << ". ";
			sleep(1);
			cout << ". ";
			sleep(1);
			cout << "." << endl;
			sleep(1);
			
			cout << "The door cracks open and a head peeks out at you." << endl;
			getchar();
			cout << "<hello?>" << endl;
			getcom(command);
			checkcom(command, "hello?");
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
				checkcom(command, "wait, what?");
				
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
					checkcom(command, "confusion");
					
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
						checkcom(command, "r?");
						if(command == "r?")
						{
							cout << "you: An 'R'?" << endl;
							getchar();
							cout << "Myrtle: And do you know what an 'R' represents in the chemistry world?!" << endl;
							getchar();
							cout << "<no?>" << endl;
						} 
						
						getcom(command);
						checkcom(command, "no?", "the gas constant?", "the gas constant.", "the gas constant");
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
				
				if(command == "go to T.V")
				{
					cout << "Sports Anchor: The thirty, the twenty, the ten!" << endl;
					cout << "Sports Anchor: Touchdown, Anteaters!" << endl << endl;
					cout << "College Kids: (collective cheering)" << endl;
					getchar();
					cout << "It seems they are busy. You retreat back to the music." << endl;
					getchar();
				}
				
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
					if(command == "comfort")
					{
						cout << "you: You alright in there?" << endl;
						getchar();
						cout << "???: iusofqwljfoiwej" << endl;
						getchar();
						cout << "you: Hello?";
						getchar();
						cout << "???: *dry heaves* Get.";
						getchar();
						cout << " Heather." << endl;
						cout << "???: *even more heaving*" << endl;
						getchar();
						cout << "You slowly back away from the door, back to the music." << endl;
						getchar();
						ron = true;
					}
				}
				
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////RUBY STORY FUNCTIONS
void ruby_story(string name)
{
	;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////SEB STORY FUNCTIONS
void seb_story(string name)
{
	;
}

void credits(bool &done)
{
	cout << "\t  Game: 16th & Oak" << endl;
	cout << "\tLanguage: C++" << endl;
	cout << "\tCreated: November 3rd, 2015" << endl;
	cout << "\tFinished: December 25th, 2015" << endl;
	cout << "\tAuthor: David Amante" << endl;
	cout << "\tEmail: davidamante17@yahoo.com" << endl << endl;
	getchar();
	
	cout << "\t\t The End!" << endl;
	getchar();
	done = true;
}

/////////////////////////////////////////////////////////////////////text manipulation functions
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
		cout << "Invalid command." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1)
{
	while(command != option1)
	{
		cout << "Invalid command." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2)
{
	while(command != option1 && command != option2)
	{
		cout << "Invalid command." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2, string option3)
{
	while(command != option1 && command != option2 && command != option3)
	{
		cout << "Invalid command." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2, string option3, string option4)
{
	while(command != option1 && command != option2 && command != option3 && command != option4)
	{
		cout << "Invalid command." << endl;
		getcom(command);
	}
}

void checkcom(string &command, string option1, string option2, string option3, string option4, string option5)
{
	while(command != option1 && command != option2 && command != option3 && command != option4 && command != option5)
	{
		cout << "Invalid command." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location)
{
	while(command != location)
	{
		cout << "Invalid location." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2)
{
	while(command != location1 && command != location2)
	{
		cout << "Invalid location." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2, string location3)
{
	while(command != location1 && command != location2 && command != location3)
	{
		cout << "Invalid location." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2, string location3, string location4)
{
	while(command != location1 && command != location2 && command != location3 && command != location4)
	{
		cout << "Invalid location." << endl;
		getcom(command);
	}
}

void checkloc(string &command, string location1, string location2, string location3, string location4, string location5)
{
	while(command != location1 && command != location2 && command != location3 && command != location4 && command != location5)
	{
		cout << "Invalid location." << endl;
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

//////////////////////////////////////////////////////////////////////////current date function
void current_date()
{
	time_t t = time(0);
	struct tm * now = localtime(&t);
	
	cout << "\t\t\tIt's ";
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
	}
}

//////////////////////////////////////////////////////////////////////////musical note functions
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
