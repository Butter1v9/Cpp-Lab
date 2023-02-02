#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    //...
    // size of enum is 32 bit = 4 bytes. like an int
    enum Day {SAT, SUN, MON, TUE, WED, THU, FRI};
    enum Time {Morning, Noon, After_Noon, Night};

    Day today = MON;
    cout << sizeof(Day) << endl;

}