#include <stdio.h>
int main()
{
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int numOfDays = 2;
    int month = 1;
    int year = 1901;
    int sundays = 0;
    for (int i = year; i <= 2000; i++) {
        for (int j = 0; j < 12; j++) {
            if (j == 1 && (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))) {
                numOfDays += 29;
            } else {
                numOfDays += daysInMonth[j];
            }
            if (numOfDays % 7 == 0) sundays++;
        }
    }
    printf("%d\n", sundays);
    return 0;
}