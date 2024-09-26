#include <stdio.h>
int main()
{
    int a;
    printf("Please enter an integer: \n");
    scanf("%i", &a);
    int b = 2;
    if(a <= 1){
        printf("%i is not a prime number\n", a);
    }
    if(a == 2){
        printf("%i is a prime number\n", a);
    }
    while(a % b != 0 && a > 2){
        if (a > b){
        b++;    
        }
        if (a == b){
            printf("%i is a prime number\n", a);
        }
    }
    if(a > b){
        printf("%i is not a prime number\n", a);
    }
}
