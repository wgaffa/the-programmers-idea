#include <iostream>

using namespace std;

int main(int)
{
	unsigned int width = 1;
	unsigned int length = 1;
	float cost_per_unit = 1.0;
	
	cout << "Width: ";
	cin >> width;

	cout << "Length; ";
	cin >> length;

	cout << "Cost per unit: ";
	cin >> cost_per_unit;

	unsigned int dimension = width * length;
	cout << "Dimension is " << dimension << endl;

	float total = dimension * cost_per_unit;
	cout << "Total cost is " << total << endl;

	return 0;
}