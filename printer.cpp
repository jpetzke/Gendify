#include "printer.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;



void printer::preview(vector<string> content, int size) {
	
	// print first 3 elements of content, if there are more than 3 elements; else print all elements (less than 3)
	for (int i = 0; i < (content.size() > size ? size : content.size()); i++) {
		cout << "| " << content[i] << endl;
	}
}

void printer::stats(fileInfo info)
{
	cout << "lines " << info.getLineCount() << endl;
	cout << "words " << info.getWordCount() << endl;
	cout << "chars " << info.getCharCount() << endl;
}
