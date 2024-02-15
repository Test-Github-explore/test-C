#include <stdlib.h>
 
enum { BUFFER_SIZE = 32 };

int main(void) {
  char *text_buffer = (char *)malloc(BUFFER_SIZE); 
  if (text_buffer == NULL) {
    return -1;
  }
  return 0;
}
