#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int integerMin(int a, int b) {return (a < b ? a : b);
}

template <typename T> // creating a typename T
T gc(T a, T b){ // gc = genericMin
    return (a < b? a : b);
}

template <typename T>
T maxx(T a, T b){
    return (a > b? a : b);
}

int main(){
    string l = "Least is: ";
    string m = "Max is: ";
    int a, b;
    a = 2, b = 5;
    cout << l << integerMin(2,6) << endl;
    cout << l << gc(a,b) << endl;
    cout << l << gc(1.8, 2.1) << endl;
    cout << l << gc('z', 'x') << endl;
    cout << m << maxx(a,b) << endl;
    return EXIT_SUCCESS;
}


