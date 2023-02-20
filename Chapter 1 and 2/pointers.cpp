#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int* p = &x;
    int** z = &p;
    int*** y = &z;
    int**** l = &y;
    cout << &x << endl;
    cout << p << endl;
    cout << *z << endl;
    cout << **y << endl;
    cout << ***l << endl;

    cout << x << endl;
    cout << *p << endl;
    cout << **z << endl;
    cout << ***y << endl;
    cout << ****l << endl;
}