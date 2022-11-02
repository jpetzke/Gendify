#include "fileInfo.h"
#include <string>
#include <regex>
#include "helperFunctions.h"

using namespace std;

fileInfo::fileInfo(string rawContent) {
	
	vector<string> content = splitString(rawContent, "\n");

	setLineCountTo(content.size());

	// count chars 
	setCharCountTo(regex_replace(rawContent, regex("[^a-zA-Z0-9]"), "").size());

	// count words
	regex wordRegex("[a-zA-Z0-9]+");
	smatch match;
	int wordCount = 0;
	for (int i = 0; i < content.size(); i++) {
		string line = content[i];
		while (regex_search(line, match, wordRegex)) {
			wordCount++;
			line = match.suffix().str();
		}
	}
	setWordCountTo(wordCount);

	setHitsTo(-1);
}

void fileInfo::setLineCountTo(int count) {
	lineCount = count;
}

void fileInfo::setCharCountTo(int count) {
	charCount = count;
}

void fileInfo::setWordCountTo(int count) {
	wordCount = count;
}

void fileInfo::setHitsTo(int count) {
	hits = count;
}

int fileInfo::getLineCount() {
	return lineCount;
}

int fileInfo::getCharCount() {
	return charCount;
}

int fileInfo::getWordCount() {
	return wordCount;
}

int fileInfo::getHits() {
	return hits;
}
