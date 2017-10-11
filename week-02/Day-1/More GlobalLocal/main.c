#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;
int guys_money;

int can_they_buy_a_new_tv()
{
    int tv_price = 6950;
    guys_money = tom_money + mark_money + jerry_money;
    int extra_money = guys_money - tv_price;

    if (extra_money >= 0){
        printf("The guys can buy the TV and they still have $%d.", extra_money);
    }
    else {
        printf("They cannot buy the TV, they are short of $%d.", -extra_money);
    }
    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it
}

int can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;
    int bill = milk + chocolate + flour + egg + sugar + salt + oven_shape + cream;
    //int guys_money = tom_money + mark_money + jerry_money;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
    if (guys_money >= bill){
        printf("\nThey can buy everything. The shared cost is $%d.", bill/3);
    }
    else {
      printf("They don't have enough money to pay the bill");
    }

}


int can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;
    int bill = milk + egg + salt + ham + onion + spice;
    //int guys_money = tom_money + mark_money + jerry_money;

    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
    if (guys_money >= bill){
        printf("\nThey can buy everything. The shared cost is $%d.\n", bill/3);
    }
    else {
      printf("They don't have enough money to pay the bill");
    }
    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
}

//is there any local or global variables we did not use well?
//are we using functions correctly?

int main()
{
    can_they_buy_a_new_tv();
    can_they_make_a_cake();
    can_they_make_ham_and_eggs();
    printf("The guys money is declared globally, calculated and used locally.\n");

	return 0;

}
