#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    char str[255];
    ifstream in;
    in.open("output.txt");
    
    while(in) {
        in.getline(str, 255);
        cout << "LINE:*" << str << "*" << endl;
    }
    return 0;
}
