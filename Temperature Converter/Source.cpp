// This program will convert fahrenheit to celsuius and vice versa :)
#include <iostream> 
using namespace std;

void fahToCel(){
	double a, b;
	cout << "\nPlease enter the number you are "
		 << "trying to convert in fahrenheit to celsius." << endl;

	cin >> a;

	b = (a-32) * (5.0/9);
	
	cout << a << " Fahrenheit is equal to " << b << " Celsius." << endl;
}
void celToFah(){
	double a, b;
	cout << "\nPlease enter the number you are "
		 << "trying to convert in celsius to fahrenheit." << endl; 

	cin >> a;

	b = (a*(9.0/5)) + 32; 

	cout << a << " Celsius is equal to " << b << " Fahrenheit." << endl;
}

void again(){
	int choice(0);
	cout << "\nWould you like to convert more?" << endl
			 << "1. Fahrenheit to Celsius" << endl
			 << "2. Celsius to Fahrenheit" << endl
			 << "3. No more." << endl << endl;

	cin >> choice; 

		if (choice == 1)
		{
			fahToCel();
			again();
		}
		else if (choice == 2)
		{
			celToFah();
			again();
		}
		else if (choice == 3)
		{
			cout << "Goodbye :)" << endl;
		}
		else 
		{
			cout << "Invlaid input." << endl;
		}

}


int main(){
	int choice(0);
		

		cout << "Temperature Conversion Calculator: "
			 << "Please select your conversion by inputting the number." << endl

			 << "1. Fahrenheit to Celsius" << endl
			 << "2. Celsius to Fahrenheit" << endl << endl;

		cin >> choice; 
		

		if (choice == 1)
		{
			fahToCel();
			again();
		}
		else if (choice == 2)
		{
			celToFah();
			again();
		}
		else 
		{
			cout << "Invlaid input." << endl;
		}



	system("pause");
	return 0;
}
