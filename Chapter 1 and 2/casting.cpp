#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int i = 5;
    int j = 2;
    double z = i / j; // 5 / 2 = 2
    double x = double(i) / double(j); // 5.0 / 2.0 = 2.5

    cout << z << endl;
    cout << x << endl;

    // static casting, does not round, but rather truncate
    double d1 = 3.2;
    double d2 = 3.99999;
    int i1 = static_cast<int>(d1); // 3
    int i2 = static_cast<int>(d2); // 3

    cout << i1 << endl << i2 << endl;

    // implicit casting
    int a = 6;
    double b = 2.5;
    double c = a / b; // double(a) / b --implicit casting
    int d = c; // d = int(c) --implicit casting 
    cout << d << endl;

    return EXIT_SUCCESS;
}