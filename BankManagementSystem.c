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


int main(){

    return 0;
}