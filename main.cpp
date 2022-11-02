#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

	string filepath;
	ifstream txtFile;
	stringstream strStreamTxtFile;
	string content;
	
	cout << "file to analyze: ";
	cin >> filepath;

	txtFile.open(filepath);
	strStreamTxtFile << txtFile.rdbuf();
	content = strStreamTxtFile.str();

	
	cout << content;
	
	
	return 0;
}