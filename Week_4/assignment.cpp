#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string full_name;
int student_input;
bool is_PAU_student;

int course_choice;   
string course;
int days;
float reg;

int location_choice;
string location;
float lodging;

int main() {
    
    cout<<"Enter your full name: ";
    getline(cin,full_name);

    //Decision making process for whether
    //A student is a member of PAU or not

    cout<<"Is PAU student?(1=true, 0=false): ";
    cin>>student_input;
    is_PAU_student = (student_input !=0);

    //This is the decision making process 
    //for the course of choice
    
    cout<<"\nCOURSES"; 
    cout<<"\n1-> Photography";
    cout<<"\n2-> Painting";
    cout<<"\n3-> Fishing Farming";
    cout<<"\n4-> Baking";
    cout<<"\n5-> Public Speaking\n" ;
    cout<<"Enter course(1-5): "; 
    cin>>course_choice;

    if (course_choice == 1)
    {
        course = "Photography";
        days = 3;
        reg = 10000;
    }
    else if (course_choice == 2)
    {
        course = "Painting";
        days = 5;
        reg = 8000;
    }
    else if (course_choice == 3)
    {
        course = "Fish Farming";
        days = 7;
        reg = 15000;
    }
    else if (course_choice == 4)
    {
        course = "Baking";
        days = 5;
        reg = 13000;
    }
    else if (course_choice == 5)
    {
        course = "Public Speaking";
        days = 2;
        reg = 5000;
    }
    else
    {
        cout<<"Invalid response please enter a number between 1 and 5.";
    }
    
    //This is the decision making process 
    //for the location of choice

    cout<<"\nLOCATIONS";
    cout<<"1-> Camp House A"<<endl;
    cout<<"2-> Camp House B"<<endl;
    cout<<"3-> Camp House C"<<endl;
    cout<<"4-> Camp House D"<<endl;
    cout<<"5-> Camp House E"<<endl;
    cout<<"\nEnter location(1-5): ";
    cin>>location_choice;


    if (location_choice == 1)
    {
        location = "Camp House A";
        lodging = 10000;
    }
    else if (location_choice == 2)
    {
        location = "Camp House B";
        lodging = 2500;
    }
    else if (location_choice == 3)
    {
        location = "Camp House C";
        lodging = 5000;
    }
    else if (location_choice == 4)
    {
        location = "Camp House D";
        lodging = 13000;
    }
    else if (location_choice == 5)
    {
        location = "Camp House E";
        lodging = 5000;
    }
    else 
    {
        cout<<"Invalid response please enter a number between 1 and 5.";
    }

    //Making the lodging discount system
    int lodging_cost = lodging * days;
    int total = reg + lodging_cost;

    float new_lodging;
    float lodging_discount;

    if (student_input == 1 && (location_choice == 1 || location_choice == 2))
    { 
        lodging_discount = lodging * 0.05;
        new_lodging = lodging-(lodging_discount);
    }
    else
    {
        lodging_discount = 0;
        new_lodging = lodging;
    }

//Making the registration discount system
    float new_reg;
    float reg_discount;
    if ((days > 5) || (reg > 12000))
    {
        reg_discount = reg *0.03;
        new_reg = reg - (reg_discount);
    }
    else
    {
        reg_discount = 0;
        new_reg = reg;
    }

//Random number generator for promo
    int promo;
    srand(time(0));
    int r = rand() % 101;

    if (r==7||r==77)
    {
        promo = 500;
        total =total + promo;
    }
    else 
    {
        promo = 0;
    }

//output messages
    cout<<"\n----------------------------------------\n----------------------------------------\n\n";
    cout<<"Name: "<<full_name<<" (PAU student: "<<(is_PAU_student ? "YES" : "NO")<<")"<<endl;
    cout<<"Course: "<<course<<endl;
    cout<<"Days: "<<days<<endl;
    cout<<"Registration: ₦"<<new_reg<<" (reg discount: ₦"<<reg_discount<<")"<<endl;
    cout<<"Lodging: ₦"<<lodging<<" x "<<days<<" = ₦"<<lodging_cost<<" (lodging discount: ₦"<<lodging_discount<<")"<<endl;
    cout<<"Random draw: "<<r<<endl;
    cout<<"Promo applied: ₦"<<promo<<endl;
    cout<<"\nTOTAL: ₦"<<total;
}