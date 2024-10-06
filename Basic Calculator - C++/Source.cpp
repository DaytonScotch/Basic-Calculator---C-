#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Declare float for the two numbers, integer for user choice
    float num_1, num_2;
    int choice = 0;

    do  //program repeats until 5 is chosen
    {

        //Present the program menu to the user
        cout << "Which arithmetic operation would you like to perform:\n";
        cout << "Press 1 for Addition \n";
        cout << "Press 2 for Subtraction\n";
        cout << "Press 3 for Multiplication\n";
        cout << "Press 4 for Division\n";
        cout << "Press 5 to Exit\n";
        cin >> choice;

        //Program will only accept options 1-5
        if (choice < 0 || choice > 5) {
            cout << "Please enter a valid menu option:";
            cin >> choice;
        }

        //Exits program if 5 is chosen
        if (choice == 5) {
            return 0;
        }

        //get the numbers from the user
        cout << "Now Enter Two Numbers\n";
        cin >> num_1 >> num_2;

        switch (choice)

        {
        case 1:
            cout << "The Addition result is: " << num_1 + num_2 << endl;
            break;

        case 2:
            cout << "The Subtraction result is: " << num_1 - num_2 << endl;
            break;

        case 3:
            cout << "The Multiplication result is: " << num_1 * num_2 << endl;
            break;

        case 4:
            //Will not accept 0 for either number
            if (num_1 == 0 || num_2 == 0) {
                cout << "Can not divide by 0!";
            }
            cout << "The Division result is: " << num_1 / num_2 << endl;
            break;

        default: //not used
            break;
        }

    } while (choice != 5);

    return 0;
}