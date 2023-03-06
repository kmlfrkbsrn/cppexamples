#include <iostream>
using namespace std;


int Multiplication(float x, float y){
    return x*y;
}
int Substruction(float x, float y){
    return x-y;
}   
int Adding(float x, float y){
    return x+y;
}
int Dividing(float x, float y){
    return x/y;
}

int main(){
    float a,b,sol;
    int operation;
    cout << "Welcome my Calculator...\nChoose operation:\n1. Multiplication\n2. Division\n3. Add\n4. Substruction" << endl;
    cin >> operation;
    cout << "Enter first number"<< endl;
    cin >> a;
    cout << "Enter second number"<< endl;
    cin >> b;

    if (operation == 1){ 
        sol = Multiplication(a,b);
        cout << "Your solution is: "<< sol <<endl;}
    else if (operation == 3){
        sol = Adding(a,b);
        cout << "Your solution is: "<< sol <<endl;}
    else if (operation == 2){
        sol = Dividing(a,b);
        cout << "Your solution is: "<< sol <<endl;}
    else if (operation == 4){
        sol = Substruction(a,b);
        cout << "Your solution is: "<< sol <<endl;}
    else 
        {cout<<"Wrong operation choice...";}
    
}


//I learnt int functions, else-if statements, float and integer with this example 