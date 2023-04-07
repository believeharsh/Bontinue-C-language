#include<stdio.h>
int main()
{
    int grs,bs; // grs is gross salary, bs is basic salary 
    int HRA, DA; // HRA is hiring amount , DA is direct amount 
    printf(" enter your Basic seleary :> \n");
    scanf("%d",&bs);
    HRA = (bs*23)/100;
    DA = (bs*26)/100;
    grs = HRA + DA + bs;  
    printf("Your gross salary is:>%d\n",grs);
    return 0; 


}