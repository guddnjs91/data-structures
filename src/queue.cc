#include "queue.h"
#include <assert.h>

inline int distance(int x, int y) {
    return (x > y) ? (x - y) : (y - x);
}

Queue::Queue() {
    start_ = 0;
    end_ = 0;
    elements_ = new int[DEFAULT_QUEUE_SIZE];
    capacity_ = DEFAULT_QUEUE_SIZE;
}

Queue::~Queue() {
    start_ = 0;
    end_ = 0;
    delete elements_;
    capacity_ = 0;
}

void Queue::enqueue(int element) {
    assert(distance(end_, start_) != capacity_);

    elements_[end_] = element;
    end_ = (end_ + 1) % capacity_;
}

int Queue::dequeue(void) {
    assert(distance(end_, start_) != 0);

    int ret = elements_[start_];
    start_ = (start_ + 1) % capacity_;
    return ret;
}
