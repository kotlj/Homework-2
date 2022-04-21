#include <iostream>
using namespace std;

int main()
{
    cout << "Task 1\n";
    int num_0;
    int num_1;
    int num_2;
    cout << "input first number:";
    cin >> num_0;
    
    cout << "\ninput second number:";
    cin >> num_1;

    cout << "\ninput third number";
    cin >> num_2;

    cout << "\nmiddle-arifmetic: " << (num_0 + num_1 + num_2) / 3;

    cout << "\nTask 2 \ninput grivns number: ";
    double grivna;
    cin >> grivna;
    cout << "\nDolars: " << grivna / 32.17 << "\nEuro: " << grivna / 34.73 << "\nBitCoin: " << grivna / 1219856.96;
    
    cout << "\nTask 3\ninput Km: ";
    double distance;
    cin >> distance;
    cout << "\nGround mille: " << distance * 1.609344 << "\nSea mille: " << distance * 1.852;


}