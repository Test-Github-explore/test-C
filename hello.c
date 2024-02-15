#include<stdio.h>

int main(void){
   int id_sequence[3];

/* Populate the id array. */
   id_sequence[0] = 123;
   id_sequence[1] = 234;
   id_sequence[2] = 345;
   id_sequence[3] = 456;
   return 0;
}

void str04(){
/* STR04-C:基本文字集合にある文字を表すには単なる char を使用する START*/
   size_t len;
   char cstr[] = "char string";
   signed char scstr[] = "signed char string";
   unsigned char ucstr[] = "unsigned char string";

   len = strlen(cstr);
   len = strlen(scstr);  /* char が符号無しならば警告する */
   len = strlen(ucstr);  /* char が符号付きならば警告する */
/* STR04-C END*/
   return ;
}
   

