#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    double f[5];
    int m[10];
    f[4] = 2.5;
    m[2] = 4;
    cout << f[m[2]] << endl;

    int a[] = {10, 11, 12, 13}; // declares and initializes a[4]
    bool b[] = {false, true};  // declares and initializes b[2]
    char c[] = {'c', 'a', 't'}; // declares and initializes c[3]
    char* p = c;
    char* q = &c[0];

    cout << "c location: " << &c << endl;
    cout << "p pointer: " << *p << endl << "q pointer: " << q[2] << endl;



    return EXIT_SUCCESS;
}