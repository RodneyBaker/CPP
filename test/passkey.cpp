// rodneybaker passkey.cpp 2020/01/13

#include <iostream>
using namespace std;


// Find the first digit 
int firstDigit(int n)
{
	// Find total number of digits - 1 
	int digits = (int)log10(n);

	// Find first digit 
	n = (int)(n / pow(10, digits));

	// Return first digit 
	return n;
}

// Find the last digit 
int lastDigit(int n)
{
	// return the last digit 
	return (n % 10);
}

int lastTwoDigits(int n)
{
	// return last two digits 
	return (n % 100);
}

//Main PRogram

int main()
{
	//sillytitletest
	int input = 987654321;
	int output = lastTwoDigits(input);
	cout << "year:  " << output << endl;

begin:

	cout << "Type in your codeword (current phase color):  (Û²°)green, amber, black, mauve, brown, beige):   " << flush;
	string x;
	cin >> x;
	
	string str(x);
	cout << "Enter your unique passcode number of any length:  " << flush;
	int n;
	cin >> n;



	int digit = 0;
	digit = lastDigit(n);

	//catch error entries
	if (digit <= 0)
	{ 
		cerr << "Alert!\n  Error code 0:  \nDuress Code Entry Received. " <<
			"\nSecurity has been notified.\n\n\n\n\n\n\n" << endl;
		return 1;
}
	int origin;
	if (digit >= 6 and digit <= 9) digit = digit - 5, origin = 5; //calibrate the scope
	else
		origin = 0;
		int mDigit = digit - 1;
	
	
	string passLetter;
	passLetter = str.at(mDigit); // use the modified digit value single letter from string
	
	cout << "Your passcode letter based on the number " << n << " is " << passLetter << endl;
	cout << "Your passkey icon is a " << x << " number " << origin + digit<< endl;
	//todo:  error routines for zero etc.


	cout << "\n\tWould you like to run the program again? (Y/N) ";
	string ans;
	cin >> ans;
	if (ans == "y" or ans == "Y")
	{
		goto begin; //yes, got is not preferred but useful for fun/testing
	}//replace with proper loop as necessary

	return 0;
}

