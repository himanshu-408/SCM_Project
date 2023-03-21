#include<stdio.h>

struct customer
{
    char name[50];
    int account_number;
    float balance;
};

void deposit(struct customer *customers, int count)
{
    int account_number;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    for (int i = 0; i < count; i++)
    {
        if (customers[i].account_number == account_number)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            customers[i].balance += amount;
            printf("Deposit successful! New balance is %.2f\n", customers[i].balance);
            return;
        }
    }
    printf("Customer not found.\n");
}


int main(){

    return 0;
}