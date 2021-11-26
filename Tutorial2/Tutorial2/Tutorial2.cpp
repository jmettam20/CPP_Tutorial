// Tutorial2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//FIND ISSUES WITH CODE

// Issue 1
/*#include <iostream>
using namespace std; //must be used for i/o commands such as cout and endl

int main()
{
	srand(static_cast<int>(time(0)));
	cout << "Roll dice! Value: " << (rand() % 6) + 1 << endl;
	system("pause");
	return 0;
}*/

// Issue 2

/*#include <iostream>
using namespace std;
int main()
{
	int birthYear; // birthYear wasnt defined
	cout << "Enter your birth year: ";
	cin >> birthYear; // didnt have semi colon 
	cout << "This year you are (or will be)" << 2018 - birthYear << endl; //second " was missing 
	getchar();
} // end } was missing */

//Issue 3
/*#include <iostream>
using namespace std;
int main() //uncecissary semi colon 
{
	cout << "Anyone there? " << endl;
	getchar();
	return 0;
} //missing } */ 

// Issue 4 

/*#include <iostream>
using namespace std;
int main() //function was spelled w capital letter + unused function + needed to add srand
{
	//int value;
	srand(static_cast<int>(time(0)));
	cout << "Roll dice! Value: " << (rand() % 6) + 1 << endl;
	system("pause"); 
	return 0;
}*/

// Issue 5 - must use float

/*#include <iostream>
using namespace std;
int main()
{
	int tokens, redTokens;
	cout << "Enter number of tokens in bag: ";
	cin >> tokens;
	cout << "Enter number of red tokens: ";
	cin >> redTokens;
	cout << "There are " << (redTokens / static_cast<float>(tokens)) * 100 << "% red tokens in bag.";
	cout << endl;
	getchar(); getchar();
	return 0;
}*/ 

// Issue 6


