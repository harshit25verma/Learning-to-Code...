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
int no_of_quarters = amount/25;
//Multiply 25 with number of coins
int remaining_Q = quarters*25;
//Get the number of coins


//Divide the amount second with 10
int no_of_tens = remaining_Q/10;
//Multiply  with number of coins
int remaining_T = tens*10;
//Get the number of coins

//Divide the amount third with 5
int no_of_fives = remaining_T/5;
//Multiply  with number of coins
int remaining_F = fives*25;
//Get the number of coins

//Divide the amount fourht with 1
int no_of_ones = remaining_F/1;
//Multiply  with number of coins
int remaining_O = ones*25;
//Get the number of coins

//Add the the number of coins
int sum = quarters+tens+fives+ones ;
//Show the number of coins
printf("%i", sum);

}
