#include<iostream>
#include<ctime>
using namespace std;

int main(){
	time_t t = time(0);
	tm* tptr = localtime(&t);
	cout << tptr->tm_hour << ":" << tptr->tm_min << ":" << tptr->tm_sec;
	return 0;
}

