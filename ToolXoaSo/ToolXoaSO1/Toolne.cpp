#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

int main() {
	ifstream inputFile("input.txt");
	if (!inputFile.is_open()) {
		cerr << "Khong the mo file input.txt" << endl;
		return 1;
	}

	ofstream outputFile("output.txt");
	if (!outputFile.is_open()) {
		cerr << "Khong the mo file output.txt" << endl;
		inputFile.close();
		return 1;
	}

	ofstream outputFile1("finaloutput.txt");
	if (!outputFile1.is_open()) {
		cerr << "Khong the mo file finaloutput.txt" << endl;
		inputFile.close();
		outputFile.close();
		return 1;
	}

	regex pattern("\\b\\d{5}\\.\\s");

	string line;

	while (getline(inputFile, line)) {
		if (regex_search(line, pattern)) {
			outputFile << line << '\n';
		}
	}

	inputFile.close();
	outputFile.close();

	ifstream inputFile1("output.txt");
	if (!inputFile1.is_open()) {
		cerr << "Khong the mo file output.txt" << endl;
		outputFile1.close();
		return 1;
	}

	string line1;

	while (getline(inputFile1, line1)) {
		size_t dotPosition = line1.find('.');
		if (dotPosition != string::npos) {
			line1 = line1.substr(dotPosition + 1);
		}

		outputFile1 << line1 << '\n';
	}

	inputFile1.close();
	outputFile1.close();

	cout << "Hoan thanh" << endl;

	return 0;
}
