#ifndef __SINGLE_LINKED_LIST_H__
#define __SINGLE_LINKED_LIST_H__
#include <cstdint>

struct Node {
    int data;
    struct Node* next;
};

class SLList {

public:
    SLList();
    ~SLList();
    void push_back(int);
    int pop_front(void);


private:
    struct Node* head_;
    struct Node* tail_;
};
#endif
