#include <iostream>
using namespace std;

int main ()
{
    // variables
    int evenSum =  0;
    int oddSum = 0;
    int numCount = 0;
    int numbers = 0;

    // inputs
    cout << "Please enter 10 integers:" << endl;
    for (numCount = 0; numCount < 10; numCount++)
    {
        cin >> numbers;
        if (numbers % 2 == 0)
        {
            evenSum = evenSum + numbers;
        }
        else
        {
            oddSum = oddSum + numbers;
        }
    }

    // outputs
    cout << "Even sum: " << evenSum << endl;
    cout << "Odd sum: " << oddSum << endl;

    return 0;
}
