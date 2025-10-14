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

    float new_interest =(balance * rate * time)/100.0;
    float new_balance = balance + new_interest;

    cout<<"balance after one year = "<<balance;
    cout<<"\nbalance after two years = "<<new_balance;
}