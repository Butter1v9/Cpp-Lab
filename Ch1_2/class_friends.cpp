#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class SomeClass{
    public:
        SomeClass();
        friend ostream& operator<<(ostream& out, const SomeClass& x);
    private:
        int secret;
    
};

class Book{
    public:
        class BookMark{ // nested class
        };
};


ostream& operator<<(ostream& out, const SomeClass& x){
    return cout << x.secret;
}



int main(){
    SomeClass p1;
    
    cout << p1 << endl;
    return 0;
}


SomeClass::SomeClass(){
    secret = 3;
}