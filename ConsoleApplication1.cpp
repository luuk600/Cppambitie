#include <iostream>
#include <string>

using namespace std;




int main() 
{
	bool done = true;
	int num1 = 100;
	int num2 = 5;
	
	while (done)
	{
		num1 -= num2;
		cout << num1 << endl;
		if (num1 <= 0)
		{
			done = false;
			cout << "good job" << endl;
			
		}
	}
}
