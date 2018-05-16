# Final Project: Code Calendar





# Synopsis
Code Calendar is a tool that allows you to input a date, which then displays the events that are happening on that day. You can then enter any additional event you remember, which the tool will save in its program. Here is an excerpt of what the code should look like.

```	cout << "Enter the number of the day: ";```
	```cin >> userDate;```
	
```	while(userDate != "-1"){```
	```	inFile.open("DATES.txt");```
		
	```	if(inFile.is_open()){```
		```	while(!inFile.eof()){```
			```	getline(inFile, date, '#');```
			```	getline(inFile, event, '#');```
				```getline(inFile, adEvent);```
				
				```file += date + '#' + event + '#' + adEvent;```
 





# Motivation
The motivation behind Code Calendar was that I always had problems with remembering inportant events that needed to be done. Whenever there was a vacation or relatives visiting, I managed to forget up until the day before the vacation. With Code Calendar, This fulfills both purposes by allowing to see what is happening and then entering any other event happening on that day.


# Installation/Tests
The files that need to be downloaded can be found in the repositorie computer-c-final, Here is the link to the so that you can access the repositorie "https://github.com/60006381/computer-c-final/edit/master/README.md" and here are the files that need to be downloaded
 
DATES.txt

calendar.cpp

Once the correct files are downloaded, The files then have to be saved into the same storage as it will allow the files to interact with each other, I recommend the desktop of the computer. Once you are done with that, use a C++ program to run the  Run the program. when it compiles it will show the following statement.

Enter the number of the day: 

Once you type the day, it will then show the following text

Enter the month: 

Type the month in numerical fashion such as 1, Once this is done, the last user type statement will appear

Enter the year:

Type the current year. Once this is done, it will then show the following information(note: this example isn't the exact code but is an accurate representation)

Date:mm/dd/year

Event:(In this space will be a pre-set events, unless DATES.txt has been modified by the user)
Additional Event - 

You can then type an additional event which will be stored in the txt.file or if not, enter 0 for no additional events. Regardless, the program will then prompt you again

Enter the number of the day (-1 to quit):

# Contributors
David Serna, John Edwards, Rocky Mazorow

I personally like to thank John Edwwards, who without him, would have not solved the problem of storing information and I also like to thank Mrs. Mazarow, our C++ teacher who cleaned up our code so that its half of what it used to be.
