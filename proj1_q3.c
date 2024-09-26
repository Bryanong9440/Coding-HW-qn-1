#include <stdio.h>

int main()
{
    char input;
    printf("The first day of the month is: \n");
    scanf(" %c", &input);
    if(input != 'M' && input != 'T' && input != 'W' && input != 'H' && input != 'F' && input != 'S' && input != 'U'){
        printf("Sorry, your input is invalid!");
        return 0;
    }
    int day_number;
    int date;
    printf("The day you are asking about is: \n");
    scanf("%i", &date);
    }
    switch (input) {
        case 'M':
            day_number = 0; break;
        case 'T':
            day_number = 1; break;
        case 'W':
            day_number = 2; break;
        case 'H':
            day_number = 3; break;
        case 'F':
            day_number = 4; break;
        case 'S':
            day_number = 5; break;
        case 'U':
            day_number = 6; break;
     }
    int leftover;
    leftover = (date - 1) % 7;
    day_number = day_number + leftover;
    day_number = day_number % 7;
    const char* day_of_week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    if(date == 1 || date == 21 || date == 31){
        printf("The %ist is a %s.", date, day_of_week[day_number]);
    }else if(date == 2 || date == 22){
        printf("The %ind is a %s.", date, day_of_week[day_number]);
    }else if(date == 3 || date == 23){
        printf("The %ird is a %s.", date, day_of_week[day_number]);
    }else{
        printf("The %ith is a %s.", date, day_of_week[day_number]);
        }
}
