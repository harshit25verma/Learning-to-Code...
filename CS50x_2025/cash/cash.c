#include <stdio.h>
#include <cs50.h>

int main(void)
{
 //   25 , 10 , 5 , 1
int amount;
    do
    {
        amount = get_int("Change owed: ");
    }
    while(amount>0 || amount<100);
}
