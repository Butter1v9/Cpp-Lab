#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    //...
    int x,y;
    cout << "Please enter two numberS: ";
    cin >> x >> y; // inputs x and y
    int sum = x + y; // computes the sum
    cout << "Their sum is " << sum << endl;
    cout << sizeof(sum) << endl;
    return EXIT_SUCCESS; // cstdlib defines this constant to be 0
}
