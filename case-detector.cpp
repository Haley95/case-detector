#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
using namespace std;
int main(int argc, char* argv[])
{ 
if (argv[1][0] >= 'a' || argv[1][0] <= 'z')
{
    cout<< "This is a lower case letter." << endl;
    return 1;
    }
else if (argv[1][0] >= 'A' || argv[1][0] <= 'Z')
{
    cout<< "This is an upper case letter." << endl;
    return -1;
}
else 
{
    cout<< "Please only input letters for this program." << endl;
    return 0;
}
}