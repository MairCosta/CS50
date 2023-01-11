#include <stdio.h>
#include <cs50.h>

int main()
{
    string name = get_string("What's your name?\n"); //string data type from the cs50 library
    printf("hello, %s\n", name);
}