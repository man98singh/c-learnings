#include<iostream>
using namespace std;

int main(){

    float fahrenheit;
    cin>>fahrenheit;
    float celsius = (5.0/9.0)*(fahrenheit-32);
    cout<<fahrenheit<<"F = "<<celsius<<"C"<<endl;
    return 0;
}