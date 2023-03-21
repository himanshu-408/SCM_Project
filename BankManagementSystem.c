#include<stdio.h>

struct customer
{
    char name[50];
    int account_number;
    float balance;
};
<<<<<<< HEAD
void add_customer(struct customer *customers, int *count)
{
    printf("Enter customer name: ");
    scanf("%s", customers[*count].name);
    printf("Enter account number: ");
    scanf("%d", &customers[*count].account_number);
    printf("Enter initial balance: ");
    scanf("%f", &customers[*count].balance);
    (*count)++;
    printf("Customer added successfully!\n");
=======

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
>>>>>>> 8cbac77c19b15a0baaf3fb1396d938dd0c659249
}

    
    
void check_balance(struct customer *customers, int count)
{
    int account_number;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    for (int i = 0; i < count; i++)
    {
        if (customers[i].account_number == account_number)
        {
            printf("Account balance is %.2f\n", customers[i].balance);
            return;
        }
    }
    printf("Customer not found.\n");
}
    
    
    
    


int main(){

    return 0;
}
