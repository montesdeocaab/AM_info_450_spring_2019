#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int array[10];
    int i;
    float sum=0.0;
    float mean = 0.0;
    float stdDev = 0.0;
    float calcSD = 0.0;
    
    cout<<"Please enter 10 numbers, hitting enter after each one: " << endl;
    for(int i=0; i<10; i++)
        cin>>array[i];
    
    for(i=0; i<10; ++i)
    {
        sum = array[i];
        
        mean = sum/10;
    
        stdDev = pow(array[i] - mean, 2);

        calcSD = sqrt(stdDev/10);
    }
    
    cout << "Here is the standard deviation of the numbers entered: " << calcSD << endl;
    
    return 0;
}
