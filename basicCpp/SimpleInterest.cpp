#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float SI, P, R, T;
    cout<<"Rate of Interest is = ";
    cin>>R;
    cout<<"Prinicipal Amount is = ";
    cin>>P;
    cout<<"Time Taken is = ";
    cin>> T;
    SI = (P*R*T)/100;
    cout<<"SIMPL INTEREST = "<<SI;
    return 0;
}