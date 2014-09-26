#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int elements, index;
	string tmp_string;
	vector<string> array;
	
	cin >> elements;
	
	for (index = 0; index < elements; ++index) {
		cin >> tmp_string;
		array.push_back(tmp_string);
	}
	
	sort(array.begin(), array.end());
	
	for (index = 0; index < elements; ++index) {
		cout << array[index] << endl;
	}
		
	return 0;
}