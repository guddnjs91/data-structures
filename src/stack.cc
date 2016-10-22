#include "stack.h"
#include "assert.h"
#include "stdio.h"

Stack::Stack() {
    top_ = -1;
    size_ = 0;
    max_size_ = 1024;
    elements_ = new int[1024];
}

Stack::~Stack() {
    top_ = -1;
    size_ = 0;
    max_size_ = 1024;
    delete elements_;
}

int Stack::top() {
    assert(size_ != 0);
    return elements_[top_];
}

void Stack::push(int element) {
    if (top_ == max_size_ - 1) {
        this->resize();
    }
    elements_[++top_] = element;
    size_++;
}

int Stack::pop() {
    int ret = elements_[top_--];
    size_--;
    return ret;
}

void Stack::resize() {
    max_size_ *= 2;
    int *temp = new int[max_size_];
    for (int i = 0; i < max_size_ / 2; i++) {
        temp[i] = elements_[i];
    }
    elements_ = temp;
    
}

void Stack::print() {
    for (int i = size_ - 1; i != 0; i--) {
        printf("%d\n", elements_[i]);
    }
    printf("size     : %d\n", size_);
    printf("max_size : %d\n", max_size_);
    printf("top now  : %d\n", top_);
}
