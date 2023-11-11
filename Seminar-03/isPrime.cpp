#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned number = 0;
    cin >> number;

    bool isPrime = true;
    if(number > 1)
    {
        double squareOfNumber = sqrt(number);

        for (int i = 2; i <= squareOfNumber; i++)
        {
            if(number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    else
    {
        isPrime = false;
    }

    if(isPrime)
    { 
        cout << "The number is prime" << endl; 
    }
    else        
    { 
        cout << "The number is not prime" << endl;
    }    
}