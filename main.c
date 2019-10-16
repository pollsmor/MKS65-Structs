#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structs.c"
#include "functions.h"

int main() {
  srand(time(NULL));

  printf("Pick three random structs, then print them \n");
  struct Pokemon p1 = pickStruct();
  printStruct(&p1);
  struct Pokemon p2 = pickStruct();
  printStruct(&p2);
  struct Pokemon p3 = pickStruct();
  printStruct(&p3);
  printf("\n");

  printf("Run modifyStruct(&p1, \"Missingno\", 0, \"Bird\", \"Normal\") \n");
  modifyStruct(&p1, "Missingno", 0, "Bird", "Normal");
  printStruct(&p1);
  printf("\n");

  printf("Run modifyStruct(&p2, \"Volcanion\", 721, \"Fire\", \"Water\") \n");
  modifyStruct(&p2, "Volcanion", 721, "Fire", "Water");
  printStruct(&p2);
  printf("\n");

  printf("Run modifyStruct(&p3, \"Sylveon\", 700, \"Fairy\", \"None\") \n");
  modifyStruct(&p3, "Sylveon", 700, "Fairy", "None");
  printStruct(&p3);
  printf("\n");

  return 0;
}
