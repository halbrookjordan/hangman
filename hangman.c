#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char printTitle(void);
void singlePlayer(void);
void multiPlayer(void);

int main(void)
{
  char players = printTitle();

  if(players == '1'){
    singlePlayer();
  }
  else{
    multiPlayer();
  }

  return 0;
}

char printTitle(void)
{
  char players;
  system("clear");
  printf("\t***************\n");
  printf("\t H A N G M A N\n");
  printf("\t***************\n");
  printf("\n\nEnter 1 for single player or 2 for multiplayer:");
  scanf("%c", &players);
  
  while(players != '1' && players != '2'){
    printf("\nPlease enter 1 or 2:");
    scanf(" %c", &players);
  }

  return players;
}

void singlePlayer(void)
{
}

void multiPlayer(void)
{
}
