#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a, b, choice;

     printf(" # Here is your mathematical terms:\n");
     printf("  1. Sum\n  2. Subtraction\n  3. Multiplication\n  4. Divided\n");
     printf("\n");
     printf("Enter your choice: ");
     scanf("%d", &choice);

     printf("Enter number a = ");
     scanf("%d", &a);
     printf("Enter number b = ");
     scanf("%d", &b);



     switch(choice)
     {
         case 1: printf("Answer is %d + %d = %d\n", a , b, (a+b));
                 break;
         case 2: printf("Answer is %d - %d = %d", a,b,(a-b));
                 break;
         case 3: printf("Answer is %d * %d = %d", a,b, (a*b));
                 break;
         case 4: printf("Answer is %d / %d = %d", a,b, (a/b));
                 break;
     }
    return 0;
}
