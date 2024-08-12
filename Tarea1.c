#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    printf("The first number is: \n"); 
    scanf("%d", &num1);
    
    printf("The second number is: \n"); 
    scanf("%d", &num2);
    
    int result = num1 + num2;
    
    printf("The result is: %d", result);

    return 0;
}
