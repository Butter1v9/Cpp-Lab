#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


int main(){
    enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

    struct Passenger{ // c-style struct
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        string freqFlyerNum;

        int test(){
            cout << "Hello world" << endl;
            return 0;
        }
    };


    Passenger pass = {"John Smith", VEGETARIAN, true, "11994"};
    pass.test();
    cout << "Passenger name: " << pass.name << endl;
    pass.name = "Joseph Smith";
    pass.mealPref = REGULAR; // change meal preference
    cout << "Passenger name: " << pass.name << endl << pass.mealPref << endl;

    Passenger *p; // creating pointer of type Passenger
    p = new Passenger; // assigning pointer to new Passenger
    p->name = "Name: pointer of type passenger"; // p->name == (*p).name
    p->test();
    cout << (*p).name << endl;
    delete p; // makes p a "dangling pointer"
    // does not delete tha actual pointer, just removes the hold on the memory etc.
    //cout << p->name << endl; // still can access pointer

    char* buffer = new char[500]; // allocate a buffer of 500 chars
    buffer[3] = 'a'; // elements are still accessed using [ ]
    delete[] buffer; // delete the buffer
        
    string author = "Samuel Clemens";
    string& penName = author; // penName is an alias for author
    penName = "Mark Twain"; // now author = “Mark Twain”
    cout << author << endl; // outputs “Mark Twain”

}