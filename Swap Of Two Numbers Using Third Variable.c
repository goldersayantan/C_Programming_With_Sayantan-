// Swapping Of Two Numbers Using Third Variable...
# include <stdio.h>
int main()    {
    int num1, num2, num3;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("After Swapping\n");
    printf("The first number is:%d\n", num1);
    printf("The second number is:%d", num2);
 return 0;
 }