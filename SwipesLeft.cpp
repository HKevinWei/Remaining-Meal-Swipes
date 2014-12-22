#include <iostream>
#include <string>

using namespace std;

int main()
{
		int day;
		cout << "What day is it: (Monday = 1, Tuesday = 2, ...)" << endl;
		cin >> day;

	
		if (day = 1)
			cout << "You should have 19 meals left at the start of today." << endl;

		else if (day = 2)
			cout << "You should have 16 meals left at the start of today." << endl;

		else if (day = 3)
			cout << "You should have 13 meals left at the start of today." << endl;

		else if (day = 4)
			cout << "You should have 10 meals left at the start of today." << endl;

		else if (day = 5)
			cout << "You should have 7 meals left at the start of today." << endl;

		else if (day = 6)
			cout << "You should have 4 meals left at the start of today." << endl;

		else
			cout << "You should have 2 meals left at the start of today." << endl << "Don't worry, swipes reset tomorrow morning!";
}
