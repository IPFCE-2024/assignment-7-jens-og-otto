#include <assert.h>
#include "stack.h"

int main()
{
    stack s;
    initialize(&s);
    assert(empty(&s) == true);

    int x = 10;
    push(x, &s);
    int y = pop(&s);

    assert(y == x);
    assert(empty(&s) == true);

    int x0 = 20;
    int x1 = 30;

    push(x0, &s);
    push(x1, &s);
    int y0 = pop(&s);
    int y1 = pop(&s);

    assert(y0 == x1);
    assert(y1 == x0);
    assert(empty(&s) == true);

    return 0;
}