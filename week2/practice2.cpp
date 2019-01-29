#include <iostream>
using namespace std;
int main ()
{
    int num;
    int i;
    bool isPrime = true;
    char again = 'y';
    
    cout << "This program will validate whether" << endl;
    cout << "a number is prime or not." << endl;
    
    while(again == 'y' || again == 'Y')
    {
    cout << "Please enter a positive number: ";
    cin >> num;
    if (num == 0)
    {
        cout << "0 is not a prime number."<< endl;
        break;
        }
    if (num < 0)
    {
        cout << "Negative numbers are not prime numbers." << endl;
        break;
    }
    if (num == 1)
    {
        isPrime = false;
    }
        
        for(i = 2; i <= num / 2; ++i)
        {
            if(num % i == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
            cout << num << " is a prime number." << endl;
        else
            cout << num <<" is not a prime number." << endl;
        
        isPrime = true;
}
    return 0;
}
