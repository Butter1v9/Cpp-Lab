#include <cstdlib>
#include <iostream>
using namespace std;
/* Write a C++ program that can take a positive integer greater *or equal* to 2 as input
and write out the number of times one must repeatedly divide this number by 2 before getting
a value less than 2 */

// 1- take int input, 2 - has to be greater *or equal* to 2. 3- count how many times it can be divide by 2 before it becomes less than 2.
int counter(int n);


int main(){
    int n;
    cout << "How many times N can be divide before it's equal or less than 2" << endl;
    cout << "Enter an Integer value of N: ";
    cin >> n;
    cout << "If N = " << n << " Then it can be divide " << counter(n) << " times before it's less than 2." << endl;
    return 0;
}


int counter(int n){
    int count = 0; // set a counter = 0

    while(n >= 2){
        n  = n / 2;
        count++;
    };
    return count; // return count after while loop
    
};