
#include<iostream>
#include</usr/include/limits.h>
using namespace std;

int main(){

    unsigned long int cents = 0;
    
    unsigned long int dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;

    cout << "Make sure that you enter less than " << ULONG_MAX << " as that's the biggest int\n";
    
    cout << "Enter total cents: \b";   
    cin >> cents;

    cout << "you have " << cents << " cents\n";

    // convert into dollars using
    // +,-,/,*,%
    
    dollars = cents/100;
    cout << dollars << " dollars\n";
    cents = cents%100;
    
    quarters = cents/25;
    cout << quarters << " quarters\n";
    cents = cents%25;

    dimes = cents/10;
    cout << dimes << " dimes\n";
    cents = cents%10;

    nickels = cents/5;
    cout << nickels << " nickels\n";
    cents = cents%5;

    cout << cents << " \n";

    return 0;
}
