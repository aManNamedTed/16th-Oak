#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t t = time(0);
	struct tm * now = localtime(&t);
	
	cout << "It's ";
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
	
	cout << "." << endl;
	return 0;
}
