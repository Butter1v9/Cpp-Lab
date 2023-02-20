#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(){
    char command;
    cout << "Enter a char" << endl;
    cin >> command;
    // switch statment
    // if we dont break after each case, the switch will continue checking.
    
    switch(command){
        case 'I':
            cout << "case I input";
            break;
        case 'J':
            cout << "case J input";
            break;
        default:
            cout << "undefined input";
            break;
    }





    return EXIT_SUCCESS;
}