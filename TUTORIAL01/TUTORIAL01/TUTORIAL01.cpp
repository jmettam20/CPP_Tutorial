#include <iostream>
using namespace std;
int main()
{
	int birthYear;
	cout << "Enter your birth year: "; //output text
	cin >> birthYear; //input int to variable
	cout << "This year you are (or will be) " << 2021 - birthYear << endl; //output text + 2021 - the birthYear variable then adds new line via endl
	system("pause"); //pause and wait for keyboard interrupt (is platform specific)  
	return 0;
}
