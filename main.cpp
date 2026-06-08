// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 

// ------------- CODE -------------
#include <iostream>

using namespace std;



// Have fun with messages
// Credit to copilot for content of GOODBYE_MESSAGE
// Format by me.
// PROMPT: shakespearian goodbye message parting is such sweet sorrow
const string GOOBYE_MESSAGE = 
  "\n\n"
  "\tParting is such sweet sorrow;\n"
  "\tyet let it be A softened ache\n"
  "\tthat keeps our memory bright.\n"
  "\tGo with sunshine in thy step and courage free,\n"
  "\tTill Fortune weaves our paths together once more.\n"
  "\tFarewell, dear heart—tread well,\n" 
  "\tand keep me in thy sight\n";


// Function prototypes 
// Have fun and be creative with welcome and goodbye messages!
// Or, keep it simple and just print 
// "Welcome to my Miles Tracker program!" and 
// "Keep riding!" in these functions.  
void welcome();
void goodbye();

// Prompt a user for the number of miles they want to 
// ride (walk, run, swim, whatever you want) this week. 
// This is their goal. 
// Implement and use this function to get the user's input.
// If the user enters 0 or less, print a message that
// no miles were tracked this week. 
// The message should be printed in 
// main() and not in the function.
void getInput(int &goal);


// In this function, use a for loop to prompt for the 
// number of miles ridden each day for a week. 
// Include the day of the week (Sunday, Monday, etc) in your prompts
// If the user enters a number less than 0, 
// print an error message and prompt for the same day again. 
// (See sample run tests below).
// After all of the days have been entered, 
// calculate and return the total miles for the week 
int calcTotal();

int main() {
  welcome();
  cout << "TODO: Implement main function" << endl;
  goodbye();
  return 0;
}

// Function implementations (if any)
void getInput(int &goal) {
  cout << "TODO: Implement getInput function" << endl;
}

int calcTotal() {
  cout << "TODO: Implement calcTotal function" << endl;
  return 0;
}

void welcome() {
  cout << "TODO: Implement welcome function" << endl;
}

void goodbye() {
  cout << GOOBYE_MESSAGE << endl;
  cout << "TODO: Implement goodbye function" << endl;
}


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
~~~~~~~~~~ TEST 1 ~~~~~~~~~~
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -3
Miles must be 0 or greater!
How many miles did you ride on Sunday? 0
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 0
You rode 50 miles this week.
Good job! You met your goal!
Keep riding!

~~~~~~~~~~ TEST 2 ~~~~~~~~~~
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 100
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Uh oh! You missed your goal by 30 miles!
Keep riding!

~~~~~~~~~~ TEST 3 ~~~~~~~~~~
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Great job! You exceeded your goal by 20 miles!
Keep riding!

~~~~~~~~~~ TEST 4 ~~~~~~~~~~
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!

~~~~~~~~~~ TEST 5 ~~~~~~~~~~
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!

*/
