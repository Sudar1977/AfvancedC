#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    uint32_t id;
    struct list *next;
} list;

int main(void)
{
    list* head=NULL;
      
    head = calloc(1,sizeof(list));
    head->id = 1;

    head->next = calloc(1,sizeof(list));
    head->next->id = 2;
    
    head->next->next = calloc(1,sizeof(list));
    head->next->next->id = 3;

    printf("%d %d %d\n",head->id, head->next->id, head->next->next->id);    
    return 0;
}
