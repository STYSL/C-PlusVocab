//Program: C-Plus Vocab
//Author: F.RUSTIQUE JR
/* This program, as a learning tool, will prompt a user to enter correct,
matching key word terms with their given definitions.
The definition will be displayed, one at a time, to the user as a question. 
The user will be able to quit the program at anytime by entering 'q' */

//THIS IS PSEUDOCODE = NON-WORKING PROGRAM:

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

    //CODE BLOCK TO CONFIRM IF ANSWER IS CORRECT AND LET USER KNOW.
    //IF ANSWER IS WRONG, LET USER KNOW WHAT CORRECT ANSWER IS.

    }//END SENTINEL-CONTROLLED WHILE LOOP
    
    return 0; 
}//END MAIN FUNCTION 


        //SETUP CONDITONS TO TEST IF USER ANSWER IS CORRECT:


        /* map<int, string> map1 = {{1, "Apple",},
                                {2, "Banana",},
                                {3, "Mango",},
                                {4, "Raspberry",},
                                {5, "Blackberry",},
                                {6, "Cocoa",}};

        //The key-value pairs will be the key term description as a question matched with the correct key term.
        // * Will need to know how to create this in C++, possibly as a "map"?:
        //Source for how to:  https://www.freecodecamp.org/news/c-plus-plus-map-explained-with-examples/
        //https://www.udacity.com/blog/2020/03/c-maps-explained.html
        //Also use course book...
    
    //While loop will keep prompting user until either 'y' or 'q' is entered for "input":
    input = "null"; //input initialized to "null" to enter while loop:
    while (input != "y" || input != "q")
        //Within while loop, greet and prompt user to begin quiz or quit with 'y' or 'q':
        cout << "Hello. This is the Key Term Checker. Enter 'y' to begin or 'q' to quit: " << endl; 
        cin >> input; //if user input equals "y", begin quiz:
        if (input == "y") { 
            //A while loop will randomly select from "keyTermQuestions" and display a question, one at a time until user enters "q" to quit:
            while (input != "q")
                //assign a randomly selected keyTermQuestions to "question"
                question = rand(keyTermQuestions);
                // display random question from keyTermQuestions w/ prompt for input:
                cout << question << endl;
                cout << "Enter response or 'q' to quit: "; 
                cin >> input; //User enters response or 'q' to quit:
                //If answer is correct, acknowledge, then next "keyTermQuestion" is randomly selected and displayed, 
                if (input == is correct matching value for keyTermsQuestion){
                    cout << "Correct!" << endl;
                    continue; // command to continue and randomly select another question
                } 
                while (input != is not correct matching value from keyTermQuestions || or input != "q"){
                    cout << "That is incorrect" << endl;
                    //Display the same, presently selected question:
                    cout << question << endl;
                    cout << "Enter response or 'q' to quit: " << endl;
                    cin >> input;
                    if (input == "q")
                        break; //exit while loop and program
                    if (input == is correct matching value for keyTermsQuestion){
                        cout << "Correct!" << endl;
                        continue; //exit this while loop to go back and ask a new question
                    }
                }
                if (input == "q") //if input is 'q', exit program:  
                    break;            
        }
        if (input == "q") //if user inputs 'q', exit program:
            break;
*/

