#include <iostream>
using namespace std;

int main()
{
    int year;
    char again = 'y';
    
    cout << "This program will verify whether" << endl;
    cout << "a year is a leap year or not." << endl;
    
    while(again == 'y' || again == 'Y')
    {
        cout << "Please enter a year:" << endl;
        cin >> year;
        
        if(year % 4 == 0)
        {
            if(year % 100 == 0)
            {
                if(year % 400 == 0)
                {
                    cout << year << " is a leap year." << endl;
                }else{
                    cout << year << " is not a leap year." << endl;
                }
            }else{
                    cout << year << " is a leap year." << endl;
                }
        }else{
            cout << year << " is not a leap year." << endl;
        }
    }
    return 0;
}
