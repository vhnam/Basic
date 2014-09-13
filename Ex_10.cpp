#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	char id[10];
	double result, bonus, middle, final;
	fstream input, output;
	
	input.open("input.txt", ios::in);
	output.open("output.txt", ios::out);
	
	while (!input.eof()) {
		input >> id;
		input >> bonus;
		input >> middle;
		input >> final;
		
		result = (bonus * 0.1) + (middle * 0.2) + (final * 0.7);
		
		output << id << " ";
		output << result << " ";
		
		if (result >= 8.0) {
			output << "A" << endl;
		} else if (result >= 7.0 && result < 8.0) {
			output << "B" << endl;
		} else if (result >= 6.0 && result < 7.0) {
			output << "C" << endl;
		} else if (result >= 5.0 && result < 6.0) {
			output << "D" << endl;
		} else {
			output << "F" << endl;
		}
	}
	
	input.close();
	output.close();
	
	return 0;
}