#include <iostream>
using namespace std;

typedef int Numbers;
int main(){
    Numbers a,b,c;
    cout<<"Enter Three Numbers"<<endl;
    cout<<"Number 1 = ";
    cin<<a;
    cout<<"Number 2 = ";
    cin<<b;
    cout<<"Number 3 = ";
    cin<<c;
    if((a>b) && (a>c)){
        cout<<"Largest Number is = "<< a<<endl;
    }
    else{
        if(b>c){
            cout<<"Largest Number is = "<<b<<endl;
        }
        else{
            cout<<"Largest Number is = "<<c<<endl;
        }
    }
    return 0;
    
}