#include <iostream>
#include "stack.h"

int main(int argc, const char *argv[]) {

    Stack s;

    for (int i = 0; i < 4097; i++) {
        s.push(i);
    }
    s.print();
    int num = s.pop();
    printf("%d %d", num, s.top());

    return 0;
}
