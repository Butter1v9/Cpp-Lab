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
    


    return EXIT_SUCCESS;
}