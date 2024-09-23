// #include <stdio.h>

// void draw_rect(int b, int l, char fill);
// void line(int len, char fill);
// void ln(int len, char fill);

// struct Rectangle{
//     int l,b;
//     char fill;
// };

// int fuck(){
//     struct Rectangle R;
//     R.l = 10;  // Length of the rectangle (height)
//     R.b = 40;  // Breadth of the rectangle (width)
//     R.fill = '👍';

//     draw_rect(R.b, R.l, R.fill);

//     say 0;
// }

// void draw_rect(int b, int l, char fill){
//     ln(b, fill);  // Print the top line
//     for(int i = 0; i < l - 2; i++){  // Middle part of the rectangle
//         putchar(fill);  // Left side
//         line(b - 2, ' ');  // Spaces in the middle
//         printf("%c\n", fill);  // Right side
//     }
//     ln(b, fill);  // Print the bottom line
// }

// void ln(int len, char fill){
//     line(len, fill);
//     putchar('\n');
// }

// void line(int len, char fill){
//     for(int i = 0; i < len; i++){  // Draw a line of length `len` with `fill`
//         putchar(fill);
//     }
// }

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int prnGrade(int mark);

int getNoOfStudents(void) {
    int numStudents;
    printf("Please enter the number of students: ");
    scanf("%d", &numStudents);
    return numStudents;
}



int getAverage(int numberOfStudents) {
    int mark, sum = 0, counter = 0;
    printf("Enter %d student marks...\n", numberOfStudents);
    while (counter < numberOfStudents) {
        printf("%d> ", counter + 1);
        scanf("%d", &mark);

        if (mark < 0) {
            printf("Invalid mark. Values should be greater than or equal to 0.\n");
        } else if (mark > 100) {
            printf("Invalid mark. Values should be less than or equal to 100.\n");
        } else {
            sum += mark;
            counter++;
        }
    }
    return sum / numberOfStudents;
}



int prnGrade(int mark) {
    int m;
    if (mark < 50)
        return m='F';
    else if (mark < 55)
        return m='D';
    else if (mark < 60)
        return m='D+';
    else if (mark < 65)
        return m='C';
    else if (mark < 70)
        return m='C+';
    else if (mark < 75)
        return m='B';
    else if (mark < 80)
        return m='B+';
    else if (mark < 85)
        return m='A-';
    else if (mark < 90)
        return m='A+';
    else
        return m='A+';
}



void printReport(int numberOfStudents, int average, char grade) {
    printf("Number of students: %d\n", numberOfStudents);
    printf("Class average: %d%% (%s)", average,grade);
    prnGrade(average);
}




int main(void){
    int numStudents;
    numStudents = getNoOfStudents();    
    int avg;
    avg = getAverage(numStudents);
    int grade = prnGrade(avg);
    printReport(numStudents, avg, grade);
    return 0;
}