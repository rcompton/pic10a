
#include<iostream>
#include<string>
using namespace std;

int main(){

    string letters;

    cout << "Type some letters: ";
    getline(cin,letters);

    cout << "you typed " << letters.length() << " letters\n";

    int integr = 10;
    int interg2 = 20;

    cout << (double) integr/interg2 << "\n";
    cout << static_cast<double> (integr/interg2) << "\n";

    return 0;
}
