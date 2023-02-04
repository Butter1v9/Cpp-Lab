#include <cstdlib>
#include <iostream>
#include <string>

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
    char d[] = {'c','a','t'};
    char* p = c;
    char* q = &c[0];
    if (c == p){ // compares the address of the first element
        cout << "equal" << endl;
    } else{
        cout << "false" << endl;
    }
    cout << "c location: " << c[2] << endl;
    cout << "p pointer: " << p[2] << endl << "q pointer: " << q[2] << endl;

    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;
    if (s > t)
        cout << u << endl;

    string john = "John";
    int johnSize = john.size();
    char js = john[3];
    john += " Smith";
    johnSize = john.size();
    cout << john << endl << johnSize << endl;

    return EXIT_SUCCESS;
}