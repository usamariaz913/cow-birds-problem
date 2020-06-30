#include<iostream>
using namespace std;
int main()
{
	int birds=0, cows=0, heads, legs;
	cout << "Enter the number of Heads : ";
	cin >> heads;

	cout << "Enter the number of Legs  : ";
	cin >> legs;

	cows = (legs - (2 * heads)) / 2;
	birds = heads - cows;

	cout << endl;
	cout << "there are " << cows << " Cows \n and " << birds << " Birds.";
	cout << endl;
}