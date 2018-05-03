// Johanthan and David
// 5/1/18
#include <iostream>
#include <string>
#include <fstream>


using namespace std;
int main(int argc, char *argv[]) {
	
	//declare
	string date = "";
	string event = "";
	string adEvent = "";
	string moEvent = "";
	bool isFound = false;
	ifstream inFile;
	
	// prompt
	
	cout << "Enter the number of the day(enter - 1 to quite): ";
	cin >> date;
	
	while(date != "-1"){
		inFile.open("DATES.txt");
		while(!inFile.eof()){
			getline(inFile, date, '#');
			getline(inFile, event, '#');
			getline(inFile, adEvent);
	
		if(inFile.is_open()){
			cout << "Date: " << event << endl << endl;
			
			
			cout << adEvent << endl << endl;
				cout << "additional events - ";
				cin >> moEvent;

	
			inFile.close();
			
			if(!isFound){
				cout << "This date does not exist, stop pissing around" << endl;
			}
			
		}
		else{
			cout << "file could not be found:" << endl;
		}
		}
		
		cout << "Enter the number of the day(enter - 1 to quite): ";
			cin >> date;
			cout << endl;
			isFound = false;
	}

}
