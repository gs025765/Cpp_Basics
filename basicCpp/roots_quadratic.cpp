#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    int root1,root2;
    cout<<"Enter Coefficients of Quadractic Equation a,b,c";
    cin>>a>>b>>c;
    root1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b - 4*a*c))/(2*a);
    cout<<"Roots of the Quadratic Equation are "<< root1 << " and "<< root2;
    return 0;

}