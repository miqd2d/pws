#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // ______________________________________________________________________________________________________
    // Q1 -> Take 2 integers input and print the greatest of them.

    /*
    int x,y;
    cout<<"Enter 2 numbers : ";
    cin>>x>>y;

    cout<<"greatest Number: ";
    if(x>y){
        cout<<x;
    }else{
        cout<<y;
    }
    */
    // ______________________________________________________________________________________________________
    // Q2 -> Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

    // int r;
    // cout<<"Enter radius : ";
    // cin>>r;

    // float areaCircle = 3.14 * r * r;
    // float circumferenceCircle = 2 * 3.14 * r;
    // if(areaCircle > circumferenceCircle){
    //     cout<<"area bigger than circumference";
    // }else{
    //     cout<<"circumference bigger than area";
    // }
    // ______________________________________________________________________________________________________
    // Q3 -> Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

    // int year;
    // cout<<"Enter year : ";
    // cin>>year;

    // if(year%4==0){
    //     cout<<"Leap year";
    // }else{
    //     cout<<"Not a leap year";
    // }
    // ______________________________________________________________________________________________________
    // Q4 -> Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

    // int x, y, z;
    // cout << "Enter the 3 sides of the triangle : ";
    // cin >> x >> y >> z;

    // if ((x + y > z) && (x + z > y) && (y + z > x))
    // {
    //     if ((x==y) && (y==z)) cout << "Equilateral triangle";
    //     else if ( ((x*x + y*y) == (z*z)) || ((x*x + z*z) == (y*y)) || ((z*z + y*y) == (x*x)) ) cout<<"Rigth Traingle";
    //     else if ( (x == y) || (x == z) || (y==z)  ) cout<<"Isoceles triangle";
    //     else cout<<"Scalene Triangle";
    // }else{
    //     cout<<"Not a valid triangle...";
    // }
    // ______________________________________________________________________________________________________
    // ** Q5 -> Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

    // cout<<"Enter point 1 coordinates : ";
    // int x1 , y1;
    // cin>>x1>>y1;

    // cout<<"Enter point 2 coordinates : ";
    // int x2 , y2;
    // cin>>x2>>y2;

    // cout<<"Enter point 3 coordinates : ";
    // int x3 , y3;
    // cin>>x3>>y3;

    // // Checking using area/determinant method
    // int check = x1 * (y2-y3) + x2 * (y3-y1) + x3 * (y1-y2);
    // if ( check == 0 ) cout << "Points are collinear";
    // else cout << "Points are not collinear";
    // ______________________________________________________________________________________________________
    // Q7 -> Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

    // char ch;

    // cout<<"Enter the char : ";
    // cin>>ch;

    // int ascii = (int)ch;
    // if((ascii > 96 && ascii < 123) || (ascii > 64 && ascii < 91)) cout<<"Alphabet";
    // else if(ascii > 47 && ascii < 58) cout<<"Digit";
    // else cout<<"other";
    // ______________________________________________________________________________________________________
    int a = 500, b, c;
    if (a >= 400)
        b = 300;
    c = 200;
    cout << "value of b and c are respectively "<<b<<" and "<< c  ; 

    return 0;
}