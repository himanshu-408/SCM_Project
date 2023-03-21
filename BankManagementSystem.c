#include<stdio.h>

struct customer
{
    char name[50];
    int account_number;
    float balance;
};
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
}

void withdraw(struct customer *customers, int count)
{
    int account_number;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &account_number);
    for (int i = 0; i < count; i++)
    {
        if (customers[i].account_number == account_number)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (customers[i].balance >= amount)
            {
                customers[i].balance -= amount;
                printf("Withdrawal successful! New balance is %.2f\n", customers[i].balance);
                return;
            }
            else
            {
                printf("Insufficient balance.\n");
                return;
            }
        }
    }
    printf("Customer not found.\n");
}



int main(){

    return 0;
}