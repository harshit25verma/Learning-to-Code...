#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? "); //To get answer from the User
    printf("Hello, %s\n", name); //To provide answer as well as the text Hello
}