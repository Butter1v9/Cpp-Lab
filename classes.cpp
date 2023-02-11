#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


class Counter{
    public:
        Counter();
        int getCount();
        void increaseBy(int n);
    private:
        int count;
    
    
};

int main(){
    Counter ctr;
    cout << ctr.getCount() << endl;
    ctr.increaseBy(5);
    cout << ctr.getCount() << endl;
    // cout << ctr.count << endl; --illegial - count is a private variable
    return 0;
}


Counter::Counter(){count = 0;}
int Counter::getCount(){return count;}
void Counter::increaseBy(int n) {count += n;}

