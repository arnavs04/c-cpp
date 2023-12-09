#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int magic = rand(), guess;
    cout << "You have five chances to guess the correct number" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        if (magic == guess)
        {
            cout << "Congrats!!! You guessed the right number!" << endl;
            break;
        }
        else
        {
            cout << "Sorry! That was the wrong number. Try again!" << endl;
        }
    }
    
    cout << "The right number is " << magic;
    return 0;
}