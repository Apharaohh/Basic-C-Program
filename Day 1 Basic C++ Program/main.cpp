#include <iostream>
using namespace std;

//Main function
int main () {
    
    //Variables
    string name;
    int age;
    
    //Output to the screen asking the user for their name
    cout << "What is your name?" << endl;
    cin >> name;
    
    //Asks user for their age
    cout << "How old are you?" << endl;
    cin >> age;
    
    if (age <=0) {
        cout << "That age is not correct" << endl;
    } else {
        //Introduce user
        cout << "Their name is " << name << " and they are " << age << " years old" << endl;
    }
    
    
    
    //Return if successful
    return 0;
}
