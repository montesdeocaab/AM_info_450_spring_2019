#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int square;
    
    while (n > 0)
    {
    cout <<"Please enter a positive value:" << endl;
    cin >> n;
    
    if (n > 0){
        square = n * n;
        cout <<"The square of " << n << " is: " << square << endl;
    }
    }
    return 0;
}
