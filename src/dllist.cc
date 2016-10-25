#include "dllist.h"
#include <assert.h>

DLList::DLList() {
    head_ = tail_ = NULL;
}

DLList::~DLList() {
    Node *ptr = head_;
    if (ptr) {
        while (ptr) {
            Node *remove = ptr;
            ptr = ptr->next;
            delete remove;
        }
    }

    head_ = tail_ = NULL;
}

void DLList::push_back(int data) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = new_node->prev = NULL;

    if (tail_) {
        new_node->prev = tail_;
        tail_ = new_node;
    } else {
        head_ = tail_ = new_node;
    }
}

int DLList::pop_front(void) {
    assert(head_ != NULL);

    int ret = head_->data;
    if (head_ == tail_) {
        tail_ = NULL;
    }
    Node* ptr = head_;
    head_ = head_->next;
    delete ptr;

    return ret;
}
