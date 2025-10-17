//
// Created by keboye02 on 10/6/2025.
#include <iostream>
#include <string>
#include <cstdlib> //necessary for rand()
#include <ctime> // to get the current time
#include <limits> // for numeric limits

using namespace std;


int main()
{
    const int MAX_ATTEMPTS = 3;

    const int LEVEL_CHANGE_RANGE = 10;


    enum MathType { MT_ADD = 1, MT_SUB = 2, MT_MUL = 3, MT_DIV = 4 };
    MathType mathType = MT_ADD;

    int correctAns = 0;
    int userAnswer = 0;
    int tempNum = 0;
    int leftnum = 0;
    int rightnum = 0;
    int totalCorrect= 0;
    int totalIncorrect= 0;
    int attempts = 3;
    bool persongetcorrect = true;
    string userInput = "?";
    int currentRange = 10;

    int math_level = 1;



    string userName = "?";

    //(used to make sure the left number is larger than the right for subtraction)
    char mathSymbol = '?'; //[1 = +, 2 = -, 3 = *, 4 = /];

    srand(time(0));

    cout << "========================================================" << endl;
    cout << "           The Silly Simple Math Tutor" << endl;
    cout << "========================================================" << endl;
    cout << endl;
    cout << "Sorry, but this version isnt set up fully yet. Please come back at V3" << endl;
    //cout << "What Equation would you like to solve." << endl; //Starting equation
    //Need to use first and second number to calculate
    cout << "Welcome to the Silly Simple Math Tutor!" << endl;
    cout << endl;
    cout << "Fun math Facts:" << endl;
    cout << "   * Math Teachers have problems." << endl;
    cout << "   * Math is the only subject that counts." << endl;
    cout << "   * If it seems easy, you're doing it wrong." << endl;
    cout << "   * It's all fun and games until someone divides by zero." << endl;
    cout << endl;
    cout << "========================================================" << endl;
    cout << endl;
    cout << "What is your name? ";
    getline(cin, userName);
    cout << "Welcome " << userName << " to the Silly Simple Math Tutor." << endl;
    cout << endl;


    do{
        if (persongetcorrect)
    {
        leftnum = rand() % currentRange + 1;
        rightnum = rand() % currentRange + 1;
        mathType = static_cast<MathType>(rand() % 4 + 1); //1 = add,2= subtract,3=mulitply,4=division
    }
        switch (mathType) {
        case MT_ADD: // addition
            correctAns = leftnum + rightnum;
            mathSymbol = '+';
            break;
        case MT_SUB: // subtraction
            correctAns = leftnum - rightnum;
            mathSymbol = '-';
            if (leftnum < rightnum) {
                int tempNum = leftnum;
                leftnum = rightnum;
                rightnum = tempNum;
            }
            break;
        case MT_MUL: // Multiply
            correctAns = leftnum * rightnum;
            mathSymbol = '*';
            break;
        case MT_DIV: // division
            correctAns = leftnum;
            leftnum *= rightnum;
            mathSymbol = '/';

            break;
        default:
            cout << "Your math type is " << mathType << endl;
            cout << "Please contact us for help" << endl;
            return -1;
        }

        cout << "[LEVEL "<< "#" << math_level << "] " << userName << ", what is " << leftnum << mathSymbol << rightnum << " = ";

        // Loop until the user enters numeric data
        while (!(cin >> userAnswer)) {
            cin.clear(); //clear the cin error flag
            // need to include the limits library to use numeric_limits
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the max input, up to '\n'
            cout << "\tInvalid input!" << endl;
            cout << "\tPlease enter a number: ";
        } // end of get userAnswer while loop

        if (userAnswer == correctAns) {
            cout << "Congrats! That was correct :)" << endl;
            totalCorrect++;
            if (totalCorrect == 3)
            {
                math_level++;
                totalCorrect =0;
                cout << "WooHoo - Leveling you UP to " << math_level << endl;
                attempts = 3;
                currentRange += LEVEL_CHANGE_RANGE;
                cout << "The numbers are now between 1 and " << currentRange << endl;

            }
            persongetcorrect = true;
        } else {

            totalIncorrect++;
            attempts--;

            if (totalIncorrect == 3 && math_level > 1)
            {
                math_level--;
                cout << "Sorry you are out of attempts" << endl;
                cout << "The correct answer is " << correctAns << endl;
                cout << "BooHoo - Leveling you DOWN to "<< math_level  <<endl;
                totalIncorrect=0;
                attempts = 3;
                persongetcorrect = true;
                currentRange -= LEVEL_CHANGE_RANGE;
                cout << "The numbers are now between 1 and " << currentRange << endl;

            }
            else
            {
                if (attempts)
                {
                    cout << "Bummer, that was incorrect" << endl;
                    cout << "You have " << attempts << " attempts left." << endl;
            persongetcorrect = false;
                }
                else
                {
                    cout << "Sorry you are out of attempts" << endl;
                    cout << "The correct answer is " << correctAns << endl;
                    persongetcorrect = true;
                }

            }
        }

        while (true)
        {
            cout << "Do you want to continue (y=yes || n=no) ?";
            cin >> userInput;
            if (userInput == "yes" || userInput == "y" || userInput == "n"|| userInput == "no")
            {
                break;
            }
            else
            {
                cout << "Wrong input!. Please enter y or yes or n or no" << endl;
            }
        }


    }while (userInput == "yes" || userInput == "y");

    cout << "Thanks for playing the game" << endl;

    return  0;
}