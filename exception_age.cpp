//Name: Om Bhombe
//prn 23070123039
//Aim Write a code to handle exception by age 


#include <iostream>
using namespace std;

int main() {
    float age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age; 
        } 
        else if (age < 0) { 
            throw age; 
        } 
        else {
            cout << "Accepted" << endl;
        }
    }
    catch (float age) {
        if (age < 0) {
            cout << "\nInvalid age"<<endl;
        } 
        else {
            cout << "\nYou are below 18" << endl; 
        }
    }

    return 0;
}

//output Enter your age: -8

//Invalid age
