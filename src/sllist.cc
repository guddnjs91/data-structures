#include "sllist.h"
#include <assert.h>

SLList::SLList() {
    head_ = tail_ = NULL;
}

SLList::~SLList() {
    Node* ptr = head_;
    if (ptr) {
        while (ptr) {
            Node* remove = ptr;
            ptr = ptr->next;
            delete remove;
        }
    }

    head_ = tail_ = NULL;
}

void SLList::push_back(int data) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;

    if (tail_) {
        tail_->next = new_node;
        tail_ = new_node;
    } else {
        head_ = tail_ = new_node;
    }
}

int SLList::pop_front(void) {
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
