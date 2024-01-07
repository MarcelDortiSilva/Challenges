#include <stdio.h>
#include <stdlib.h>

struct Item
{
char *pitemname;
int quantity;
float price;
float amount;
};

void ReadItem (struct Item *p)
{
printf ("\nEnter the Item name:");
p->pitemname = malloc(50 * sizeof(char));

if (p->pitemname != NULL)
    {
     scanf("%49s", p->pitemname);
    }
printf ("\nEnter the quantity: ");
scanf("%d", &p->quantity);

printf("\nEnter the price: ");
scanf("%f", &p->price);

p->amount = p->price * p->quantity;

}

void PrintItem (struct Item *p)
{
    if (p != NULL)
    {
        printf("\nItem Name: %s\n", p->pitemname);
        printf("\nQuantity: %d\n", p->quantity);
        printf("\nPrice: %.2f\n", p->price);
        printf("\nTotal Amount: %.2f\n", p->amount);
    }
    else
    {
        printf("Invalid item.\n");
    }
}

int main()
{
struct Item item;

ReadItem(&item);
PrintItem(&item);
free (item.pitemname);

    return 0;
}

