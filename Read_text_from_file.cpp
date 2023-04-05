#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string s;
	
	ifstream readFile("test.txt");
	if(readFile.is_open()){
		while (getline(readFile, s)){
			cout << s << "\n";
		}
		readFile.close();
	}else{
		cout << "File is not present in given location";
	}
	
	return 0;
	
}
