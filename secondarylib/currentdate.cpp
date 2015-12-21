#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t t = time(0);
	struct tm * now = localtime(&t);
	//cout << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' << now->tm_mday << endl;
	
	if((now->tm_mon + 1) == 12)
	{
		cout << "It's December ";
	}
	
	if((now->tm_mday) == 12)
	{
		cout << "twelfth, ";
	}
	
	if((now->tm_year + 1900) == 2015)
	{
		cout << "2015." << endl;
	}
	return 0;
}
