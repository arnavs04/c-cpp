#include <iostream>

using namespace std;

int main()
{
    float temp_F;
    cout << "What is the temperature in fahrenheit? ";
    cin >> temp_F;
    float temp_C = (temp_F - 32) * 5 / 9;
    cout << "The temperature is now " << temp_C << " degrees in celsius.";
    return 0;
}