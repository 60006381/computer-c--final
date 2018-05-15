#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) {
	string moreEvent = "";
	string date = "";
	string userDate = "";
	string event = "";
	string adEvent = "";
	string file = "";
	
	bool isFound = false;
	ifstream inFile;
	ofstream outFile;
	
	cout << "Enter the number of the day: ";
	cin >> userDate;
	
	while(userDate != "-1"){
		inFile.open("DATES.txt");
		
		if(inFile.is_open()){
			while(!inFile.eof()){
				getline(inFile, date, '#');
				getline(inFile, event, '#');
				getline(inFile, adEvent);
				
				file += date + '#' + event + '#' + adEvent;
	
				if(userDate == date){
					isFound = true;
					cout << "Date: " << event << endl << endl;
					cout << adEvent << endl;
					
					cout << "Additional events - " ;
					cin >> moreEvent;
					
					file += ", " + moreEvent;
				}
				file += "\n";
			}
			inFile.close();
			outFile.open("DATES.txt");
			outFile << file;
			outFile.close();
			
			if(!isFound){
				cout << "oops, something went wrong:" << endl << "This date does not exist" << endl <<"____________________" << endl << endl;
			}
		}
		else{
			cout << "file could not be found:" << endl;
		}
		
		cout << "Enter the number of the day (-1 to quit): ";
		cin >> userDate;
	}
}