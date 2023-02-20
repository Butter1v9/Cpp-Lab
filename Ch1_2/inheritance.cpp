#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person{
    public:
        Person(const string& name, const string& idNum);
        virtual ~Person(){
            cout << "Person destructor activated" << endl;
        };
        virtual void print();
        virtual string getName();
    private:
        string name;
        string idNum;
};

class Student : public Person{
    public:
        Student(const string& name, const string& idNum, const string& m, int gradYear);
        virtual ~Student(){
            cout << "Student destructor activated" << endl;
        };
        virtual void print();
        void changeMajor(const string& newMajor);
        virtual string getName();
    private:
        string major;
        int gradYear;

};


int main(){
    // string mary = "Mary";
    // string idNum = "12-345";
    // Person person(mary, idNum);
    // Student student("Bob", "98-764", "Math", 2012);
    // //cout << person.getName() << endl;
    // //mary = "Mary Jane";
    // //cout << person.getName() << endl;
    // person.print();
    // student.print();
    // // changing student major
    // student.changeMajor("Computer Science");
    // student.print();

    Person* pp[100];// create an array of 100 pointers of type Person
    pp[0] = new Person("Mary","1234");
    pp[1] = new Student("John", "1212", "Art", 2023);
    //pp[0]->print();
    pp[1]->print();

    // pp[1]->changeMajor("CS"); // ERROR - because Person class doesnt have changeMajor function
    Student* sp = dynamic_cast<Student*>(pp[1]);
    sp->changeMajor("Undecided");
    pp[1]->print();
    //delete pp[0];
    //pp[0]->print();
    return EXIT_SUCCESS;
}

Person::Person(const string& name, const string& idNum)
    : name(name), idNum(idNum){}
string Person::getName(){
    cout << name << endl;
    return name;
}
void Person::print(){
    cout << "Name: " << name << endl;
    cout << "ID number: " << idNum << endl;
}

Student::Student(const string& name, const string& idNum, const string& m, int gradYear)
    : Person(name,idNum), major(m), gradYear(gradYear){}
    

void Student::print(){
    Person::print();
    cout << "Major: " << major << endl;
    cout << "Graduation Year: " << gradYear << endl;
}

void Student::changeMajor(const string& newMajor){
    major = newMajor;
}
string Student::getName(){
    cout << major << endl << gradYear << endl;
    return major;
}
