#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
#pragma once

//PRE takes in the output stream, a vector of templates varaibles, and two positions in a vector
//POST outputs the result of the swap ot an error for invalid index positions
void mySwap(ostream& outFile, vector<int> values, int pos1, int pos2) {
	outFile << "Swap items at positions " << pos1 << " and " << pos2 << endl;
	if (pos1 < 0 || pos1 > values.size() - 1) {
		outFile << "\tThis value is invalid: " << pos1 << endl;
		return;
	}
	if (pos2 < 0 || pos2 > values.size() - 1) {
		outFile << "\tThis value is invalid: " << pos2<< endl;
		return;
	}
	outFile << "\tBefore: " << values.at(pos1) << " & " << values.at(pos2) << endl;
	swap(values.at(pos1), values.at(pos2));
	outFile << "\tAfter: " << values.at(pos1) << " & " << values.at(pos2) << endl;
}

//PRE takes in the output stream and a vector of templates varaibles
//POST outputs the minimum value
int myMin(ostream& outFile, vector<int> values) {
	int min = values.at(0);
	for (int i = 1; i < values.size(); ++i) {
		if (values.at(i) < min) {
			min = values.at(i);
		}
	}
	outFile << "Minimun: " << min << endl;
	return min;
}

//PRE takes in the output stream and a vector of templates varaibles
//POST outputs the maximum value
int myMax(ostream& outFile, vector<int> values) {
	int max = values.at(0);
	for (int i = 1; i < values.size(); ++i) {
		if (values.at(i) > max) {
			max = values.at(i);
		}
	}
	outFile << "Maximum: " << max << endl;
	return max;
}

//PRE takes in the output stream, a vector of templates varaibles and a value to be searched for
//POST outputs the location of the value or returns -1 if not found
int mySearch(ostream& outFile, vector<int> values, int target) {
	int pos = -1;
	for (int i = 0; i < values.size(); ++i) {
		if (values.at(i) == target) {
			pos = i;
			outFile << "The value " << target << " is found at position " << pos << " in the list." << endl;
			return pos;
		}
	}
	outFile << "The value " << target << " is not found in the list." << endl;
	return pos;
}


