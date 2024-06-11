#include <iostream>
using namespace std;

int factorial(int num){
    
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r){
    int numerator = factorial(n);
    int diff = n - r;
    int denominator = factorial(r) * factorial(diff);

    int result = numerator / denominator ;
    cout<<result;

}

int main(){
    int n,r;
    cin>>n>>r;
    ncr(n,r);
}
