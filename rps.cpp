#include <iostream>
#include <string>

using namespace std;


//this will be used as a decider for one of the events that occur in dayata
//best 2 out of 3

int main()
{
	string user = "User";
	string oppo, choice;
	int choi[5];
	
	cout << "Pick an opponent" << endl;
	cout << "Heather" << endl;
	cout << "Myrtle" << endl;
	cout << "Willow" << endl;
	cout << "Ron" << endl;
	cout << "Liz" << endl;
	cin >> oppo;
	
	if(oppo == "Heather")
	{
		choi[] = {1, 2,}
	}
	else if(oppo == "Myrtle")
	{
		
	}
	else if(oppo == "Willow")
	{
		
	}
	else if(oppo == "Ron")
	{
		
	}
	else if(oppo == "Liz")
	{
		
	}
	
	cout << "Pick one: rock, paper, scissors" << endl;
	cin >> choice;
	
	while(choice != "rock" && choice != "Rock" && choice != "paper" && choice != "Paper" && choice != "scissors" && choice != "Scissors")
	{
		cout << "Pick one of the three." << endl;
		cin >> choice;
	}
	
	return 0;
}
