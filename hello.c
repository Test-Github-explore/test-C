/*#include<stdio.h>

int main(void){
   int id_sequence[3];


   id_sequence[0] = 123;
   id_sequence[1] = 234;
   id_sequence[2] = 345;
   id_sequence[3] = 456;
   return 0;
}

void str04(){

   size_t len;
   char cstr[] = "char string";
   signed char scstr[] = "signed char string";
   unsigned char ucstr[] = "unsigned char string";

   len = strlen(cstr);
   len = strlen(scstr);  /* char が符号無しならば警告する */
   len = strlen(ucstr);  /* char が符号付きならば警告する */

   return ;
}*/

#include <stdlib.h>
 
struct node {
  int value;
  struct node *next;
};
 
void free_list(struct node *head) {
  for (struct node *p = head; p != NULL; p = p->next) {
    free(p);
  }
}
   

