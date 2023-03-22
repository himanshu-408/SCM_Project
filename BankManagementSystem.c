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



int main()
{
    struct customer customers[100];
    int count = 0;
    int choice;
    do
    {
        printf("1. Add customer\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check balance\n");
        printf("5. View customers\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_customer(customers, &count);
            break;
        case 2:
            deposit(customers, count);
            break;
        case 3:
            withdraw(customers, count);
            break;
        case 4:
            check_balance(customers, count);
            break;
        case 5:
            view_customers(customers, count);
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 6);
    return 0;
}
