// Johanthan and David
// 5/1/18
#include <iostream>
#include <string>
#include <fstream>


using namespace std;
int main(int argc, char *argv[]) {
	
	//declare
	string date = "";
	string dateTwo = "";
	string userDate = "";
	string event = "";
	string adEvent = "";
	string moEvent = "";
	string theEvent = "";
	bool isFound = false;
	ifstream inFile;
	ifstream theOther;

	
	// prompt
	
	cout << "Enter the number of the day(enter - 1 to quite): ";
	cin >> userDate;
	
	while(userDate != "-1"){
		inFile.open("DATES.txt");
		
		if(inFile.is_open()){
			while(!inFile.eof()){
				getline(inFile, date, '#');
				getline(inFile, event, '#');
				getline(inFile, adEvent);
	
			if(userDate == date){
				cout << "Date: " << event << endl << endl;
				
			
				cout << adEvent << endl << endl;
				cout << "additional events - ";
				cin >> moEvent;
				cout << "_______________________________" << endl;
				isFound = true;
				
				if(isFound == true){
				theOther.open("additionalevents.txt");
				
				for (string x = "1"; x < "31"; x += "1"){
					if(userDate == x){
					
					}
				}

	
			}
				
				
			}
			
			}

			inFile.close();
			
			if(!isFound){
			
				cout << "oops, something went wrong:" << endl << endl<< "This date does not exist, stop pissing around" << endl <<"____________________" << endl;


		
			}
		else{
			cout << "file could not be found:" << endl;
		}
		cout << "Enter the number of the day(enter - 1 to quite): ";
			cin >> userDate;
			cout << endl;
			isFound = false;
	
		}
	}


}