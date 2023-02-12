#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;


int main(){
    vector <int> scores(100);
    vector <char> buffer(500);
    cout << typeid(scores).name() << endl;

    return EXIT_SUCCESS;
}