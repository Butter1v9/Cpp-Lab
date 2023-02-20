#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Progression{
    public:
        Progression(long f = 0)
            : first(f), cur(f){};
        virtual ~Progression(){cout << "Progression Destructed" << endl;};
        void printProgression(int n);
    protected:
        virtual long firstValue();
        virtual long nextValue() = 0; // =0 means it is now pure virtual function
    protected:
        long first;
        long cur;
};

class ArithProgression : public Progression{
    public:
        ArithProgression(long i = 1);
        virtual ~ArithProgression(){cout << "ArithProg Destructed" << endl;};
    protected:
        virtual long nextValue();
    private:
        long inc;
};

class GeomProgression : public Progression{
    public:
        GeomProgression(long b = 2); // to be multiplied by
        virtual ~GeomProgression(){
            cout << "GeomProgression Destructed" << endl;
        }
    protected:
        virtual long nextValue();
    protected:
        long base;
};

class FibonacciProgression : public Progression{
    public:
        FibonacciProgression(long f = 0, long s = 1); // f = first, s = second
        virtual ~ FibonacciProgression(){
            cout << "FibonacciProgression Destructed" << endl;
        }
    protected:
        virtual long firstValue();
        virtual long nextValue();
    protected:
        long second;
        long prev;
};

int main(){
    Progression* pp[10];
    pp[1] = new ArithProgression(5);
    pp[1]->printProgression(11);
    delete pp[1];
    pp[2] = new GeomProgression(2);
    pp[2]->printProgression(10);
    delete pp[2];
    pp[3] = new FibonacciProgression();
    pp[3]->printProgression(11);
    delete pp[3];
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

GeomProgression::GeomProgression(long b)
    : Progression(1), base(b){};

long GeomProgression::nextValue(){
    cur *= base;
    return cur;
}

FibonacciProgression::FibonacciProgression(long f, long s)
    :Progression(f), second(s), prev(second - first){}

long FibonacciProgression::firstValue(){
    cur = first;
    prev = second - first;
    return cur;
}

long FibonacciProgression::nextValue(){
    long temp = prev;
    prev = cur;
    cur += temp;
    return cur;
}