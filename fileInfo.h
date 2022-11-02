#pragma once

#include <string>

using namespace std;

class fileInfo
{
	public: fileInfo(string rawContent);
	
	private: int lineCount;
	private: int charCount;
	private: int wordCount;
	private: int hits; // number of times a word that must be genderd appears in the file

	public: void setLineCountTo(int count);
	public: void setCharCountTo(int count);
	public: void setWordCountTo(int count);
	public: void setHitsTo(int count);

	public: int getLineCount();
	public: int getCharCount();
	public: int getWordCount();
	public: int getHits();

};

