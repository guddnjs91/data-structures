#ifndef __STACK_H__
#define __STACK_H__

#include <cstdint>

#define DEFAULT_STACK_SIZE (0x1U << 10)

class Stack {

public:
    Stack();
    ~Stack();

    int top(void);
    void push(int);
    int pop(void);
    void resize(void);
    void print(void);

private:
    int top_;
    int *elements_;
    int size_;
    int max_size_;
};
#endif
