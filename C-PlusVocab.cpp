//Program: C-Plus Vocab
//Author: F.RUSTIQUE JR
/* This program, as a learning tool, will prompt a user to enter correct,
matching key word terms with their given definitions.
The definition will be displayed, one at a time, to the user as a question. 
The user will be able to quit the program at anytime by entering 'q' */

//THIS IS PSEUDOCODE. STILL A NON-WORKING PROGRAM:

//BEGIN W/ NECESSARY HEADER NAMES:
#include <iostream>
#include <string>
#include <cstdlib> //include for rand() function
#include <ctime> //include for time() function
#include <map> //use to store questions and matching answers?

//Use the std namespace:
using namespace std;

const string SENTINEL = "q";

//Begin body with main function:
int main(){   
    
    //CREATE A MAP OF QUESTIONS:
    map<int, string> keyTermQuestions;
    keyTermQuestions.insert(pair<int, string>(1,"What is a set of step-by-step instructions that accomplish a task?: "));
    keyTermQuestions.insert(pair<int, string>(2,"What are programming languages whose instructions more closely resemble the English language?: "));
    keyTermQuestions.insert(pair<int, string>(3,"What is user-defined data type?: "));
    keyTermQuestions.insert(pair<int, string>(4,"What are numbers appearing in an arithmetic expression?: "));
    keyTermQuestions.insert(pair<int, string>(5,"What is an operator that has only one operand?: "));
    keyTermQuestions.insert(pair<int, string>(6,"What is the dot operator in C++ called?: "));
    keyTermQuestions.insert(pair<int, string>(7,"What are functions that are already defined in C++ ?: "));
    keyTermQuestions.insert(pair<int, string>(8,"What takes information from a stream and puts it into a variable?: "));
    keyTermQuestions.insert(pair<int, string>(9,"What takes information from a variable and puts it into a stream?: "));
    keyTermQuestions.insert(pair<int, string>(10,"What is a statement that places data into variables using cin and >> ?: "));
    keyTermQuestions.insert(pair<int, string>(11,"What is an output on the standard output device via cout and << ?: "));
    keyTermQuestions.insert(pair<int, string>(12,"What is a predefined ordering for the characters in a set?: "));

    //CREATE MAP OF MATCHING ANSWERS TO QUESTIONS:

        /*{"What is a set of step-by-step instructions that accomplish a task?: ", "Algorithm"},
        {"What are programming languages whose instructions more closely resemble the English language?: ", "High-level languages"},
        {"What is user-defined data type?: ","Enumeration"},
        {"What are numbers appearing in an arithmetic expression?: ","Opearands"},
        {"What is an operator that has only one operand?: ", "Unary operator"},
        {"What is the dot operator in C++ called?: ", "Member access operator"},
        {"What are functions that are already defined in C++ ?: ", "Predfined functions"},
        {"What takes information from a stream and puts it into a variable?", "Stream extraction operator"},
        {"What takes information from a variable and puts it into a stream?: ", "Stream insertion operator"},
        {"What is a statement that places data into variables using cin and >> ?: ", "Input read statement"},
        {"What is an output on the standard output device via cout and << ?: ", "Output statement"},*/

    string input; //DECLARE & SET STRING INPUT VARIABLE TO ENTER FLAG-CONTROLLED WHILE LOOP
    while (input != SENTINEL){
        srand(time(0)); //GENERATE A RANDOM NUMBER WITH SRAND AND RAND. 
        int randomNumber = rand()%12; //USE MODULUS 12 TO LIMIT RANGE TO NUMBER OF QUESTIONS IN MAP.
        string question = keyTermQuestions[randomNumber]; //ASSIGN RANDOMLY SELECTED QUESTION FROM KEY NUMBER TO QUESTION VARIABLE.
        cout << question; //DISPAY RANDOM QUESTION
        cin >> input;  //RECEIVE USER INPUT

    //CODE BLOCK TO CONFIRM IF ANSWER IS CORRECT AND LET USER KNOW
    //IF ANSWER IS WRONG, LET USER KNOW WHAT CORRECT ANSWER IS
    //CYCLE THROUGH QUESTIONS UNLESS USER ENTERS 'q' TO QUIT

    }//END SENTINEL-CONTROLLED WHILE LOOP
    
    return 0; 
}//END MAIN FUNCTION 


        //SETUP CONDITONS TO TEST IF USER ANSWER IS CORRECT:

