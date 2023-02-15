#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Progression{
    public:
        Progression(long f = 0)
            : first(f), cur(f){};
        virtual ~Progression(){};
        void printProgression(int n);
    protected:
        virtual long firstValue();
        virtual long nextValue();
    protected:
        long first;
        long cur;
};

class ArithProgression : public Progression{
    public:
        ArithProgression(long i = 1);
    protected:
        virtual long nextValue();
    private:
        long inc;
};

int main(){
    ArithProgression arith(2);
    arith.printProgression(11);
    Progression* pp[10];
    pp[1] = new ArithProgression(5);
    pp[1]->printProgression(11);
    return EXIT_SUCCESS;

}

void Progression::printProgression(int n){
    cout << firstValue();
    for (int i = 2; i <= n; i++)
    {/* code */
         cout << ' ' << nextValue();
    }
    cout << endl;
}

long Progression::firstValue(){
    cur = first;
    return cur;
}

long Progression::nextValue(){
    return ++cur;
}

ArithProgression::ArithProgression(long i)
    : Progression(), inc(i){}

long ArithProgression::nextValue(){
    cur += inc;
    return cur;
}