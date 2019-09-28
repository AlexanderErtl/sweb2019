#include "sharedstring.h"
#include "stdio.h"

int main(void) {
  char buffer[20];
  int pos;
  scanf("%d", &pos);
  sharedread(pos, 20, buffer);
  printf("%s", buffer);

  return 0;
}
