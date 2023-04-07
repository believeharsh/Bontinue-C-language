#include <stdio.h>
int main()
{
    int itm,tot;
    int num, price, qunt, tamt;
    printf("Enter the number of item :>\n");
    scanf("%d", &num);
    printf("Enter the price of an item :>\n");
    scanf("%d", &price);
    printf("Enter the quantity of an item :>\n");
    scanf("%d", &qunt);
    // printf("Enter the total amount of an item:>\n");
    // scanf("%d", &tamt);
    tot = price*qunt;
    printf("\n");
    printf("<: information of that product :>\n");
    printf(" The number of that item is %d\n ",num);
    printf(" The price of that item is %d\n ", price);
    printf(" The quantity of that item is %d\n ",qunt);
    printf(" The total amount of that item is %d\n ",tot);
    return 0;
} 