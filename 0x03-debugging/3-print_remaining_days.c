#include <stdio.h>
#include "main.h"
/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
int isleapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
int totaldays;

if (month < 1 || month > 12 || day < 1 || day > 31)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
if (month == 2 && day > 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if (isleapyear && month >= 3)
{
day++;
}

if (month == 2)
{
totaldays = 31 + day;
}
else if (month <= 7)
{
totaldays = 31 * (month - 1) + day;
}
else
{
totaldays = 31 * (month - 1) + day - ((month - 1) / 2);
}

if (isleapyear && month > 2)
{
totaldays++;
}

printf("Day of the year: %d\n", totaldays);
printf("Remaining days: %d\n", isleapyear ? 366 - totaldays : 365 - totaldays);
}
