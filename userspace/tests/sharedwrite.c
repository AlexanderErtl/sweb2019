#include "sharedstring.h"
#include "stdio.h"

int main(void) {
  char* str = "Hello world!";
  printf("pos: %d", sharedwrite(20, str));

  return 0;
}
