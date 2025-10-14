#include <iostream>
using namespace std;

int main(){
    float principle;
    float rate;
    float time = 1.0;
    cout<<"Interest calculation program";
    cout<<"Enter starting balance: ";
    cin>>principle;
    cout<<"Enter annual interest rate: ";
    cin>>rate;
    float simple_interest =(principle * rate * time)/100.0;
    float balance = simple_interest + principle;
    cout<<"balance after one year = "<<balance;
}