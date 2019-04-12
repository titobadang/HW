#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    int month, day, year;
	cout << "Enter Month: " << endl;
	cin >> month;
	cout << "Enter Day: " << endl;
	cin >> day;
	cout << "Enter Year: " << endl;
	cin >> year;
	
	if (month==1 && day <=31 && year >=1900)
	cout <<"January" << " " << day <<"," << year<< endl;
	else if (month==1 && day > 31 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==2 && day <=28 && year >=1900)
	cout <<"February" << " " << day <<"," << year<< endl;
	else if (month==2 && day > 28 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==3 && day <=31 && year >=1900)
	cout <<"March" << " " << day <<"," << year<< endl;
	else if (month==3 && day > 31 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==4 && day <=30 && year >=1900)
	cout <<"April" << " " << day <<"," << year<< endl;
	else if (month==4 && day > 30 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==5 && day <=31 && year >=1900)
	cout <<"May" << " " << day <<"," << year<< endl;
	else if (month==5 && day > 31 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==6 && day <=30 && year >=1900)
	cout <<"June" << " " << day <<"," << year<< endl;
	else if (month==6 && day > 30 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==7 && day <=31 && year >=1900)
	cout <<"July" << " " << day <<"," << year<< endl;
	else if (month==7 && day > 31 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==8 && day <=31 && year >=1900)
	cout <<"August" << " " << day <<"," << year<< endl;
	else if (month==8 && day > 31 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==9 && day <=30 && year >=1900)
	cout <<"September" << " " << day <<"," << year<< endl;
	else if (month==9 && day > 30 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==10 && day <=31 && year >=1900)
	cout <<"October" << " " << day <<"," << year<< endl;
	else if (month==10 && day > 31 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==11 && day <=30 && year >=1900)
	cout <<"November" << " " << day <<"," << year<< endl;
	else if (month==11 && day > 30 && year < 1900)
	cout << "Invalid date" << endl;
	if (month==12 && day <=31 && year >=1900)
	cout <<"December" << " " << day <<"," << year<< endl;
	else if (month==12 && day > 31 && year < 1900)
	cout << "Invalid date" << endl;

	_getch ();
	return 0;
	 
}
