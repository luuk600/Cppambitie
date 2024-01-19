#include <iostream> // is used for printing to screen

using namespace std; // making it easy to print to screen

int main()
{
	bool done = true; // boolian
	int num1 = 100;   // making an interger called num 1 with the value 100
	int num2 = 5;     // making an interger called num 2 with the value 5

	while (done)      // while done = true do the following code
	{
		num1 -= num2; // substracting num 2 off num 1
		cout << num1 << endl; // cout is C out printing it to the screen , endl = end line 
		if (num1 <= 0) // if num 1 is less or equal to 0 do the following
		{
			done = false; // done is set false and so the while loop stops
			cout << "good job" << endl; // printing good job to the screen
		}
	}
}
