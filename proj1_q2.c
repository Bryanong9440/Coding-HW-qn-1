#include <stdio.h>
int main()
{
    int a;
    printf("Please enter an integer: ");
    scanf("%i", &a);
    int b = 2;
    while(a % b != 0){
        if (a > b){
        b++;    
        }
        if (a == b){
            printf("%i is a prime number", a);
        }
    }
    if(a > b){
        printf("%i is not a prime number", a);
    }
}
