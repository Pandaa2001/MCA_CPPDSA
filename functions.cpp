#include <iostream>
using namespace std;

int add(){
        int num1, num2,sum;
        cout<<"Numbers are:";
        cin>>num1>>num2;
        sum = num1 + num2;
        cout<<"Sum:"<<sum;
        return sum;
    }

int main(){
    add();
}

//defining a function is neccessary before main and you can declare the function afterwards too.

// default parameter ---  void number(int num = 5){
//cout<<num;
//}
//int main(){
//number()
//}