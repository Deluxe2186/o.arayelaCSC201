#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"This is a program designed to\ndetermine whether a student is an adult or not.";
    cout<<"\n\nKindly enter student's age: ";
    cin>>age;

    if (age >= 18)
    {
        cout<<"You are an adult";
    }
    else if (age < 0)
    {
        cout<<"Invalid age. Kindly input a positive integer.";
    }
    else
    {
        cout<<"You are NOT an adult";
    }
}