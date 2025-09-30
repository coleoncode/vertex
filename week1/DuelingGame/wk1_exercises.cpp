#include <iostream>
#include <string>

using namespace std;

void greet();
void kiloToMiles();
void celsiusToFhrt();
void poundsToKilograms();
void dollarsToEuros();
void print(string message);

void week1 () {
	greet();
	celsiusToFhrt();
	kiloToMiles();
	poundsToKilograms();
	dollarsToEuros();
}
/*
1. Ask for the Name and Age of a User :
Step - by - step :
	Declare a std::string variable for the name and an int for the age.
	Use std::cout to ask the user for their name and std::cin to read it.
	Use std::cout again to ask for the user's age and std::cin to read the number.
	Print the name and age using std::cout
*/
void greet() {
	string Input;

	print("Please input your name");
	cin >> Input;
	print("Thank you " + Input);

	print("Please input your age");
	cin >> Input;
	print("Ah so you are " + Input + " years old!");
}

/*
	2. Ask the User for a Temperature in Celsius and Convert to Fahrenheit :
		Step - by - step :
			Ask the user to input a temperature in Celsius.
			Store that temperature in a float variable.
			Convert it to Fahrenheit using the formula F = (C * 9 / 5) + 32.
			Print the result using cout.
*/
void celsiusToFhrt() {
	float celsius;
	print("Enter a temperature in Celsius: ");
	cin >> celsius;
	float fahrenheit = (celsius * 9 / 5) + 32;
	print(to_string(celsius) + " Celsius is equal to: " + to_string((double)fahrenheit) + " Fahrenheight");
}

/*
	Part b.Convert Kilometers to Miles :
		Step - by - step :
			Ask the user to input a distance in kilometers.
			Store the distance in a float variable.
			Convert it to miles using the formula Miles = Km * 0.621371.
			Print the result.
*/
void kiloToMiles() {
	float kilometers;

	print("Enter a distance in Kilometers: ");
	cin >> kilometers;

	float miles = kilometers * 0.621371;
	print(to_string((double)kilometers) + " KM's is equal to " + to_string((double)miles) + " miles");
}
/*
	Part b.Convert Pounds to Kilograms:
		Step - by - step :
			Ask the user to input a weight in pounds.
			Store the weight in a float variable.
			Convert it to kilograms using the formula Kg = Pounds * 0.453592.
			Print the result.
*/
void poundsToKilograms() {
	float pounds;
	print("Enter a weight in pounds: ");
	cin >> pounds;

	float kilograms = pounds * 0.453592;
	print(to_string(pounds) + " pounds is equal to " + to_string(kilograms) + " kilograms");
}
/*
	Part d.Convert Dollars to Euros :
		Step - by - step :
			Ask the user to input an amount in dollars.
			Store the amount in a float variable.
			Convert it to euros using a conversion rate(you can set one like Euros = Dollars * 0.85).
			Print the result.
*/
void dollarsToEuros() {
	float dollars;
	print("Enter a dollar amount");
	cin >> dollars;

	float euros = dollars * 0.85;
	print(to_string((double)dollars) + " dollars is equal to " + to_string((double)euros) + " euros");
}

// ----------------------------------
// Util
// ----------------------------------
void print(string message) {
	cout << message << endl;
}