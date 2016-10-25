#ifndef __DOUBLE_LINKED_LIST_H__
#define __DOUBLE_LINKED_LIST_H__
#include <cstdint>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

class DLList {

public:
    DLList();
    ~DLList();
    void push_back(int);
    int pop_front(void);

private:
    struct Node* head_;
    struct Node* tail_;
};
#endif
