#include "sharedstring.h"
#include "../../../common/include/kernel/syscall-definitions.h"
#include "sys/syscall.h"

extern void sharedread(long position, int length, char* buffer) {
  __syscall(sc_sharedread, position, length, (long)buffer, 0, 0);
}

extern int sharedwrite(int length, char* string) {
  return (int)__syscall(sc_sharedwrite, length, (long)string, 0, 0, 0);
}
