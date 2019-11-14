#include<fstream>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
	fstream file;
	string line;
   	file.open(argv[1], fstream::in);	
	float runningSum = 0;
	uint8_t iter = 0;
	while (getline(file, line)) {
       		runningSum += stof(line);
		iter++;
	}
	cout << runningSum/iter << endl;
	file.close();
   	return 0;
}
