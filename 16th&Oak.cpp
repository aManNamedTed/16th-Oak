#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>

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
void getcom(string &); //gets command from user
void yesorno(string &); //checks for yes/no commands
void checkS(string, bool&); //checks if name ends in an 's'
void checkcom(string &, string); //checks for correct location commands
void checkcom(string &, string, string); //checks for correct location commands
void checkcom(string &, string, string, string); //checks for correct location commands

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
		my_story(name); //in main menu, this works
		
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
	checkcom(response, "go to next level");
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
	cout << name << ", do you want the best game-playing experience possible?" << endl;
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
		checkcom(command, their_story, "go to Ruby's Story", "go to Seb's Story");
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
	cout << "It's Friday December 25th, 2015." << endl;//################################CURRENTDATE FUNCTION NEEDED
    
	cout << endl << "The train bell wakes you as you realize you've reached your stop." << endl;
	cout << "You leave the train and begin to walk back to your apartment complex." << endl;
    getchar();
    
    //(insert some Jolly Oxen here using beeps and frequencies)###############################################
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
		sleep(1.5);
		cout << "Strange Man: 01100001 01110010 01100101" << endl;
		sleep(1.7);
		cout << "Strange Man: 01101110 01101111 01110100" << endl;
		cout << "Strange Man: 01101000 01101001 01101101" << endl;
		getchar();
		
		cout << "My apologies." << endl;
		sleep(.3);
		cout << "Wrong person." << endl;
		getchar();
		
		cout << "Please, after you." << endl << endl;
		sleep(.4);
		cout << "The man gestures for you to enter." << endl;
	}
	getchar();
}

void my_level_one(string name)
{
	;
}

void my_level_two(string name)
{
	;
}

void my_level_three(string name)
{
	;
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

void yesorno(string &response)
{
	while(response != "yes" && response != "no" && response != "Yes" && response != "No")
	{
		cout << "Invalid response." << endl;
		getcom(response);
	}
}

void checkcom(string &command, string location)
{
	while(command != location)
	{
		cout << "Invalid location." << endl;
		getcom(command);
	}
}
void checkcom(string &command, string location1, string location2)
{
	while(command != location1 && command != location2)
	{
		cout << "Invalid location." << endl;
		getcom(command);
	}
}
void checkcom(string &command, string location1, string location2, string location3)
{
	while(command != location1 && command != location2 && command != location3)
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
