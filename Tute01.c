/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1 , mark2 ,sum ;
  float average ;

  printf("Enter mark of subject 1:");
  scanf("%i",&mark1);

  printf("Enter mark of subject 2:");
  scanf("%i",&mark2);

  sum = mark1 + mark2;
  average = sum/2;

  printf("Average is:%.1f" ,average);
  return 0;
}

