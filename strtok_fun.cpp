// Implementing of strtok() function in C++

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[] = "Remember me  when you  look     at the moon";
    char delim[] = " ";

    printf("The tokens are: ");
    char *token = strtok(str, delim);

    while(token)
    {
        cout << token << " ";
        token = strtok(NULL, delim);
    }

    return 0;
}
