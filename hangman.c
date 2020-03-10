#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printTitle(void);

int main(void)
{
  printTitle();

  return 0;
}

void printTitle(void)
{
  system("clear");
  printf("\t***************\n");
  printf("\t H A N G M A N\n");
  printf("\t***************\n");
  printf("\n\nPress ENTER to continue");
  getchar();
}
