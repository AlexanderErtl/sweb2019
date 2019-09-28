#include "sharedstring.h"
#include "stdio.h"

int main(void) {
  sharedread(0, 20, 0);

  char* str = "Hello world!";
  printf("str: %p\n", str);
  int pos = sharedwrite(20, str);

  char buffer[20];
  printf("buffer: %p\n", buffer);
  sharedread(pos, 20, buffer);
  printf("%s", buffer);

  return 0;
}
