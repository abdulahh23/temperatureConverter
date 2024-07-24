#include<iostream>
using namespace std;

int main() {
    float f,c;
    cout<<"Enter the temperature in Fahrenheit :";
    cin>> f;
    c = 5.0/9.0*(f-32);
    cout<<"Your temperature in celsius is :"<<c <<" celsius \n";

    return 0;
}