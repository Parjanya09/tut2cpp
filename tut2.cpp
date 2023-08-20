#include<iostream>
using namespace std;

int main (){
    float x, y, sum, sub,pro, div; 
    int op;
    cout << " please enter the first number: ";
    cin >> x;
    cout << " please enter the second number: ";
    cin >> y;
    cout << " please select one of the following operation: 1 for summation, 2 for substraction, 3 for product and 4 for division ";
    cin >> op;
    sum = x+y;
    sub = x-y;
    pro = x*y;
    div = x/y;
    if (op == 1){
    cout << " || the sum is: || "<< sum <<"||";
    }
    if (op == 2){
    cout << " || the substraction is: ||" << sub <<"|| ";
    }
    if (op == 3){ 
    cout << " || the product is: || " << pro <<"||";
    }
    if (op==4){
    cout <<" || the division is: || " << div<<"||";
}
}