#include <iostream>
#define max 100
using namespace std;
// Base Class
class Person {
    string name;
    int age;

    public:
        Person(){
            //Default
        }
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void input(){
        cout << "Name:" ;
        cin >>name;
        cout << "Age:";
        cin >> age ;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
// Derived Class
class Student : public Person {
    int rollNo;
    string department;

    public:
    Student(){
        //Default
    }
    Student(string n, int a, int r, string d): Person(n, a){
        rollNo = r;
        department = d;
    }
    virtual void input(){
        Person :: input();
        cout << "RollNo:";
        cin >> rollNo ;
        cout<<"Department";
        cin>>department;
    }
    void displayDetails() {
        Person::displayDetails();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Department: " << department << endl;
    }
};
int main() {
    Student s[max];
    int n;
    // Number of students to take details of
    cin >> n;
    for( int i=0; i<n; i++){
        s[i].input() ;
    }
    cout << "\t\tSTUDENT DETAILS" << endl;
    for(int i=0; i<n; i++){
        cout << "Student" << i <<endl;
        s[i].displayDetails();
        cout << "\n" ;
    }
    return 0;
}
