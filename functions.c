#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>

#include "structs.c"
#include "functions.h"

struct Pokemon pickStruct() {
  struct Pokemon p1;
  strcpy(p1.name, "Vulpix");
  p1.dexNum = 37;
  strcpy(p1.type1, "Fire");
  strcpy(p1.type2, "None");

  struct Pokemon p2;
  strcpy(p2.name, "Eevee");
  p2.dexNum = 133;
  strcpy(p2.type1, "Normal");
  strcpy(p2.type2, "None");

  struct Pokemon p3;
  strcpy(p3.name, "Charizard");
  p3.dexNum = 6;
  strcpy(p3.type1, "Fire");
  strcpy(p3.type2, "Flying"); //not a dragon somehow

  //Randomly pick one of those structs
  srand(time(0));
  int randInt = rand() % 3; //index 0 to 2

  if (randInt == 0)
    return p1;

  else if (randInt == 1)
    return p2;

  return p3;
}

void printStruct(struct Pokemon pokemon) {
  printf("Name: %s \n", pokemon.name);
  printf("Dex number: %d \n", pokemon.dexNum);
  printf("Type 1: %s \n", pokemon.type1);
  printf("Type 2: %s \n", pokemon.type2);
}
