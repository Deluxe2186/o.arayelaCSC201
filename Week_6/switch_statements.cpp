#include <iostream>
using namespace std;

int main() {
    int day;
    cout<<"Enter the day";
    cin>>day;

    switch(day){
        case 1:
        case 2:
        case 3:
        case 4: 
        case 5: 
            cout<<"Weekday";
            break;
        case 6: 
        case 0: 
            cout<<"Weekend";
            break;
        default:
            cout<<"Error";
    }
}