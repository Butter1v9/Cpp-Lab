#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void modifier(int a, int& b); // a --pass by value, b --pass by reference
inline int min(int x, int y){return (x < y? x : y);}

int main(){

    int x = 5;
    int y = 3;
    cout << "Before Modifier" << endl;
    cout << x << endl << y << endl;
    modifier(x,y);
    cout << "After Modifier" << endl;
    cout << x << endl << y << endl;
    cout << "The min between x and y is: " << min(x,y) << endl;
    return 0;


}

void modifier(int a, int& b){
    a *= 2;
    b *= 2;
    
}