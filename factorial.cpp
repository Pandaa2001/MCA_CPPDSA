#include <iostream>
using namespace std;

void factorial(){
    int n;
    cout<<"Enter the number whose factorial is needed: ";
    cin>>n;
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact;
}

int main(){
    factorial();
}