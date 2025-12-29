#include<iostream>
using namespace std;

int main() {
    int a,b,c;

    cout << "This program tells if the triangle is isosceles, equilateral, or scalene\n" << endl;

    cout << " Enter the digits of the triangle: " << endl;
    cout << " a: ";
    cin >> a;
    cout << " b: ";
    cin >> b;
    cout << " c: ";
    cin >> c;

    if (a == b && b == c){
        cout << "The triangle is equilateral." << endl;
    }
    else if (a == b || b == c || a == c){
        cout << "The triangle is isosceles." << endl;
    }
    else {
        cout << "The triangle is scalene." << endl;
    }

    cout << " wanna try again? (y/n): ";
    char choice;
    cin >> choice;
    if (choice == 'y' || choice == 'Y'){
        main();
    }   
    else {
        cout << "Thank you for using the triangle type checker!\n" << endl;
    }   
    
        return 0;

}