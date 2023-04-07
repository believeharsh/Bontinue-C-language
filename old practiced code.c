/*CONTINUE STATEMENT */
#include<stdio.h>
int main () {
	printf("welcome sir/ma'am\n");
	int i, age;
	for(i=0;i<10; i++)  {
		printf(":%d\n",i);
		printf("enter your age\n");
		scanf("%d",&age);
		if(age>10){
			continue;
		}
		printf("you're not eligible\n");
		}
        return 0;}
	/* GOTO STATEMENT */	

// #include <stdio.h>

// int main()
// {
    
//     int num;
//     for(int i = 0; i < 8; i++)
//     {
//         printf("%d\n", i);
//         for(int j = 0; j < 8; j++)
//         {
//             printf("Enter the number. enter 0 to exit\n");
//             scanf("%d", &num);
//             if(num==0){
//                 goto end;
//             }
//         }
        
//     }
//     end:
    
/* TYPECASTING*/
//     return 0;
// }
// #include<stdio.h>
// // typecasting syntax 
// // type value ;
// int main()  {
// 	int a = 3;
// 	float b =  (int)54/5;
// 	printf(" the value of a is %f\n", b);
// 	return 0;

// }
#include <stdio.h>

main() {

   int sum = 17, count = 5;
   double mean;

   mean = (int) sum / count;
   printf("Value of mean : %f\n", mean );
   return 0;
}
// * EXIT() FUNCTION *
#include<stdio.h>
#include<stdlib.h>
void main(){
   char ch;
   printf("E: Exit");
   printf("L: Lunch");
   printf("D: Dinner");
   printf("E: Exit");
   printf("Enter your choice:");
   do{
      ch = getchar();
      switch (ch){
         case 'B' :
         printf ("time for breakfast");
         break;
         case 'L' :
         printf ("time for lunch");
         break;
         case 'D' :
         printf ("time for dinner");
         break;
         case 'E' :
         exit(0); /* return to operating system */
      }
   } while (ch != 'B' && ch != 'L' && ch != 'D');

   printf("HARSH DAHIYA WENT TO COLLEGE TODAY");
   
}
/* print table with the help of loops*/
#include<stdio.h>
int main() {
     int i,num;
    printf("enter the number for the multiplication you want");
    scanf("%d\n",&num); 
   
    printf("the entered number %d is follws this table ");
    for(i=0;i<11;i++ )
    {
        printf("%d x %d =%d\n",num,i,num*i);
    }
    return 0;
}
/* array example */
// #include<stdio.h>

// int main()
// {

// 	//Two dimensional array
// 	int Matrice[3][3]; 
// 	printf("This Program will print no. from 1-9 in matrice form : \n\n");
// 	for (int i=0;i<3;i++)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("Enter no. (1-9) : ");
// 			scanf("%d", &Matrice[i][j]);
// 		}
// 	}
// 	printf("\n\n\n");
// 	for (int i=0;i<3;i++)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("%d\t", Matrice[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	printf("\n\n\n So that's the matrice form of no from 1-9");
// 	return 0;
// }
#include<stdio.h>
int main()
{
	//One dimensional array
	int marks[10], sum=0;
	printf("Enter marks of 10 students : \n\n");
	for (int i=0;i<=9;i++)
	{
	printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
	sum += marks[i];
	}

	int average = sum/10;
	printf("\nThe average marks of 10 students are %d", average);
	return 0;
}
// #include<stdio.h>

// int main()
// {

// 	//Two dimensional array
// 	int Matrice[3][3]; 
// 	printf("This Program will print no. from 1-9 in matrice form : \n\n");
// 	for (int i=0;i<3;i++)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("Enter no. (1-9) : ");
// 			scanf("%d", &Matrice[i][j]);
// 		}
// 	}
// 	printf("\n\n\n");
// 	for (int i=0;i<3;i++)
// 	{
// 		for (int j=0;j<3;j++)
// 		{
// 			printf("%d\t", Matrice[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	printf("\n\n\n So that's the matrice form of no from 1-9");
// 	return 0;
// }
#include<stdio.h>
/* pointer and array arithimetic */ 

/* pointer and array arithimetic */ 

int main()
{
    // int a = 34;
    // int*ptra = &a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d",ptra-2);
    // return 0;
    int arr [] = {10,20,30,40,50,60};
    printf("value at possition 3 of the aary is %d\n",arr[3]);
     printf("the address of first  element of the array is %d\n",&arr[0]);
     printf("the address of first element of the array is %d\n",arr);
     printf("the address of secopnd element of the array is %d\n",&arr[1]);
     printf("the address of second  element of the array is %d\n",arr+1);

     printf("\n\n");


     printf("the value at  address of first  element of the array is %d\n",*(&arr[0]));
     printf("the value at  address of first  element of the array is %d\n",*(arr));
     printf("the address of secopnd element of the array is %d\n",*(&arr[1]));
     printf("the address of second  element of the array is %d\n",*(arr+1));

    
    


}
int main()
{
    // int a = 34;
    // int*ptra = &a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d",ptra-2);
    // return 0;
    int arr [] = {10,20,30,40,50,60};
    printf("value at possition 3 of the aary is %d\n",arr[3]);
     printf("the address of first  element of the array is %d\n",&arr[0]);
     printf("the address of first element of the array is %d\n",arr);
     printf("the address of secopnd element of the array is %d\n",&arr[1]);
     printf("the address of second  element of the array is %d\n",arr+1);

     printf("\n\n");


     printf("the value at  address of first  element of the array is %d\n",*(&arr[0]));
     printf("the value at  address of first  element of the array is %d\n",*(arr));
     printf("the address of secopnd element of the array is %d\n",*(&arr[1]));
     printf("the address of second  element of the array is %d\n",*(arr+1));

    
    


}
int main()
{
	//One dimensional array
	int marks[10], sum=0;
	printf("Enter marks of 10 students : \n\n");
	for (int i=0;i<=9;i++)
	{
	printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
	sum += marks[i];
	}

	int average = sum/10;
	printf("\nThe average marks of 10 students are %d", average);
	return 0;
}

#include<stdio.h>
void ope( int *x,int *y)
{
     (*x) += 3;
     (*y) -= 2;
     return ; 
}
     
     
int main()
{
   int a =4 ; int b = 3;
   printf("a is = %d and b is = %d\n",a,b);
   ope(&a,&b);
   printf(" after opeartion the value of a  is %d\n",a);
   printf(" after opeartion the value of b  is %d\n",b);
   
   return 0;
}
#include <stdio.h>

int factorial(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}
// #include <stdio.h>
// 
#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{
    int arr[2][2] = {{2, 13}, {9, 3}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}
/* pointer and array arithimetic */ 
#include<stdio.h>
int main()
{
    // int a = 34;
    // int*ptra = &a;
    // printf("%d\n",ptra);
    // ptra++;
    // printf("%d\n",ptra);
    // printf("%d",ptra-2);
    // return 0;
    int arr [] = {10,20,30,40,50,60};
    printf("value at possition 3 of the aary is %d\n",arr[3]);
     printf("the address of first  element of the array is %d\n",&arr[0]);
     printf("the address of first element of the array is %d\n",arr);
     printf("the address of secopnd element of the array is %d\n",&arr[1]);
     printf("the address of second  element of the array is %d\n",arr+1);

     printf("\n\n");


     printf("the value at  address of first  element of the array is %d\n",*(&arr[0]));
     printf("the value at  address of first  element of the array is %d\n",*(arr));
     printf("the address of secopnd element of the array is %d\n",*(&arr[1]));
     printf("the address of second  element of the array is %d\n",*(arr+1));

    
    


}
/* uses of structures */
#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} harry, ravi, shubham;
// struct Student harry, ravi, shubham;

void print()
{
    printf("%s", harry.name);
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'o';

    strcpy(harry.name, "Harry Potter student of the year");
    strcpy(shubham.name, "Shubham Kumar");
    strcpy(ravi.name, "ravi dahiya ");
    // now we are goinf to print all the terms :
    printf("\n harry id is = %d", harry.id);
    printf("\n ravi id is = %d", ravi.id);
    printf("\n shubham id is = %d", shubham.id);
    printf("\n harry marks is = %d", harry.marks);
    printf("\n ravi marks  is = %d", ravi.marks);
    printf("\n shubham marks  is = %d", shubham.marks);
    printf("\n harry favorute character is = %c", harry.fav_char);
    printf("\n ravi favorute character is = %c", ravi.fav_char);
    printf("\n shubham favorute character is = %c", shubham.fav_char);
    printf("\nthe actual name of harry is : %s  ", harry.name);
    printf("\nthe actual name of shubham  is : %s ", shubham.name);
    printf("\nthe actual name of ravi is : %s ", ravi.name);

    // printf("\n");
    // print();
    // Quick Quiz
    // print all the information of a given student

    return 0;
}
#include <stdio.h>
#include <stdlib.h> //

int main()
{
    // Use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    free(ptr);

    //Use of calloc
    // int *ptr;
    // // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)calloc(n ,  sizeof(int));
     ptr = (int *)malloc(15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        printf("The value at %d of this array is %d\n",i, ptr[i]);
    }

    // Use of realloc
    // printf("Enter the size of the new array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)realloc(ptr, n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the new value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The new value at %d of this array is %d\n", i, ptr[i]);
    // }

    // free(ptr);

    return 0;
}


