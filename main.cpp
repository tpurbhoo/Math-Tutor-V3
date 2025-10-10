//
// Created by keboye02 on 10/6/2025.
#include <iostream>
#include <string>
#include<cstdlib>//necessary for rand()
#include<ctime>

using namespace std;

int Mathtype;

int main() {
    const int MAX_ATTEMPTS = 3;

    const int LEVEL_CHANGE_RANGE= 10;

    enum MathType {MT_ADD = 1, MT_SUB = 2,MT_MUL = 3,MT_DIV = 4};

    int rightnum = 0;

    MathType = MT_ADD = 1;

    int correctAns = 0;


    int userAns = 0;

    int tempNum = 0;

    int leftnum = 0;
std::string userName;
    //(used to make sure the left number is larger than the right for subtraction)
    char mathSymbol = '?'; //[1 = +, 2 = -, 3 = *, 4 = /];

    cout << "What's your name? :";
    std::cin >> mathSymbol;
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

    Mathtype =static_cast<MathType>( rand() % 4 + 1);//1 = add,2= subtract,3=mulitply,4=division




    switch (Mathtype) {
        case 1: // addition
            correctAns = leftnum + rightnum;
            cout << int leftnum << " + " << rightnum << " = " << correctAns << endl;
            break;
        case 2: // subtraction
            correctAns = leftnum - rightnum;
            if (leftnum < rightnum)
                int tempNum = leftnum;

    switch (Mathtype)
    {
    case MT_ADD: // addition
        correctAns = leftnum + rightnum;
        mathSymbol = '+';
        break;
    case MT_SUB: // subtraction
        correctAns = leftnum - rightnum;
        mathSymbol = '-';
        if (leftnum < rightnum)
        {
            int tempNum = leftnum;
            leftnum = rightnum;
            rightnum = tempNum;
        }
        break;
        case MT_MUL: // Multiply
            correctAns = leftnum * rightnum;
            if (leftnum < rightnum)
                leftnum = rightnum;
            rightnum = tempNum;
    case MT_MUL: // Multiply
        correctAns = leftnum * rightnum;
        mathSymbol = '*';
        break;
        case MT_DIV: // devision
            correctAns = leftnum / rightnum;
            int tempNum = int leftnum;
            leftnum = rightnum;
            rightnum = tempNum;
    caseMT_DIV: // devision
        correctAns = leftnum;
        leftnum *= rightnum;
        mathSymbol ='/';
        break;

    default:
        cout << "Your math type is " << MathType << endl;
        cout << "Please contact us for help" << endl;
        return -1;

    }
    switch (Mathtype) {
        default:
            class error_code;

    cout <<userName << " what is " << leftnum << mathSymbol << rightnum  << " = ";
    cin >> userAns;
    if (userAns == correctAns)
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
