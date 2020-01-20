#include "FileFix.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

FileFix::FileFix(IFactory* maker)
{
	myFactory = maker;
}

FileFix::~FileFix()
{
}

bool
FileFix::exists(string filename) {
	ifstream file(filename);
	file.close();
	return (bool)file;
}

void
FileFix::ConvertFile(string file)
{

	IFilter* filter = myFactory->NewFilter();
	ifstream name;
	

	if (!exists(file)) {
		cout << "Sorry, could not read the file named " << file << endl;
		return;
	}

	name.open(file);
	string word;
	string newFileName = file + ".fix";
	ofstream outfile; 
	outfile.open(newFileName, ios_base::app);
	while (getline(name, word)) {
		string newWord = filter->setFilter(word);
		outfile << newWord;
	}
	cout << "Your filtered file name is " << newFileName << endl;
	outfile.close();
	name.close();
}
