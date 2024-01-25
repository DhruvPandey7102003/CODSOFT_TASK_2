// develop a calculator program that performs basic arithmetic operations such as addition,substraction
// multiplication and division.allow the user to input two numbers and choose an operation to perform.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float Num_1, Num_2, Addition, Substraction, Multiplication, Division;

    while (true)
    {
        cout<<"Enter First Number"<<endl;
        cin>>Num_1;
        cout<<"Enter Second Number"<<endl;
        cin>>Num_2;
        cout<<endl;
        cout << "Press 1: for Addition" << endl;
        cout << "Press 2: for Substraction" << endl;
        cout << "Press 3: for Multiplication" << endl;
        cout << "Press 4: for Division" << endl;

        
        int Choice;
        cin>>Choice;
        
        switch (Choice)

        {
        case 1:
            cout<<"addition is ";
            Addition = Num_1 + Num_2;
            cout << Addition<<endl;
            break;

        case 2:
            cout<<"substraction is ";
            cout<<endl;
            Substraction = Num_1 - Num_2;
            cout << Substraction<<endl;
            break;

        case 3:
            cout<<"multiplication is ";
            cout<<endl;
            Multiplication = Num_1 * Num_2;
            cout << Multiplication<<endl;
            break;

        case 4:
            cout<<"division is ";
            cout<<endl;
            Division = Num_1 / Num_2;
            cout << Division<<endl;
            break;

        default:
            cout << "Invalid Input";
            break;
        }
    }
    return 0;
}
