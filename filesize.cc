#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main( int argc, char* argv[] )
{
    string temp;
    cout << "program: " << argv[0] << '\n';
    for (int arg = 1; arg < argc; ++arg)
    {
            int n = 0;
            cout << " " << argv[arg] << ": ";
            ifstream file(argv[arg]);
            if (!file)
            {
                n = -1;
            }   
            while(getline(file, temp))
            {
                n++;
            }
            cout << n << '\n';
    }
    exit(0); // this means that the program executed correctly!
}
