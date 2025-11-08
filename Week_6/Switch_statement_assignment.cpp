#include <iostream>
using namespace std;

int main(){
    int redo = 1;
    string input_2;
    
    do{
    int user_input;
    string zodiac_animal;
    cout<<"Enter a year: ";
    cin>>user_input;
    int year = user_input % 12;
    
    
    switch(year){
        case 0:
        zodiac_animal = "Monkey";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 1:
        zodiac_animal = "Rooster";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;

        case 2:
        zodiac_animal = "Dog";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 3:
        zodiac_animal = "Pig";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 4:
        zodiac_animal = "Rat";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 5:
        zodiac_animal = "Ox";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 6:
        zodiac_animal = "Tiger";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 7:
        zodiac_animal = "Rabbit";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 8:
        zodiac_animal = "Dragon";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 9:
        zodiac_animal = "Snake";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 10:
        zodiac_animal = "Horse";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        case 11:
        zodiac_animal = "Sheep";
        cout<< "Your zodiac animal is: "<<zodiac_animal<<endl;
        break;
        
        default:
        cout<<"Invalid input."; 
        
        
    }
    cout<<"\nWould you like to make another entry? (y/n): ";
    cin>> input_2;
    
    if(input_2 == "y"||input_2 =="Y"){
        redo = 1;
    }
    else if(input_2 == "n"||input_2 == "N"){
        redo = 0;
    }
    else{
        return 0;
    }
}
while(redo != 0);
}