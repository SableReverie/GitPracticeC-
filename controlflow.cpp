// CONTROL FLOWS

// =================== if statement ============================
/*
#include <iostream>

int main(){

    int short num1 = 0;

    std::cout << "Enter A number: " << std::endl;
    std::cin >> num1;

    if(num1 > 0){
        std::cout << "The number is positive!";
    } else if (num1 < 0){
        std::cout << "The number is negative!"; 
    } else {
        std::cout << "The number is Zero!";
    }

    return 0;
}*/
/*
#include <iostream>

int main(){
    int age;
    bool isAdult = true;
    bool isMinor = false;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;
    
    if(age >= 18){
        std::cout << "You are a Adult";
    } else if (age > 0 && age <= 17){
        std::cout << "You are a Minor";
    } else {
        std::cout << "You are not born!";
    }
    return 0;
}
*/

#include <iostream>

using namespace std;

int main() {
    int numerator, denominator;

    // Get user input
    cout << "Enter a Number (Numerator): ";
    cin >> numerator;
    cout << "Enter another Number (Denominator): ";
    cin >> denominator;

    // Check divisibility
    if (numerator % denominator == 0) {
        cout << numerator << " is divisible by " << denominator << endl;
    } else {
        cout << numerator << " is not divisible by " << denominator << endl;
    }

    return 0;
}   
















/*
//while statement

 #include <iostream>
   using namespace std;

int main() {
        int count = 1;

        while (count <= 5) {
        cout << "Iteration " << count;

        if (count % 2 == 0) {
            cout << " - Even";
        } else {
            cout << " - Odd";
        }

        cout << endl; 
        count++;       
    }

    return 0;
}
*/