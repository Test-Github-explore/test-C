#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

int main() {
    node *head = malloc(sizeof(node));
    node *p;

    // リストにノードを追加するコードは省略

    for (p = head; p != NULL; p = p->next)
        free(p);

    return 0;
}
