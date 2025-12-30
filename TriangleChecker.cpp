#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a,b,c;
    double A,B,C;

    cout << "This program tells if the triangle is isosceles, equilateral, or scalene and  also tells the angles they make.\n" << endl;


    cout << " Enter the digits of the triangle: " << endl;
    cout << " a: ";
    cin >> a;
    cout << " b: ";
    cin >> b;
    cout << " c: ";
    cin >> c;

    //calculating angles using cosine rule
    A = (((b*b)+(c*c)-(a*a))/(2*b*c));
    B = (((a*a)+(c*c)-(b*b))/(2*a*c));
    C = (((a*a)+(b*b)-(c*c))/(2*a*b));

    //gettin the angles in degrees
    double A_angle = acos(A) * (180.0 / M_PI);
    double B_angle = acos(B) * (180.0 / M_PI);
    double C_angle = acos(C) * (180.0 / M_PI);

    // Determine the type of triangle and display angles

    if (a == b && b == c){
        cout << "The triangle is equilateral." << endl;
        cout << "Each angle is "<< A_angle <<  " degrees." << endl;
    }
    else if (a == b || b == c || a == c){
        cout << "The triangle is isosceles." << endl;
        if (a == b){
            cout << "Both angles A and B are equal to: " << A_angle << " degrees." << endl;
            cout << "Angle C is: " << C_angle << " degrees." << endl;
        }
        else if (b == c){
            cout << "Both angles B and C are equal to: " << B_angle << " degrees." << endl;
            cout << "Angle A is: " << A_angle << " degrees." << endl;
        }
        else {
            cout << "Both angles A and C are equal to: " << C_angle << " degrees." << endl;
            cout << "Angle B is: " << B_angle << " degrees." << endl;
        }
    }
    else {
        cout << "The triangle is scalene." << endl;
        cout << "The angles are: " << endl;
        cout << "Angle A: " << A_angle << " degrees." << endl;
        cout << "Angle B: " << B_angle << " degrees." << endl;
        cout << "Angle C: " << C_angle << " degrees." << endl;
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
