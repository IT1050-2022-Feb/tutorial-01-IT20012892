/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mrk1,mrk2,sum=0;
  float avg;
  printf("Enter Mark1:");
  scanf("%d",&mrk1);
  printf("Enter Mark2:");
  scanf("%d",&mrk2);
  sum=mrk1+mrk2;
  avg=sum/2.0;
  printf("Average:%.2f",avg);

  
  return 0;
}

