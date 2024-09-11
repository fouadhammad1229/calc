#include <iostream>

using namespace std;

void decisionMaker(float x, float y)
{
	string choiceOn;

	cout << endl;
	cout << "Choose between a for Addition, d for division, m for multiplication, s for subtraction: ";
	cin >> choiceOn;

	if (choiceOn == "a" || choiceOn == "1") 
	{
		cout << "Addition: " << x + y << endl;
	}
	else if (choiceOn == "d" || choiceOn == "2") 
	{
		float z;

		z = x / y;
		cout << "Division: " << z << endl;
	}
	else if (choiceOn == "m" || choiceOn == "3")
	{
		cout << "Multiplication: " << x * y << endl;
	}
	else if (choiceOn == "s" || choiceOn == "4")
	{
		cout << "Subtraction: " << x - y << endl;
	}
	else
	{
		cout << "N/A" << endl;
	}

}

int main() 
{
	float x,y;

	cout << "Type in x: ";
	cin >> x;

	cout << "Type in y: ";
	cin >> y;

	decisionMaker(x, y);

	return 0;
}
