#include <string>
#include "FEncrypt.h"
#include <iostream>

using namespace std;

FEncrypt::FEncrypt(void) {
}

FEncrypt::~FEncrypt(void) {
}

string
FEncrypt::setFilter(string word) {
	for (unsigned i = 0; i < word.size(); i++) {
		switch (word[i]) {
		case 'a':
			word.replace(i, 1, 1, '9');
			break;
		case 'e':
			word.replace(i, 1, 1, '8');
			break;
		case 'i':
			word.replace(i, 1, 1, '1');
			break;
		case 'o':
			word.replace(i, 1, 1, '0');
			break;
		case 'u':
			word.replace(i, 1, 1, '2');
			break;
		default:
			break;
		}
	}
	return word;
}
