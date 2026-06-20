#include<iostream>
using namespace std;

int main() {
    int base, height;
    int area;
    cout<<"Enter Base and Height of Right Angle Triangle";
    cin>>base;
    cin>>height;
    area = (base * height)/2;
    cout<<"Area of Triangle is "<< area;
    return 0;

}