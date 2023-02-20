#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int a[] = {1, 2, 3, 4};
    int i = 2;
    int j = i++; // post increment operation = returns value then increments, j = 2, i = 3
    int k = --i; // pre-increment operation = applies decrement then returns value, k = 2, i = 2;
    cout << a[k++] << endl; // returns a[2], then increments k by 1 (k = 3);
    cout << k << endl;
 

    return EXIT_SUCCESS;
}