#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"This is a program designed to calculate the hypotenuse\nof a right-angled triangle.";
    float side_1;
    float side_2;
    cout<<"\n\nKindly enter the length for the first side:\n";
    cin>>side_1;
    cout<<"Kindly enter the length for the second side:\n";
    cin>>side_2;
    float hypotenus = sqrt(pow(side_1,2.0)+pow(side_2,2.0));
    cout<<"The length of the hypotenus is:\n"<<hypotenus;
}