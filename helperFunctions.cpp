#include "helperFunctions.h"

using namespace std;

vector<string> splitString(string str, string sperator) {
	vector<string> result;
	while (str.size()) {
		int index = str.find(sperator);
		if (index != string::npos) {
			result.push_back(str.substr(0, index));
			str = str.substr(index + sperator.size());
			if (str.size() == 0)result.push_back(str);
		}
		else {
			result.push_back(str);
			str = "";
		}
	}

	return result;
}