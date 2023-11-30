#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if (head == NULL) {
        return 0;
    }
    node * rabbit = (*head).next;
    node * turtle = head;
    while (1) {
        if (rabbit == NULL) return 1;
        if (rabbit == turtle) return 1;
        rabbit = rabbit->next;
        if (rabbit == NULL) return 0;
        rabbit = rabbit->next;
        turtle = turtle->next;
    }
}