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
            ifstream file(argv[arg]);   // Open the file found at the current index of argument vector

            if (!file)  // If file doesnt exist num lines is -1
            {
                n = -1;
            }   
            while(getline(file, temp))  // If a line is present increment n
            {
                n++;
            }
            cout << n << '\n';
    }

    exit(0); 
}
