#include <iostream>

using namespace std;

int main()
{
    int totalExpenses = 0, entry;
    while (1)
    {
        cout << "Enter expense entry: ";
        cin >> entry;
        totalExpenses += entry;
        cout << "Your expenses currently stand at " << totalExpenses << endl; 
    }
    return 0;
}