#include<stdio.h>
int main()
{
    int n1 = 0 , n2 = 1, n3, i, number;
    printf("Enter the number of elements:");
    // user input
    scanf("%d", &number);
    // print first two numbers
    printf("\n%d %d", n1, n2);
    // start after first two numbers which are obviously 0 and 1
    for(i=2; i<number; ++i)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}