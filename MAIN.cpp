//
// Created by keboye02 on 10/6/2025.
#include <iostream>
#include <string>
#include<cstdlib>//necessary for rand()
#include <cstdlib> //necessary for rand()
#include<ctime>

using namespace std;
@@ -24,53 +24,85 @@ int main() {
    int rightnum = 0;
    int mathType = '?'; //[ 1,2,3,4]
    int correctAns = 0;
    int userAns = 0;
    int temp = 0;
    //(used to make sure the left number is larger than the right for subtraction)
    char mathSymbol = '?'; //[1 = +, 2 = -, 3 = *, 4 = /];

    cout << "What's your name? :";
    getline(cin, userName); // collect the user detials as one variable
    cout << "*  Welcome " << userName << " to the The Super Simple Math Tutor  *" << endl; //Greeting
    cout << "========================================================"<< endl;
    cout << "The Silly Simple Math Tutor" << endl;
    cout << "========================================================"<< endl;
    cout << endl;
    cout << "Sorry, but this version isnt set up fully yet. Please come back at V3" << endl;
    //cout << "What Equation would you like to solve." << endl; //Starting equation
    //Need to use first and second number to calculate
    cout << "Welcome to the Silly Simple Math Tutor!" << endl;
    cout << endl;
    cout <<"Fun math Facts:" << endl;
    cout << "   * Math Teachers have problems." <<endl;
    cout << "   * Math is the only subject that counts."<<endl;
    cout << "   * If it seems easy, you're doing it wrong."<<endl;
    cout << "   * It's all fun and games until someone divides by zero." <<endl;
    cout << endl;
    cout << "========================================================"<< endl;
    cout <<endl;
    cout << "What is your name? ";
    cin >> userName;
    cout << "Welcome "<<userName << " to the Silly Simple Math Tutor." <<endl;

    cout <<endl;

    srand(time(NULL));

    leftnum = rand() % 10 + 1;
    rightnum = rand() % 10 + 1;
    leftNum = rand() % 10 + 1;
    rightNum = rand() % 10 + 1;
    opNum = rand() % 4 + 1;



    switch (opNum) {
        case 1: // addition
            correctAns = leftNum + rightNum;
            cout << leftnum << " + " << rightnum << " = " << correctAns << endl;
            break;
        case 2: // subtraction
            correctAns = leftNum - rightNum;
            if (leftNum < rightNum)
                int tempNum = leftNum;

    switch (opNum)
    {
    case 1: // addition
        correctAns = leftNum + rightNum;
        mathSymbol = '+';
        break;
    case 2: // subtraction
        correctAns = leftNum - rightNum;
        mathSymbol = '-';
        if (leftNum < rightNum)
        {
            int tempNum = leftNum;
            leftNum = rightNum;
            rightNum = temp;
        }
        break;
        case 3: // Multiply
            correctAns = leftNum * rightNum;
            if (leftNum < rightNum)
                leftNum = rightNum;
            rightNum = temp;
    case 3: // Multiply
        correctAns = leftNum * rightNum;
        mathSymbol = '*';
        break;
        case 4: // devision
            correctAns = leftNum / rightNum;
            int tempNum = leftnum;
            leftNum = rightNum;
            rightNum = temp;
    case 4: // devision
        correctAns = leftNum;
        leftNum *= rightNum;
        mathSymbol ='/';
        break;

    default:
        cout << "Your math type is " << opNum << endl;
        cout << "Please contact us for help" << endl;
        return -1;

    }
    switch (opNum) {
        default:
            class error_code;

    cout <<userName << " what is " << leftNum << mathSymbol << rightNum  << " = ";
    cin >> userAnswer;
    if (userAnswer == correctAns)
    {
        cout << "Congrats! It looks like you are a math wizard." << endl;
        cout << "Thank you for playing the game" << endl;
    }
    else
    {
        cout << "Looks like you should play this game again."<< endl;
        cout << "The correct answer was " << correctAns <<"." <<endl;
    }
    cout << endl;
    cout << "Keep calm and do math!" <<endl;
    return -1;
}
