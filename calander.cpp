// Johanthan and David
// 5/1/18
#include <iostream>
#include <string>
#include <fstream>


using namespace std;
int main(int argc, char *argv[]) {
	
	//declareing our statments
	string one = "";
	string two = "";
	string three = "";
	string four = "";
	string five = "";
	string six = "";
	string seven = "";
	string eight = "";
	string nine = "";
	string ten = "";
	string eleven = "";
	string twelve = "";
	string thirteen = "";
	string fourteen = "";
	string fifteen = "";
	string sixteen = "";
	string seventeen = "";
	string eighteen = "";
	string ninteen = "";
	string twenty = "";
	string twentyOne = "";
	string twentyTwo = "";
	string twentyThree = "";
	string twentyFour = "";
	string twentyFive = "";
	string twentySix = "";
	string twentySeven = "";
	string twentyEight = "";
	string twentyNine = "";
	string thirty = "";
	string thirtyOne = "";

	string date = "";
	string dateTwo = "";
	string userMonth = "";
	string userYear = "";
	string userDate = "";
	string event = "";
	string adEvent = "";
	string moEvent = "";
	string theEvent = "";
	bool isFound = false;
	ifstream inFile;
	ifstream theOther;

	
	// prompt
	cout << "Enter the number of the month (enter - 1 to quite): ";
	cin >> userMonth;
	
	while(userDate != "-1"){
		cout << "Enter the number of the year: ";
		cin >> userYear;
		
		cout << "Enter the number of the day: ";
		cin >> userDate;
		
		string fileName = userMonth + "_" + userYear;
		
		inFile.open(fileName + ".txt");
		
		if(inFile.is_open()){
			while(!inFile.eof()){
				getline(inFile, date, '#');
				getline(inFile, event, '#');
				getline(inFile, adEvent);
	
			if(userDate == date){
				cout << "Date: " << event << endl << endl;
				cout << adEvent;
				
				// this is more adding additional events
				if(one != "0"){
					if(userDate == "1"){
						cout << "," <<  one << endl << endl;
					}
																	else if(userDate == "2"){
																		cout << "," << two << endl << endl;
																	}
																	else if(userDate == "3"){
																		cout << "," << three << endl << endl;
																	}
																	else if(userDate == "4"){
																		cout <<"," <<  four << endl << endl;
																	}
																	else if(userDate == "5"){
																		cout << "," << five << endl << endl;
																	}
																	else if(userDate == "6"){
																		cout << "," <<  six << endl << endl;
																	}
																	else if(userDate == "7"){
																		cout << "," <<  seven << endl << endl;
																	}
																	else if(userDate == "8"){
																		cout << "," <<  eight << endl << endl;
																	}
																	else if(userDate == "9"){
																		cout << "," <<  nine << endl << endl;
																	}
																	else if(userDate == "10"){
																		cout << "," << ten << endl << endl;
																	}
																	else if(userDate == "11"){
																		cout << "," << eleven << endl << endl;
																	}
																	else if(userDate == "12"){
																		cout << "," << twelve << endl << endl;
																	}
																	else if(userDate == "13"){
																		cout << "," << thirteen << endl << endl;
																	}
																	else if(userDate == "14"){
																		cout << "," << fourteen << endl << endl;
																	}
																	else if(userDate == "15"){
																		cout << "," << fifteen << endl << endl;
																	}
																	else if(userDate == "16"){
																		cout << "," << sixteen << endl << endl;
																	}
																	else if(userDate == "17"){
																		cout << "," << seventeen << endl << endl;
																	}
																	else if(userDate == "18"){
																		cout << "," << eighteen << endl << endl;
																	}
																	else if(userDate == "19"){
																		cout << "," << ninteen << endl << endl;
																	}
																	else if(userDate == "20"){
																		cout << "," << twenty << endl << endl;
																	}
																	else if(userDate == "21"){
																		cout << "," << twentyOne << endl << endl;
																	}
																	else if(userDate == "22"){
																		cout << "," << twentyTwo << endl << endl;
																	}
																	else if(userDate == "23"){
																		cout << "," << twentyThree << endl << endl;
																	}
																	else if(userDate == "24"){
																		cout << "," << twentyFour << endl << endl;
																	}
																	else if(userDate == "25"){
																		cout << "," << twentyFive << endl << endl;
																	}
																	else if(userDate == "26"){
																		cout << "," << twentySix << endl << endl;
																	}
																	else if(userDate == "27"){
																		cout << "," << twentySeven << endl << endl;
																	}
																	else if(userDate == "28"){
																		cout << "," << twentyEight << endl << endl;
																	}
																	else if(userDate == "29"){
																		cout << "," << twentyNine << endl << endl;
																	}
																	else if(userDate == "30"){
																		cout << "," << thirty << endl << endl;
																	}
																	else if(userDate == "31"){
																		cout << "," << thirtyOne << endl << endl;
																	}
				}
		
				
				cout << "additional events(enter 0 if theres nothing) - " ;
				
				// this is for saving the additional event into the 
				if(one != "0"){
				if(userDate == "1"){
					cin >> one;
					cout << endl;
				}
					else if(userDate == "2"){
						cin >> two;
						cout << endl;
					}
						else if(userDate == "3"){
							cin >> three;
							cout << endl;
						}
							else if(userDate == "4"){
								cin >> four;
								cout << endl;
							}
							else if(userDate == "5"){
								cin >> five;
								cout << endl;
							}
							else if(userDate == "6"){
								cin >> six;
								cout << endl;
							}
							else if(userDate == "7"){
								cin >> seven;
								cout << endl;
							}
							else if(userDate == "8"){
								cin >> eight;
								cout << endl;
							}
							else if(userDate == "9"){
								cin >> nine;
								cout << endl;
							}
							else if(userDate == "10"){
								cin >> ten;
								cout << endl;
							}
							else if(userDate == "11"){
								cin >> eleven;
								cout << endl;
							}
							else if(userDate == "12"){
								cin >> twelve;
								cout << endl;
							}
							else if(userDate == "13"){
								cin >> thirteen;
								cout << endl;
							}
							else if(userDate == "14"){
								cin >> fourteen;
								cout << endl;
							}
							else if(userDate == "15"){
								cin >> fifteen;
								cout << endl;
							}
							else if(userDate == "16"){
								cin >> sixteen;
								cout << endl;
							}
							else if(userDate == "17"){
								cin >> seventeen;
								cout << endl;
							}
							else if(userDate == "18"){
								cin >> eighteen;
								cout << endl;
							}
							else if(userDate == "19"){
								cin >> ninteen;
								cout << endl;
							}
							else if(userDate == "20"){
								cin >> twenty;
								cout << endl;
							}
							else if(userDate == "21"){
								cin >> twentyOne;
								cout << endl;
							}
							else if(userDate == "22"){
								cin >> twentyTwo;
								cout << endl;
							}
							else if(userDate == "23"){
								cin >> twentyThree;
								cout << endl;
							}
							else if(userDate == "24"){
								cin >> twentyFour;
								cout << endl;
							}
							else if(userDate == "25"){
								cin >> twentyFive;
								cout << endl;
							}
							else if(userDate == "26"){
								cin >> twentySix;
								cout << endl;
							}
							else if(userDate == "27"){
								cin >> twentySeven;
								cout << endl;
							}
							else if(userDate == "28"){
								cin >> twentyEight;
								cout << endl;
							}
							else if(userDate == "29"){
								cin >> twentyNine;
								cout << endl;
							}
							else if(userDate == "30"){
								cin >> thirty;
								cout << endl;
							}
							else if(userDate == "31"){
								cin >> thirtyOne;
								cout << endl;
							}
				}
				
				//end of additional events
				
				// start of new line
						
				
				cout << "_______________________________" << endl;
				isFound = true;
				
	
			
			
				}
			}
		}
		
		else{
				cout << "file could not be found:" << endl;
			}
			
			inFile.close();
			
			if(!isFound){
			
				cout << "oops, something went wrong:" << endl << endl<< "This date does not exist, stop pissing around" << endl <<"____________________" << endl;

			}
		
		
	
		cout << "Enter the number of the month (enter - 1 to quite): ";
			cin >> userMonth;
			cout << endl;
			isFound = false;
	}




}