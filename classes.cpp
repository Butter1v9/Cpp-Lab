#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};


class Counter{
    public:
        Counter();
        int getCount();
        void increaseBy(int n);
    private:
        int count;
};

class Passenger{

    public:
        Passenger();
        Passenger(const string& nm, MealType mp, const string& ffn = "NONE");
        Passenger(const Passenger& pass);
        string getName();
        MealType getMP();
    private:
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        string freqFlyerNum;
    

};

int main(){
    Counter ctr;
    cout << ctr.getCount() << endl;
    ctr.increaseBy(5);
    cout << ctr.getCount() << endl;
    // cout << ctr.count << endl; --illegial - count is a private variable
    
    Passenger pass("John Cena", REGULAR, "1123456");
    Passenger copy(pass); // copies the pass object's
    Passenger copyCat = pass; // same as copy
    Passenger list[10]; // uses default constructor
    cout << list[0].getName() << endl;
    cout << pass.getName() << endl;
    cout << copy.getName() << endl;
    cout << copyCat.getName() << endl;

    return 0;


}


Counter::Counter(){count = 0;}
int Counter::getCount(){return count;}
void Counter::increaseBy(int n) {count += n;}

Passenger::Passenger(){
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNum = "NONE";
}
Passenger::Passenger(const string& nm, MealType mp, const string& ffn){
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != "NONE");    
    freqFlyerNum = ffn;
}
Passenger::Passenger(const Passenger& pass){
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;    
    freqFlyerNum = pass.freqFlyerNum;
}

string Passenger::getName(){
    return name;
}