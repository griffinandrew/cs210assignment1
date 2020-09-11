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
            case 1 : printf("No class on this day.");
            break;
            case 2 : printf("No class on this day.");
            break;
            case 3 : printf("No class on this day.");
            break;
            case 4 : printf("No class on this day.");
            break;
            case 5 : printf("No class on this day.");
            break;
            case 6 : printf("No class on this day.");
            break;
            case 7 : printf("No class on this day.");
            break;
            case 8 : printf("No class on this day.");
            break;
            case 9 : if(day == 3 || day == 8 || day == 10 || day == 15 || day == 17 || day == 22 || day == 24 || day == 29){ //checking lecture day
                    printf("Lecture.");
                    break;
                }
                if (day == 14 || day == 21 || day == 28){ //checking discussion day
                    printf("Discussion.");
                    break;
                }
                if (day == 7){ //checking for the other cases
                    printf("Labor Day.");
                    break;
                }
                printf("No class on this day.");
                break;
            case 10 : if (day == 1 || day == 8 || day == 15 || day == 20 || day == 22 || day == 27 || day == 29) { //checking lecture day
                    printf("Lecture.");
                    break;
                }
                if (day == 5 || day == 19 || day == 26 || day == 13){ //checking discussion day
                    printf("Discussion.");
                    break;
                }
                if (day == 6){ //checking for the other cases
                    printf("MIDTERM.");
                    break;
                }
                if (day == 12){ 
                    printf("Columbus Day.");
                    break;
                }
                if (day == 7){
                    printf("Drop without W.");
                    break;
                }
                else {
                    printf("No class on this day."); 
                    break;
                }
            case 11 : if (day == 3 || day == 10 || day == 12 || day == 17 || day == 19 || day == 24){//checking lecture day
                    printf("Lecture.");
                    break;
                }
                if (day == 2 || day == 9 || day == 16 || day == 23 || day == 30){ //checking discussion day
                    printf("Discussion.");
                    break;
                }
                if (day == 5){ //checking for the other cases
                    printf("MIDTERM.");
                    break;
                }
                if (day == 6){
                    printf("Drop with W.");
                    break;
                }
                if (day == 25 || day == 26 || day == 27 || day == 28 || day == 29){
                    printf("Thanksgiving recess.");
                    break;
                }
            
                printf("No class on this day.");
                break;
            case 12: if (day == 1 || day == 3 || day == 8){//checking lecture day
                    printf("Lecture.");
                    break;
                }
                if (day == 7){ //checking discussion day
                    printf("Discussion.");  
                    break;
                }
                if (day == 10) { //checking for the other cases
                    printf("Last day of classes.");
                    break;
                }
                printf("No class on this day.");
                break;
        }

    // ADD Your code.  Be sure your output matches exactly.  
    // Check using reference binary
    // new comment
        
    return 0;
    
}
