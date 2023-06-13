#include "main.h"

int main() {
	string file_name = "text.txt";
	string s="testing... ";

	ofstream fout;
	
	fout.open(file_name);

	if (fout.is_open()) {
		fout << s << s << s;
		fout.close();
	}

	ifstream fin;

	fin.open(file_name);

	if (fin.is_open()) {
		string buf1 ,buf2, buf3;
		fin >> buf1>>buf2>>buf3;
		cout << "output: " << buf1 << endl;
		cout <<  buf2 << endl;
		cout << buf3 << endl;
		fin.close();
	}

	return 0;
}