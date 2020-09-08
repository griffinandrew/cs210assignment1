/**
 * Assignment #1: Expressions and selection statements.
 * This program prints the CS 210 schedule for a given date in the Fall'20 Semester.
 **/

#include <stdio.h>

int main() {
    int month, day;

    printf("Enter date (mm/dd): ");
    scanf("%d/%d", &month, &day); //scan for month and day
        if ((day > 31 || day < 1) || (month > 12 || month < 1) ){ //check to see if valid 
            return 1; 
        }
        if (month == 2 && day > 28) { //is valid in feb
            return 1; 
        }
        switch(month){ //switch statement to send to certain month
            case 1 : printf("No class");
            break;
            case 2 : printf("No class");
            break;
            case 3 : printf("No class");
            break;
            case 4 : printf("No class");
            break;
            case 5 : printf("No class");
            break;
            case 6 : printf("No class");
            break;
            case 7 : printf("No class");
            break;
            case 8 : printf("No class");
            break;
            case 9 : if(day == 3 || day == 8 || day == 10 || day == 15 || day == 17 || day == 22 || day == 24 || day == 29){
                    printf("Lecture.");
                }
                if (day == 14 || day == 21 || day ==28){
                    printf("Discussion");
                }
                if (day == 7){
                    printf("Labor Day.");
                }
            break;
            case 10 : 
            break;
            case 11 : 
            break;
            case 12: 
            break;
        }

    // ADD Your code.  Be sure your output matches exactly.  
    // Check using reference binary
    // new comment

    return 0;
}
