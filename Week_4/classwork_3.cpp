#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num1 = rand() % 10;
    int num2 = rand() % 10;

    int num_1 = num1;
    int num_2 = num2;

    if (num1 <num2)
    {
        num1 = num_2;
        num2 = num_1;
    }

    int input;
    cout<<"Guess the difference between number 1 and 2.\n";
    cin>>input;

    if (input == (num1-num2))
    {
        cout<<"That is correct.";
    }

    else
    {
        cout<<"That is wrong sorry.";
    }
}