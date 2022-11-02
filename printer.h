#pragma once
#include <string>
#include <vector>
#include "fileInfo.h"

using namespace std;

class printer
{
	public: void preview(vector<string> content, int size);
	public: void stats(fileInfo info);
};

