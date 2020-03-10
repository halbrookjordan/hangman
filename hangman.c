#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void printTitle(void);
void singlePlayer(void);
void multiPlayer(void);
char getPlayers(void);

int main(void)
{
  printTitle();
  char players = getPlayers();

  if(players == '1'){
    singlePlayer();
  }
  else if(players == '2'){
    multiPlayer();
  }

  return 0;
}

void printTitle(void)
{
  system("clear||cls");
  printf("\t***************\n");
  printf("\t H A N G M A N\n");
  printf("\t***************\n");
}

char getPlayers(void)
{
  char players;

  printf("\n\nEnter 1 for single player or 2 for multiplayer or q to quit:");
  scanf("%c", &players);

  while(players != '1' && players != '2' && players != 'q'){
    printf("\nPlease enter 1, 2 or q:");
    scanf(" %c",&players);
    players = tolower(players);
  }

  return players;
}

void singlePlayer(void)
{
}

void multiPlayer(void)
{
}
