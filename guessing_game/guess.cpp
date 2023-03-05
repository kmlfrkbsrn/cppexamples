#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    int number1, number2, tries=0;
    
    srand(time(0));
    number2 = rand() % 100 +1;
    cout<<"Welcome Guessing Game\nGive me a Number between 0-100: "<< endl;
    

do
{
    cin >> number1;
    tries++;
    if ( number1 > number2)
        cout<<"Give me smaller number:"<<endl;

    else if (number1 < number2)
        cout<<"Give me bigger number:";
    else 
        cout<<"Correct guess\nYou guessed in "<< tries <<" try\n";} while (number2 != number1);

    return 0;

}

// In this example I learned do-while and if statements in cpp