#include <iostream>
using namespace std;

int add(int num1 = 4, int num2 = 9){
        return num1 + num2;
    }

int main(){
    int sum = add();
    cout<<sum;
}

//defining a function is neccessary before main and you can declare the function afterwards too.

// default parameter ---  void number(int num = 5){
//cout<<num;
//}
//int main(){
//number()
//}

//default parameter starts from right and goes to left
//string print(string name, int age, int height = 5) -- correct
//string print(string name, int age = 23, int height) -- wrong