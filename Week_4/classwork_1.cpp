#include <iostream>
using namespace std;

int main() {
    cout<<" Kindly enter an integer: ";
    int input;
    cin>>input;

    if (input % 5 == 0)
    {
        cout<<"HiFive";
    }
    
    if (input % 2 == 0)
    {
        cout<<"HiEven";
    }
}