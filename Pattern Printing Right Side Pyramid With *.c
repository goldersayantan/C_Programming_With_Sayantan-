// Pattern Printing Right Side Pyramid With *...
# include <stdio.h>
int main()    {
    int line;
    printf("Enter the number of lines: ");
    scanf("%d",&line);
    for( int i=1; i<= line; i++)    {
        for( int j=(line-i); j>=1; j--)    {
        printf(" ");
        }
        for( int k=1; k<=i; k++)    {
        printf("*");
        }
        printf("\n");
    }
return 0;
}