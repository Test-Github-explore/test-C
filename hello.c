#include <stdlib.h>
 
enum { BUFFER_SIZE = 32 };

void main(void) {
  char *text_buffer = (char *)malloc(BUFFER_SIZE); 
  if (text_buffer == NULL) {
    return;
  }
  return;
}
