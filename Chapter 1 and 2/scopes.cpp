#include <cstdlib>
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
namespace myglobals{
    int cat;
    string dog = "bow wow";
}
using namespace myglobals;



const int Cat = 1;

int main(){
    cout << myglobals::dog << endl;
    const double PI = 3.14159265;
    const int CUT_OFF[] = {90, 80, 70, 60};
    const int N_DAYS = 7;
    const int N_HOURS = 24*N_DAYS;
    int counter[N_HOURS];

    typedef char* BufferPtr;
    typedef double Coordinate;
    BufferPtr p;
    Coordinate x,y;
    cout << sizeof(BufferPtr) << endl;
    const int Cat = 2;
    cout << Cat << endl;
}

