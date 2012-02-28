#include <sstream>
#include <algorithm>

using namespace std;

#include "Tools.h"

int Tools::isMinimum(const int a, const int b) {
	if (a > b) return b;
	else return a;
}

bool Tools::estEntier(const string &data) {
	istringstream iss(data);
    int tmp;
    return ((iss >> tmp) && iss.eof());
}

bool Tools::estReel(const string &data) {
	istringstream iss(data);
    float tmp;
    return ((iss >> tmp) && iss.eof());
}

float Tools::stringToFloat(const string val) {
	stringstream ss;
	float f;
	ss.str(val);
	ss >> f;
	return f;
}

int Tools::stringToInt(const string val) {
	stringstream ss;
	int i;
	ss.str(val);
	ss >> i;
	return i;
}

void Tools::stringToLower (string &chaine) {
	transform(chaine.begin(), chaine.end(), chaine.begin(), ::tolower);
}

void Tools::stringToUpper (string &chaine) {
	transform(chaine.begin(), chaine.end(), chaine.begin(), ::toupper);
}


