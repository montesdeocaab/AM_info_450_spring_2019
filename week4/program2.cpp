#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    int i;
    char name[30][20];
    
    for(t=0; t<30; t++)
    {
        cout << "Enter the student's name: ";
        gets(name[t]);
        if(!name[t][0]) break; // I was having a lot of trouble displaying the names
        }
    }
    
    for (i=0; i<t; i++){
        cout << name[i] << endl;
    }
       
    return 0;
}
