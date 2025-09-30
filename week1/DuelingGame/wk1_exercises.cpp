#include <iostream>
#include <string>

using namespace std;

void greet();
void kiloToMiles();
void celsiusToFhrt();
void poundsToKilograms();
void dollarsToEuros();
void print(string message);

int main()
{
	greet();
	celsiusToFhrt();
	kiloToMiles();
	poundsToKilograms();
	dollarsToEuros();

	return 0;
}

/*
	2. Ask the User for a Temperature in Celsius and Convert to Fahrenheit :
		Step - by - step :
			Ask the user to input a temperature in Celsius.
			Store that temperature in a float variable.
			Convert it to Fahrenheit using the formula F = (C * 9 / 5) + 32.
			Print the result using cout.
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

void celsiusToFhrt() {
	float celsius;
	print("Enter a temperature in Celsius: ");
	cin >> celsius;
	float fahrenheit = (celsius * 9 / 5) + 32;
	print("Fahrenheight: " + to_string((double)fahrenheit));
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
	Part b.Convert Kilometers to Miles :
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