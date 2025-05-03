#include <stdio.h>
#include <cs50.h>

int main(void)
{
 //   25 , 10 , 5 , 1

 //Get the amount from the User b/w 1-100
    int amount;
    do
    {
        amount = get_int("Change owed: ");
    }
    while(amount<0 || amount>100);

//Divide the amount first with 25
int a = amount/25;
//Get the number of coins

//Divide the amount second with 10
int b = amount/10;
//Get the number of coins

//Divide the amount third with 5
int c = amount/5;
//Get the number of coins

//Divide the amount fourht with 1
int d = amount/1;
//Get the number of coins

//Add the the number of coins
int sum = a+b+c+d ;
//Show the number of coins
printf("%i", int sum);

}
