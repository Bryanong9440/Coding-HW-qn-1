int main()
{
    float number1;
    printf("Please enter a number: \n");
    scanf("%f", &number1);
    char operation;
    printf("Please enter an operation: \n");
    scanf(" %c", &operation);
    float number2;
    printf("Please enter a number: \n");
    scanf("%f", &number2);
    float answer; 
    if(operation == '+'){
        answer = number1 + number2;
        printf("Your result is: %.1f", answer);
    }
    else if(operation == '-'){
        answer = number1 - number2;
        printf("Your result is: %.1f", answer);
    }
    else if(operation == '*'){
        answer = number1 * number2;
        printf("Your result is: %.1f", answer);
    }
    else if(operation == '/'){
        answer = number1 / number2;
        printf("Your result is: %.1f", answer);
    }
    else printf("Sorry one of your inputs seem to be wrong!");
}
