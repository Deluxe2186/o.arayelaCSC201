#include <iostream>
using namespace std;

int main(){
    double pi = 3.141415;
    double r;

    cout<<"Input a value for the radius:\n";
    cin>>r;

    double area = pi * r *r;

    cout<<"area of the circle is: " <<area<< "cm";
    return 0;
}