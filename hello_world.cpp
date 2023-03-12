#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Hello world! \n";
    cout << "The name is Erica \n";
    
    //Practice with declaring variables
    int myNum = 8;
    cout << myNum << endl;

    double dNum = 8.35;
    cout << dNum << endl;

    char myLtr = 'E';
    cout << myLtr << endl;

    string myString = "Awesome";
    cout << myString << endl;

//Apparently when you print the boolean values, you get numbers
    bool myBool = true;
    cout << myBool << endl; //prints 1

    myBool = false;
    cout << myBool << endl; //prints 0

//Printing out variable in a statement
    string myCity = "Lynnwood";
    string myState = "Washington";

    cout << "I live in " << myCity << " , " << myState << ". " << endl;

//Adding two variables
    string stringOne = "Awesome";
    string stringTwo = " Sauce!";

    string conCat = stringOne + stringTwo;
    cout << conCat << endl;

    cout << "Who knew C++ can be so easy to learn?";

    return 0;

}