#include <stdio.h>

#include "structs.c"
#include "functions.h"

int main() {
  struct Pokemon p1 = pickStruct();
  printStruct(p1);

  return 0;
}
