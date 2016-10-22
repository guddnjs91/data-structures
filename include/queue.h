#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <cstdint>
#define DEFAULT_QUEUE_SIZE (0x1U << 10)

class Queue {

public:
    Queue();
    ~Queue();
    void enqueue(int);
    int dequeue(void);

private:
    int start_;
    int end_;
    int *elements_;
    int capacity_;
};
#endif
