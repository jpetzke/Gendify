#include <iostream>
#include <fstream>
#include <sstream>
#include <regex>
#include <iterator>

#include "helperFunctions.h"
#include "printer.h"
#include "fileInfo.h"

using namespace std;




int main() {

	string filepath;
	ifstream txtFile;
	stringstream strStreamTxtFile;
	string rawContent;
	vector<string> content;
	vector<string> newContent;

	printer prnt;
	
	cout << "file to analyze: ";
	cin >> filepath;

	txtFile.open(filepath);
	strStreamTxtFile << txtFile.rdbuf();
	rawContent = strStreamTxtFile.str();
	content = splitString(rawContent, "\n");

	fileInfo info(rawContent);
	
	prnt.stats(info);

	int hits = 0;
	for (int i = 0; i < content.size(); i++) {
		string line = content[i];
		
		int pos = line.find("er ");
		while (pos != string::npos) {
			hits++;
			line.insert(pos + 2, "Innen");
			pos = line.find("er ", pos + 1);
		}

		newContent.push_back(line);
		
	}

	info.setHitsTo(hits);
	
	// print the new content full
	prnt.preview(newContent, newContent.size());
	

	
	
	cin.get();
	return 0;
}