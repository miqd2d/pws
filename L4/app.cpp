#include <iostream>
using namespace std;

int main() {

    // Q1 -> Write a program to count the minimum number of notes in a given amount using the switch statement.

    int x;
    cout<<"Enter the currency you have : ";
    cin>>x;

    int _2000 = 0;
    int _500 = 0;
    int _200 = 0;
    int _100 = 0;
    int _50 = 0;
    int _20 = 0;
    int _10 = 0;
    int _1 = 0;

    if(x > 2000){
        _2000 = x/2000;
        cout<<"2000 : "<<_2000<<endl;
        x -= 2000 * _2000;
    }
    if(x > 500){
        _500 = x/500;
        cout<<"500 : "<<_500<<endl;
        x -= 500 * _500;
    }
    if(x > 200){
        _200 = x/200;
        cout<<"200 : "<<_200<<endl;
        x -= 200 * _200;
    }
    if(x > 100){
        _100 = x/100;
        cout<<"100 : "<<_100<<endl;
        x -= 100 * _100;
    }
    if(x > 50){
        _50 = x/50;
        cout<<"50 : "<<_50<<endl;
        x -= 50 * _50;
    }
    if(x > 20){
        _20 = x/20;
        cout<<"20 : "<<_20<<endl;
        x -= 20 * _20;
    }
    if(x > 10){
        _10 = x/10;
        cout<<"10 : "<<_10<<endl;
        x -= 10 * _10;
    }
    if(x > 0){
        _1 = x/1;
        cout<<"1 : "<<_1<<endl;
        x -= 1 * _1;
    }

    return 0;
}